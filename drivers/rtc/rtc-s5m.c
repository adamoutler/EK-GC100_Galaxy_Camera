/*
 * rtc-s5m.c
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *              http://www.samsung.com
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */
#if defined(CONFIG_TARGET_LOCALE_CHN)
#define RTC_SET_TIME_FILE_LOG
#endif

#include <linux/module.h>
#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/bcd.h>
#include <linux/rtc.h>
#include <linux/delay.h>
#include <linux/mutex.h>
#include <linux/platform_device.h>
#include <linux/mfd/s5m87xx/s5m-core.h>
#include <linux/mfd/s5m87xx/s5m-rtc.h>
#if defined(CONFIG_RTC_ALARM_BOOT)
#include <linux/reboot.h>
#endif

#if defined(RTC_SET_TIME_FILE_LOG)
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <linux/file.h>
#include <linux/fs.h>
#include <linux/fcntl.h>
#include <asm/uaccess.h>
#endif

#if defined(CONFIG_RTC_POWER_OFF)
extern bool fake_shut_down;
#endif

struct s5m_rtc_info {
	struct device		*dev;
	struct s5m87xx_dev	*s5m87xx;
	struct i2c_client	*rtc;
	struct rtc_device	*rtc_dev;
	struct mutex		lock;
	int irq;
#if defined(CONFIG_RTC_POWER_OFF)
	int irq2;
	bool fake_pwr_off;
#elif defined(CONFIG_RTC_ALARM_BOOT)
	int irq2;
#endif
	int device_type;
	int rtc_24hr_mode;
	bool wtsr_smpl;
	bool alarm_enabled;
#if defined(RTC_SET_TIME_FILE_LOG)
	spinlock_t rtc_set_time_lock;
#endif
};

static inline int s5m8767_rtc_calculate_wday(u8 shifted)
{
	int counter = -1;
	while (shifted) {
		shifted >>= 1;
		counter++;
	}
	return counter;
}

static void s5m8767_data_to_tm(u8 *data, struct rtc_time *tm,
				int rtc_24hr_mode)
{
	tm->tm_sec = data[RTC_SEC] & 0x7f;
	tm->tm_min = data[RTC_MIN] & 0x7f;
	if (rtc_24hr_mode)
		tm->tm_hour = data[RTC_HOUR] & 0x1f;
	else {
		tm->tm_hour = data[RTC_HOUR] & 0x0f;
		if (data[RTC_HOUR] & HOUR_PM_MASK)
			tm->tm_hour += 12;
	}

	tm->tm_wday = s5m8767_rtc_calculate_wday(data[RTC_WEEKDAY] & 0x7f);
	tm->tm_mday = data[RTC_DATE] & 0x1f;
	tm->tm_mon = (data[RTC_MONTH] & 0x0f) - 1;
	tm->tm_year = (data[RTC_YEAR1] & 0x7f) + (bcd2bin(data[RTC_YEAR2]) * 100);
	tm->tm_year -= 1900;
	tm->tm_yday = 0;
	tm->tm_isdst = 0;
}

static void s5m8767_tm_to_data(struct rtc_time *tm, u8 *data)
{
	data[RTC_SEC] = tm->tm_sec;
	data[RTC_MIN] = tm->tm_min;

	if (tm->tm_hour >= 12)
		data[RTC_HOUR] = tm->tm_hour | HOUR_PM_MASK;
	else
		data[RTC_HOUR] = tm->tm_hour & ~HOUR_PM_MASK;

	data[RTC_WEEKDAY] = 1 << tm->tm_wday;
	data[RTC_DATE] = tm->tm_mday;
	data[RTC_MONTH] = tm->tm_mon + 1;
	data[RTC_YEAR1] = tm->tm_year % 100;
	data[RTC_YEAR2] = bin2bcd((tm->tm_year + 1900) / 100);
}

static inline int s5m8767_rtc_set_time_reg(struct s5m_rtc_info *info)
{
	int ret;
	u8 data;

	ret = s5m_reg_read(info->rtc, S5M87XX_RTC_UDR_CON, &data);
	if (ret < 0)
		return ret;

	data |= RTC_TIME_EN_MASK;
	data |= (RTC_UDR_MASK | RTC_UDR_T_MASK);
	data &= ~RTC_TEST_OSC_MASK;

	ret = s5m_reg_write(info->rtc, S5M87XX_RTC_UDR_CON, data);
	if (ret < 0)
		dev_err(info->dev, "%s: fail to write update reg(%d)\n",
			__func__, ret);
	else
		usleep_range(1000, 1000);

	return ret;
}

