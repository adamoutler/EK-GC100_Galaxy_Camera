EK-GC100_Galaxy_Camera
======================

Repo for the EK-GC100 Galaxy Camera Kernel 


Build Script for use on Linux:

make gc1pq_00_defconfig;
make -j8;

Note: -j parameter can be adjusted, preferably to the number of cores 
available. 


To build the heimdall-flashable boot.img NOTE:you will need Linux package "abootimg" eg sudo apt-get install abootimg:

abootimg --create boot.img -f tools/testing/bootimgpack/bootimg.cfg -r tools/testing/bootimgpack/initrd.img -k arch/arm/boot/zImage


To build the Odin-Flashable boot.tar.md5.gz format:

tar -H ustar -c boot.img >boot.tar; md5sum boot.tar >> boot.tar;mv boot.tar boot.tar.md5; gzip boot.tar.md5 -c -v > boot.tar.md5.gz
