EK-GC100_Galaxy_Camera
======================

Repo for the EK-GC100 Galaxy Camera Kernel 


Build Script for use on Linux:

CurrentFolder=`pwd`;
make arch=arm gc1pq_00_defconfig;
make ARCH=arm CROSS_COMPILE=$CurrentFolder/tools/testing/linux-x86-arm-eabi-4.4.3/bin/arm-eabi- -j8