static inline int s5m8767_rtc_set_alarm_reg(struct s5m_rtc_info *info)
{
	int ret;
	u8 data;

	ret = s5m_reg_read(info->rtc, S5M87XX_RTC_UDR_CON, &data);
	if (ret < 0)
		return ret;

	data &= ~RTC_TIME_EN_MASK;
	data |= (RTC_UDR_MASK | RTC_UDR_T_MASK);
	data &= ~RTC_TEST_OSC_MASK;

	ret = s5m_reg_write(info->rtc, S5M87XX_RTC_UDR_CON, data);

	if (ret < 0) {
		dev_err(info->dev, "%s: fail to write update reg(%d)\n",
				__func__, ret);
	} else if (fake_shut_down) {
		mdelay(1);
	} else
		usleep_range(1000, 1000);
	return ret;
}

static void s5m8763_data_to_tm(u8 *data, struct rtc_time *tm)
{
	tm->tm_sec = bcd2bin(data[RTC_SEC]);
	tm->tm_min = bcd2bin(data[RTC_MIN]);

	if (data[RTC_HOUR] & HOUR_12) {
		tm->tm_hour = bcd2bin(data[RTC_HOUR] & 0x1f);
		if (data[RTC_HOUR] & HOUR_PM)
			tm->tm_hour += 12;
	} else
		tm->tm_hour = bcd2bin(data[RTC_HOUR] & 0x3f);

	tm->tm_wday = data[RTC_WEEKDAY] & 0x07;
	tm->tm_mday = bcd2bin(data[RTC_DATE]);
	tm->tm_mon = bcd2bin(data[RTC_MONTH]);
	tm->tm_year = bcd2bin(data[RTC_YEAR1]) + bcd2bin(data[RTC_YEAR2]) * 100;
	tm->tm_year -= 1900;
}

static void s5m8763_tm_to_data(struct rtc_time *tm, u8 *data)
{
	data[RTC_SEC] = bin2bcd(tm->tm_sec);
	data[RTC_MIN] = bin2bcd(tm->tm_min);
	data[RTC_HOUR] = bin2bcd(tm->tm_hour);
	data[RTC_WEEKDAY] = tm->tm_wday;
	data[RTC_DATE] = bin2bcd(tm->tm_mday);
	data[RTC_MONTH] = bin2bcd(tm->tm_mon);
	data[RTC_YEAR1] = bin2bcd(tm->tm_year % 100);
	data[RTC_YEAR2] = bin2bcd((tm->tm_year + 1900) / 100);
}

static int s5m_rtc_read_time(struct device *dev, struct rtc_time *tm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	int ret;

	mutex_lock(&info->lock);

	ret = s5m_bulk_read(info->rtc, S5M87XX_RTC_SEC, 8, data);
	if (ret < 0)
		goto out;

	switch (info->device_type) {
	case S5M8763X:
		s5m8763_data_to_tm(data, tm);
		break;

	case S5M8767X:
		s5m8767_data_to_tm(data, tm, info->rtc_24hr_mode);
		break;

	default:
		ret = (-EINVAL);
		goto out;
	}

	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm->tm_year, 1 + tm->tm_mon, tm->tm_mday,
		tm->tm_hour, tm->tm_min, tm->tm_sec, tm->tm_wday);

out:
	mutex_unlock(&info->lock);
	if (ret >= 0)
		ret = rtc_valid_tm(tm);
	return ret;
}

static int s5m_rtc_set_time(struct device *dev, struct rtc_time *tm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	int ret = 0, i;

#if defined(RTC_SET_TIME_FILE_LOG)
	char logpath[] = "/data/rtc_set_time.log";
	struct file *filp;
	char buf[100];
	int fd;
	loff_t pos = 0;
	struct rtc_time cur_time;
	mm_segment_t old_fs;
	static unsigned int call_count = 1;
	unsigned long flags;
	struct task_struct *task = current;
#endif


	switch (info->device_type) {
	case S5M8763X:
		s5m8763_tm_to_data(tm, data);
		break;
	case S5M8767X:
		s5m8767_tm_to_data(tm, data);
		break;
	default:
		return -EINVAL;
	}

#if defined(RTC_SET_TIME_FILE_LOG)
	/* kernel memory access setting */
	old_fs = get_fs();
	set_fs(KERNEL_DS);
	fd = sys_open(logpath, O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd<0)	{
		pr_err("[%s] can't open %s\n", __func__, logpath);
		goto out2;
	}

	filp = fget(fd);
//	spin_lock_irqsave(&info->rtc_set_time_lock, flags);

	/* Read current time */
	s5m_rtc_read_time(dev, &cur_time);
	sprintf(buf, "%s[%d]: %3d/%2d/%2d %2d:%2d:%2d(%d)", __func__, call_count++,
			cur_time.tm_year, cur_time.tm_mon, cur_time.tm_mday,
			cur_time.tm_hour, cur_time.tm_min, cur_time.tm_sec, cur_time.tm_wday);
	vfs_write(filp, buf, strlen(buf), &pos);
#endif
	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm->tm_year, 1 + tm->tm_mon, tm->tm_mday,
		tm->tm_hour, tm->tm_min, tm->tm_sec, tm->tm_wday);

#if defined(RTC_SET_TIME_FILE_LOG)
	sprintf(buf, "  ->  %3d/%2d/%2d %2d:%2d:%2d(%d)",
		tm->tm_year, tm->tm_mon, tm->tm_mday,
		tm->tm_hour, tm->tm_min, tm->tm_sec, tm->tm_wday);
	vfs_write(filp, buf, strlen(buf), &pos);
#endif
	mutex_lock(&info->lock);

	ret = s5m_bulk_write(info->rtc, S5M87XX_RTC_SEC, 8, data);
        if (ret < 0)
		goto out;

	for (i = 0; i < 2; i++)
		ret = s5m8767_rtc_set_time_reg(info);

#if defined(RTC_SET_TIME_FILE_LOG)
	sprintf(buf, "<task=%s[%d]>\n", task->comm, task->pid);
	vfs_write(filp, buf, strlen(buf), &pos);
#endif
out:
	mutex_unlock(&info->lock);
#if defined(RTC_SET_TIME_FILE_LOG)
	//spin_unlock_irqrestore(&info->rtc_set_time_lock, flags);	
	fput(filp);
#endif
out2:
#if defined(RTC_SET_TIME_FILE_LOG)
	/* restore kernel memory setting */
	set_fs(old_fs);
#endif
	return ret;
}

static int s5m_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	u8 val;
	int ret, i;

	mutex_lock(&info->lock);

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
	if (ret < 0)
		goto out;

	switch (info->device_type) {
	case S5M8763X:
		s5m8763_data_to_tm(data, &alrm->time);
		ret = s5m_reg_read(info->rtc, S5M87XX_ALARM0_CONF, &val);
		if (ret < 0)
			goto out;

		alrm->enabled = !!val;

		ret = s5m_reg_read(info->rtc, S5M87XX_RTC_STATUS, &val);
		if (ret < 0)
			goto out;

		break;

	case S5M8767X:
		s5m8767_data_to_tm(data, &alrm->time, info->rtc_24hr_mode);
		printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
			1900 + alrm->time.tm_year, 1 + alrm->time.tm_mon,
			alrm->time.tm_mday, alrm->time.tm_hour,
			alrm->time.tm_min, alrm->time.tm_sec,
			alrm->time.tm_wday);

		alrm->enabled = 0;
		for (i = 0; i < 7; i++) {
			if (data[i] & ALARM_ENABLE_MASK) {
				alrm->enabled = 1;
				break;
			}
		}

		alrm->pending = 0;
		ret = s5m_reg_read(info->rtc, S5M87XX_RTC_STATUS, &val);
		if (ret < 0)
			goto out;
		break;

	default:
		ret = (-EINVAL);
		goto out;
	}

	if (val & ALARM0_STATUS)
		alrm->pending = 1;
	else
		alrm->pending = 0;
out:
	mutex_unlock(&info->lock);
	return ret;
}

static int s5m_rtc_stop_alarm(struct s5m_rtc_info *info)
{
	u8 data[8];
	int ret, i;
	struct rtc_time tm;

#if defined(CONFIG_RTC_POWER_OFF)
	if (info->fake_pwr_off)
		return 0;
#endif
	if (!mutex_is_locked(&info->lock)) {
		dev_warn(info->dev, "%s: should have mutex locked\n", __func__);
		return -EPERM;
	}

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
	if (ret < 0)
		return ret;

	s5m8767_data_to_tm(data, &tm, info->rtc_24hr_mode);
	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm.tm_year, 1 + tm.tm_mon, tm.tm_mday,
		tm.tm_hour, tm.tm_min, tm.tm_sec, tm.tm_wday);

	switch (info->device_type) {
	case S5M8763X:
		ret = s5m_reg_write(info->rtc, S5M87XX_ALARM0_CONF, 0);
		break;

	case S5M8767X:
		for (i = 0; i < 7; i++)
			data[i] &= ~ALARM_ENABLE_MASK;

		ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
		if (ret < 0)
			return ret;

		ret = s5m8767_rtc_set_alarm_reg(info);

		break;

	default:
		return -EINVAL;
	}

	info->alarm_enabled = false;

	return ret;
}

#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
static int s5m_rtc_stop_alarm_poweroff(struct s5m_rtc_info *info)
{
	u8 data[8];
	int ret, i;
	struct rtc_time tm;

	if (!mutex_is_locked(&info->lock)) {
		dev_warn(info->dev, "%s: should have mutex locked\n", __func__);
		return -EPERM;
	}

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
	if (ret < 0)
		return ret;

	s5m8767_data_to_tm(data, &tm, info->rtc_24hr_mode);
	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm.tm_year, 1 + tm.tm_mon, tm.tm_mday,
		tm.tm_hour, tm.tm_min, tm.tm_sec, tm.tm_wday);

	switch (info->device_type) {
	case S5M8763X:
		ret = s5m_reg_write(info->rtc, S5M87XX_ALARM1_CONF, 0);
		break;

	case S5M8767X:
		for (i = 0; i < 7; i++)
			data[i] &= ~ALARM_ENABLE_MASK;

		ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
		if (ret < 0)
			return ret;

		ret = s5m8767_rtc_set_alarm_reg(info);

		break;

	default:
		return -EINVAL;
	}

	return ret;
}
#endif

static int s5m_rtc_start_alarm(struct s5m_rtc_info *info)
{
	int ret;
	u8 data[8];
	u8 alarm0_conf;
	struct rtc_time tm;

#if defined(CONFIG_RTC_POWER_OFF)
	if (info->fake_pwr_off)
		return 0;
#endif
	if (!mutex_is_locked(&info->lock)) {
		dev_warn(info->dev, "%s: should have mutex locked\n", __func__);
		return -EPERM;
	}

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
	if (ret < 0)
		return ret;

	s5m8767_data_to_tm(data, &tm, info->rtc_24hr_mode);
	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm.tm_year, 1 + tm.tm_mon, tm.tm_mday,
		tm.tm_hour, tm.tm_min, tm.tm_sec, tm.tm_wday);

	switch (info->device_type) {
	case S5M8763X:
		alarm0_conf = 0x77;
		ret = s5m_reg_write(info->rtc, S5M87XX_ALARM0_CONF, alarm0_conf);
		break;

	case S5M8767X:
		data[RTC_SEC] |= ALARM_ENABLE_MASK;
		data[RTC_MIN] |= ALARM_ENABLE_MASK;
		data[RTC_HOUR] |= ALARM_ENABLE_MASK;
		data[RTC_WEEKDAY] &= ~ALARM_ENABLE_MASK;
		if (data[RTC_DATE] & 0x1f)
			data[RTC_DATE] |= ALARM_ENABLE_MASK;
		if (data[RTC_MONTH] & 0xf)
			data[RTC_MONTH] |= ALARM_ENABLE_MASK;
		if (data[RTC_YEAR1] & 0x7f)
			data[RTC_YEAR1] |= ALARM_ENABLE_MASK;

		ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
		if (ret < 0)
			return ret;
		ret = s5m8767_rtc_set_alarm_reg(info);

		break;

	default:
		return -EINVAL;
	}

	info->alarm_enabled = true;

	return ret;
}

#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
static int s5m_rtc_start_alarm_poweroff(struct s5m_rtc_info *info)
{
	int ret;
	u8 data[8];
	u8 alarm0_conf;
	struct rtc_time tm;

	if (!mutex_is_locked(&info->lock)) {
		dev_warn(info->dev, "%s: should have mutex locked\n", __func__);
		return -EPERM;
	}

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
	if (ret < 0)
		return ret;

	s5m8767_data_to_tm(data, &tm, info->rtc_24hr_mode);
	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + tm.tm_year, 1 + tm.tm_mon, tm.tm_mday,
		tm.tm_hour, tm.tm_min, tm.tm_sec, tm.tm_wday);

	switch (info->device_type) {
	case S5M8763X:
		alarm0_conf = 0x77;
		ret = s5m_reg_write(info->rtc, S5M87XX_ALARM1_CONF,
			alarm0_conf);
		break;

	case S5M8767X:
		data[RTC_SEC] |= ALARM_ENABLE_MASK;
		data[RTC_MIN] |= ALARM_ENABLE_MASK;
		data[RTC_HOUR] |= ALARM_ENABLE_MASK;
		data[RTC_WEEKDAY] &= ~ALARM_ENABLE_MASK;
		if (data[RTC_DATE] & 0x1f)
			data[RTC_DATE] |= ALARM_ENABLE_MASK;
		if (data[RTC_MONTH] & 0xf)
			data[RTC_MONTH] |= ALARM_ENABLE_MASK;
		if (data[RTC_YEAR1] & 0x7f)
			data[RTC_YEAR1] |= ALARM_ENABLE_MASK;

		ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
		if (ret < 0)
			return ret;
		ret = s5m8767_rtc_set_alarm_reg(info);

		break;

	default:
		return -EINVAL;
	}

	return ret;
}
#endif

static int s5m_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	int ret;

	switch (info->device_type) {
	case S5M8763X:
		s5m8763_tm_to_data(&alrm->time, data);
		break;

	case S5M8767X:
		s5m8767_tm_to_data(&alrm->time, data);
		break;

	default:
		return -EINVAL;
	}

	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + alrm->time.tm_year, 1 + alrm->time.tm_mon,
		alrm->time.tm_mday, alrm->time.tm_hour, alrm->time.tm_min,
		alrm->time.tm_sec, alrm->time.tm_wday);

	mutex_lock(&info->lock);

	ret = s5m_rtc_stop_alarm(info);
	if (ret < 0)
		goto out;

	ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM0_SEC, 8, data);
	if (ret < 0)
		goto out;

	ret = s5m8767_rtc_set_alarm_reg(info);
	if (ret < 0)
		goto out;

	if (alrm->enabled)
		ret = s5m_rtc_start_alarm(info);
out:
	mutex_unlock(&info->lock);
	return ret;
}

#if defined(CONFIG_RTC_POWER_OFF)
static int s5m_rtc_set_alarm_poweroff(struct device *dev,
						struct rtc_wkalrm *alrm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	int ret;

	switch (info->device_type) {
	case S5M8763X:
		if (alrm->enabled) {
			data[RTC_SEC] = bin2bcd(alrm->time.tm_sec);
			data[RTC_MIN] = bin2bcd(alrm->time.tm_min);
			data[RTC_HOUR] = bin2bcd(alrm->time.tm_hour);
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = bin2bcd(alrm->time.tm_mday);
			data[RTC_MONTH] = bin2bcd(alrm->time.tm_mon);
			data[RTC_YEAR1] = bin2bcd(alrm->time.tm_year % 100);
			data[RTC_YEAR2] =
				bin2bcd((alrm->time.tm_year + 1900) / 100);
		} else {
			data[RTC_SEC] = 0;
			data[RTC_MIN] = 0;
			data[RTC_HOUR] = 0;
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = 1;
			data[RTC_MONTH] = 0;
			data[RTC_YEAR1] = 0;
			data[RTC_YEAR2] = 0;
		}
		break;

	case S5M8767X:
		if (alrm->enabled) {
			data[RTC_SEC] = alrm->time.tm_sec;
			data[RTC_MIN] = alrm->time.tm_min;
			if (alrm->time.tm_hour >= 12)
				data[RTC_HOUR] =
					alrm->time.tm_hour | HOUR_PM_MASK;
			else
				data[RTC_HOUR] =
					alrm->time.tm_hour & ~HOUR_PM_MASK;
			data[RTC_WEEKDAY] = 1 << alrm->time.tm_wday;
			data[RTC_DATE] = alrm->time.tm_mday;
			data[RTC_MONTH] = alrm->time.tm_mon + 1;
			data[RTC_YEAR1] = alrm->time.tm_year % 100;
			data[RTC_YEAR2] =
				bin2bcd((alrm->time.tm_year + 1900) / 100);
		} else {
			data[RTC_SEC] = 0;
			data[RTC_MIN] = 0;
			data[RTC_HOUR] = 0;
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = 1;
			data[RTC_MONTH] = 0;
			data[RTC_YEAR1] = 0;
			data[RTC_YEAR2] = 0;
		}
		break;

	default:
		return -EINVAL;
	}

	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + alrm->time.tm_year, 1 + alrm->time.tm_mon,
		alrm->time.tm_mday, alrm->time.tm_hour, alrm->time.tm_min,
		alrm->time.tm_sec, alrm->time.tm_wday);

	mutex_lock(&info->lock);

	ret = s5m_rtc_stop_alarm_poweroff(info);
	if (ret < 0)
		goto out;

	ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
	if (ret < 0)
		goto out;

	ret = s5m8767_rtc_set_alarm_reg(info);
	if (ret < 0)
		goto out;

	if (alrm->enabled)
		ret = s5m_rtc_start_alarm_poweroff(info);
out:
	mutex_unlock(&info->lock);
	return ret;
}
#endif

static int s5m_rtc_alarm_irq_enable(struct device *dev,
					unsigned int enabled)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	int ret;

	mutex_lock(&info->lock);
	if (enabled) {
		ret = s5m_rtc_start_alarm(info);
	} else {
		ret = s5m_rtc_stop_alarm(info);
	}
	mutex_unlock(&info->lock);

	return ret;
}

static irqreturn_t s5m_rtc_alarm_irq(int irq, void *data)
{
	struct s5m_rtc_info *info = data;

	rtc_update_irq(info->rtc_dev, 1, RTC_IRQF | RTC_AF);

	return IRQ_HANDLED;
}

#if defined(CONFIG_RTC_POWER_OFF)
static irqreturn_t s5m_rtc_alarm2_irq(int irq, void *data)
{
	struct s5m_rtc_info *info = data;
	char temp_buf[30];
	char *envp[2];

	snprintf(temp_buf, sizeof(temp_buf), "PMEVENT=AutoPowerOff");
	envp[0] = temp_buf;
	envp[1] = NULL;

	dev_info(info->dev, "%s: uevent: %s\n", __func__, temp_buf);
	kobject_uevent_env(&info->dev->kobj, KOBJ_CHANGE, envp);

	return IRQ_HANDLED;
}

static int s5m_rtc_alarm_enable(struct device *dev, int enable)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	int ret = 0;

	mutex_lock(&info->lock);
	if (enable) {
		info->fake_pwr_off = false;
		if (info->alarm_enabled)
			ret = s5m_rtc_start_alarm(info);
	} else {
		if (!info->alarm_enabled)
			ret = s5m_rtc_stop_alarm(info);
		info->fake_pwr_off = true;
	}
	mutex_unlock(&info->lock);

	return ret;
}
#elif defined(CONFIG_RTC_ALARM_BOOT)
static irqreturn_t s5m_rtc_alarm2_irq(int irq, void *data)
{
	struct s5m_rtc_info *info = data;
	char temp_buf[30];
	char *envp[2];

	snprintf(temp_buf, sizeof(temp_buf), "PMEVENT=AutoPowerOff");
	envp[0] = temp_buf;
	envp[1] = NULL;

	if (lpcharge == 1)
		kernel_restart(NULL);

	rtc_update_irq(info->rtc_dev, 1, RTC_IRQF | RTC_AF);

	return IRQ_HANDLED;
}
#endif


#if defined(CONFIG_RTC_ALARM_BOOT)
static int s5m_rtc_set_alarm_boot(struct device *dev,
				      struct rtc_wkalrm *alrm)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	u8 data[8];
	int ret;

	switch (info->device_type) {
	case S5M8763X:
		if (alrm->enabled) {
			data[RTC_SEC] = bin2bcd(alrm->time.tm_sec);
			data[RTC_MIN] = bin2bcd(alrm->time.tm_min);
			data[RTC_HOUR] = bin2bcd(alrm->time.tm_hour);
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = bin2bcd(alrm->time.tm_mday);
			data[RTC_MONTH] = bin2bcd(alrm->time.tm_mon);
			data[RTC_YEAR1] = bin2bcd(alrm->time.tm_year % 100);
			data[RTC_YEAR2] =
				bin2bcd((alrm->time.tm_year + 1900) / 100);
		} else {
			data[RTC_SEC] = 0;
			data[RTC_MIN] = 0;
			data[RTC_HOUR] = 0;
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = 1;
			data[RTC_MONTH] = 0;
			data[RTC_YEAR1] = 0;
			data[RTC_YEAR2] = 0;
		}
		break;

	case S5M8767X:
		if (alrm->enabled) {
			data[RTC_SEC] = alrm->time.tm_sec;
			data[RTC_MIN] = alrm->time.tm_min;
			if (alrm->time.tm_hour >= 12)
				data[RTC_HOUR] =
					alrm->time.tm_hour | HOUR_PM_MASK;
			else
				data[RTC_HOUR] =
					alrm->time.tm_hour & ~HOUR_PM_MASK;
			data[RTC_WEEKDAY] = 1 << alrm->time.tm_wday;
			data[RTC_DATE] = alrm->time.tm_mday;
			data[RTC_MONTH] = alrm->time.tm_mon + 1;
			data[RTC_YEAR1] = alrm->time.tm_year % 100;
			data[RTC_YEAR2] =
				bin2bcd((alrm->time.tm_year + 1900) / 100);
		} else {
			data[RTC_SEC] = 0;
			data[RTC_MIN] = 0;
			data[RTC_HOUR] = 0;
			data[RTC_WEEKDAY] = 0;
			data[RTC_DATE] = 1;
			data[RTC_MONTH] = 0;
			data[RTC_YEAR1] = 0;
			data[RTC_YEAR2] = 0;
		}
		break;

	default:
		return -EINVAL;
	}

	printk(KERN_INFO "%s: %d/%d/%d %d:%d:%d(%d)\n", __func__,
		1900 + alrm->time.tm_year, 1 + alrm->time.tm_mon,
		alrm->time.tm_mday, alrm->time.tm_hour, alrm->time.tm_min,
		alrm->time.tm_sec, alrm->time.tm_wday);

	mutex_lock(&info->lock);

	ret = s5m_rtc_stop_alarm_poweroff(info);
	if (ret < 0)
		goto out;

	ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM1_SEC, 8, data);
	if (ret < 0)
		goto out;

	ret = s5m8767_rtc_set_alarm_reg(info);
	if (ret < 0)
		goto out;

	if (alrm->enabled)
		ret = s5m_rtc_start_alarm_poweroff(info);
out:
	mutex_unlock(&info->lock);
	return ret;

}
#endif

static const struct rtc_class_ops s5m_rtc_ops = {
	.read_time = s5m_rtc_read_time,
	.set_time = s5m_rtc_set_time,
	.read_alarm = s5m_rtc_read_alarm,
	.set_alarm = s5m_rtc_set_alarm,
#if defined(CONFIG_RTC_POWER_OFF)
	.set_alarm_poweroff = s5m_rtc_set_alarm_poweroff,
	.set_alarm_enable = s5m_rtc_alarm_enable,
#endif
#if defined(CONFIG_RTC_ALARM_BOOT)
	.set_alarm_boot = s5m_rtc_set_alarm_boot,
#endif

	.alarm_irq_enable = s5m_rtc_alarm_irq_enable,
};

static void s5m_rtc_enable_wtsr(struct s5m_rtc_info *info, bool enable)
{
	int ret;
	u8 val, mask;

	if (enable)
		val = WTSR_ENABLE_MASK;
	else
		val = 0;

	mask = WTSR_ENABLE_MASK;

	dev_info(info->dev, "%s: %s WTSR\n", __func__,
		 enable ? "enable" : "disable");

	ret = s5m_reg_update(info->rtc, S5M87XX_WTSR_SMPL_CNTL, val, mask);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to update WTSR reg(%d)\n",
			__func__, ret);
		return;
	}
	ret = s5m8767_rtc_set_alarm_reg(info);
}

static void s5m_rtc_enable_smpl(struct s5m_rtc_info *info, bool enable)
{
	int ret;
	u8 val, mask;

	if (enable)
		val = SMPL_ENABLE_MASK;
	else
		val = 0;

	mask = SMPL_ENABLE_MASK;

	dev_info(info->dev, "%s: %s SMPL\n", __func__,
			enable ? "enable" : "disable");

	ret = s5m_reg_update(info->rtc, S5M87XX_WTSR_SMPL_CNTL, val, mask);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to update SMPL reg(%d)\n",
				__func__, ret);
		return;
	}
	ret = s5m8767_rtc_set_alarm_reg(info);

	val = 0;
	s5m_reg_read(info->rtc, S5M87XX_WTSR_SMPL_CNTL, &val);
	pr_info("%s: WTSR_SMPL(0x%02x)\n", __func__, val);
}

static int s5m8767_rtc_init_reg(struct s5m_rtc_info *info)
{
	u8 data[2], tp_read;
	int ret;
	struct rtc_time tm;
#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
	u8 data_alm2[8];

	ret = s5m_bulk_read(info->rtc, S5M87XX_ALARM1_SEC, 8, data_alm2);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to read control reg(%d)\n",
			__func__, ret);
		return ret;
	}
#endif
	ret = s5m_reg_read(info->rtc, S5M87XX_RTC_UDR_CON, &tp_read);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to read control reg(%d)\n",
			__func__, ret);
		return ret;
	}

	/* Set RTC control register : Binary mode, 24hour mdoe */
	data[0] = (1 << BCD_EN_SHIFT) | (1 << MODEL24_SHIFT);
	data[1] = (0 << BCD_EN_SHIFT) | (1 << MODEL24_SHIFT);

	info->rtc_24hr_mode = 1;
	ret = s5m_bulk_write(info->rtc, S5M87XX_ALARM0_CONF, 2, data);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to write controlm reg(%d)\n",
				__func__, ret);
		return ret;
	}

	/* In first boot time, Set rtc time to 1/1/2012 00:00:00(SUN) */
	if ((tp_read & RTC_TCON_MASK) == 0) {
		dev_info(info->dev, "rtc init\n");
		tm.tm_sec = 0;
		tm.tm_min = 0;
		tm.tm_hour = 0;
		tm.tm_wday = 0;
		tm.tm_mday = 1;
		tm.tm_mon = 0;
		tm.tm_year = 112;
		tm.tm_yday = 0;
		tm.tm_isdst = 0;
		ret = s5m_rtc_set_time(info->dev, &tm);
	}

	ret = s5m_reg_update(info->rtc, S5M87XX_RTC_UDR_CON,
			     tp_read | RTC_TCON_MASK, RTC_TCON_MASK);
	if (ret < 0) {
		dev_err(info->dev, "%s: fail to update TCON reg(%d)\n",
			__func__, ret);
		return ret;
	}

	return ret;
}

static int __devinit s5m_rtc_probe(struct platform_device *pdev)
{
	struct s5m87xx_dev *s5m87xx = dev_get_drvdata(pdev->dev.parent);
	struct s5m_platform_data *pdata = dev_get_platdata(s5m87xx->dev);
	struct s5m_rtc_info *info;
	int ret;

	info = kzalloc(sizeof(struct s5m_rtc_info), GFP_KERNEL);
	if (!info)
		return -ENOMEM;

	mutex_init(&info->lock);
	info->dev = &pdev->dev;
	info->s5m87xx = s5m87xx;
	info->rtc = s5m87xx->rtc;
	info->device_type = s5m87xx->device_type;
	info->wtsr_smpl = s5m87xx->wtsr_smpl;
#if defined(RTC_SET_TIME_FILE_LOG)
	spin_lock_init(&info->rtc_set_time_lock);
#endif

	switch (pdata->device_type) {
	case S5M8763X:
		info->irq = s5m87xx->irq_base + S5M8763_IRQ_ALARM0;
#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
		info->irq2 = s5m87xx->irq_base + S5M8763_IRQ_ALARM1;
#endif
		break;

	case S5M8767X:
		info->irq = s5m87xx->irq_base + S5M8767_IRQ_RTCA1;
#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
		info->irq2 = s5m87xx->irq_base + S5M8767_IRQ_RTCA2;
#endif
		break;

	default:
		ret = -EINVAL;
		dev_err(&pdev->dev, "Unsupported device type: %d\n", ret);
		goto out_rtc;
	}

	platform_set_drvdata(pdev, info);

	ret = s5m8767_rtc_init_reg(info);

	if (info->wtsr_smpl) {
		s5m_rtc_enable_wtsr(info, true);
		s5m_rtc_enable_smpl(info, true);
	}

	device_init_wakeup(&pdev->dev, 1);

	info->rtc_dev = rtc_device_register("s5m-rtc", &pdev->dev,
			&s5m_rtc_ops, THIS_MODULE);

	if (IS_ERR(info->rtc_dev)) {
		ret = PTR_ERR(info->rtc_dev);
		dev_err(&pdev->dev, "Failed to register RTC device: %d\n", ret);
		goto out_rtc;
	}

	ret = request_threaded_irq(info->irq, NULL, s5m_rtc_alarm_irq, 0,
			"rtc-alarm0", info);

	if (ret < 0)
		dev_err(&pdev->dev, "Failed to request alarm IRQ: %d: %d\n",
			info->irq, ret);
#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
	ret = request_threaded_irq(info->irq2, NULL, s5m_rtc_alarm2_irq, 0,
			"rtc-alarm0", info);

	if (ret < 0)
		dev_err(&pdev->dev, "Failed to request alarm2 IRQ: %d: %d\n",
			info->irq, ret);
#endif
	dev_info(&pdev->dev, "RTC CHIP NAME: %s\n", pdev->id_entry->name);

	return 0;

out_rtc:
	platform_set_drvdata(pdev, NULL);
	kfree(info);
	return ret;
}

static int __devexit s5m_rtc_remove(struct platform_device *pdev)
{
	struct s5m_rtc_info *info = platform_get_drvdata(pdev);

	if (info) {
		free_irq(info->irq, info);
#if defined(CONFIG_RTC_POWER_OFF) || defined(CONFIG_RTC_ALARM_BOOT)
		free_irq(info->irq2, info);
#endif
		rtc_device_unregister(info->rtc_dev);
		kfree(info);
	}

	return 0;
}

static void s5m_rtc_shutdown(struct platform_device *pdev)
{
	struct s5m_rtc_info *info = platform_get_drvdata(pdev);
	int i;
	u8 val = 0;
	if (info->wtsr_smpl) {
		for (i = 0; i < 3; i++) {
			s5m_rtc_enable_wtsr(info, false);
			s5m_reg_read(info->rtc, S5M87XX_WTSR_SMPL_CNTL, &val);
			pr_info("%s: WTSR_SMPL reg(0x%02x)\n", __func__, val);
			if (val & WTSR_ENABLE_MASK)
				pr_emerg("%s: fail to disable WTSR\n", __func__);
			else {
				pr_info("%s: success to disable WTSR\n", __func__);
				break;
			}
		}
	}
	/* Disable SMPL when power off */
	s5m_rtc_enable_smpl(info, false);
}

static const struct platform_device_id s5m_rtc_id[] = {
	{ "s5m-rtc", 0 },
};

#if defined(CONFIG_RTC_POWER_OFF)

static int s5m_rtc_resume(struct device *dev)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);
	int ret;

	mutex_lock(&info->lock);
	ret = s5m_rtc_stop_alarm_poweroff(info);
	mutex_unlock(&info->lock);

	return ret;
}

static int s5m_rtc_suspend(struct device *dev)
{
	struct s5m_rtc_info *info = dev_get_drvdata(dev);

	if (fake_shut_down)
		disable_irq(info->irq);

	return 0;
}

static const struct dev_pm_ops s5m_rtc_pm_ops = {
	.resume = s5m_rtc_resume,
	.suspend = s5m_rtc_suspend,
};
#endif

static struct platform_driver s5m_rtc_driver = {
	.driver		= {
		.name	= "s5m-rtc",
		.owner	= THIS_MODULE,
#if defined(CONFIG_RTC_POWER_OFF)
		.pm	= &s5m_rtc_pm_ops,
#endif
	},
	.probe		= s5m_rtc_probe,
	.remove		= __devexit_p(s5m_rtc_remove),
	.shutdown	= s5m_rtc_shutdown,
	.id_table	= s5m_rtc_id,
};

static int __init s5m_rtc_init(void)
{
	return platform_driver_register(&s5m_rtc_driver);
}
module_init(s5m_rtc_init);

static void __exit s5m_rtc_exit(void)
{
	platform_driver_unregister(&s5m_rtc_driver);
}
module_exit(s5m_rtc_exit);

/* Module information */
MODULE_AUTHOR("Sangbeom Kim <sbkim73@samsung.com>");
MODULE_DESCRIPTION("Samsung S5M RTC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s5m-rtc");
