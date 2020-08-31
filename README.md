Work On
- Ubuntu 18.04
- ROS Melodic
- OpenCV 3.4
- Mavros
- QtCreator 5

Hardware
- Laptop
- SBC Jetson Nano 
- Rplidar S1 
- Pixhawk + GPS Ublox
- Kamera dual lens (IR dan RGB)
semuanya dihubungkan via USB

Shortage
- kamera dual lens (IR dan RGB) sering mati
- Lidar jika goyang-goyang bacaannya berantakan
- kamera sering lag
- GPS butuh waktu sampai menyala

Ubuntu Installation
- cari sendiri di internet videonya yah, hehehe
- space buat partisi 40GB (recommended)

ROS Installation
- $ sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
- $ sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
- $ sudo apt update
- $ sudo apt install ros-melodic-desktop-full
- $ apt search ros-melodic
- $ echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
- $ source ~/.bashrc
- $ sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
- $ sudo apt install python-rosdep
- $ sudo rosdep init
- $ rosdep update
reff http://wiki.ros.org/melodic/Installation/Ubuntu

OpenCV 3.4 Installation
- $ sudo apt-get install build-essential
- $ sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
- $ sudo apt-get install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
- $ git clone https://github.com/opencv/opencv.git
- $ git clone https://github.com/opencv/opencv_contrib.git
- $ cd ~/opencv
- $ mkdir build
- $ cd build
- $ cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local ..
- $ make -j7
- $ sudo make install
reff https://docs.opencv.org/3.4/d7/d9f/tutorial_linux_install.html

Mavros Installation
$ sudo apt-get install ros-kinetic-mavros ros-kinetic-mavros-extras
$ wget https://raw.githubusercontent.com/mavlink/mavros/master/mavros/scripts/install_geographiclib_datasets.sh
$ sudo chmod +x ./install_geographiclib_datasets.sh
$ sudo ./install_geographiclib_datasets.sh

Qt Installation 
$ sudo apt-get install qt4-default  #untuk package hector map
$ sudo apt-get install qt5-default

Workspace Installation
pilih salah satu
$ git clone https://github.com/lp02781/obslam_vehicle.git #gw private, kontak gw
$ git clone https://gitlab.com/muisdong/puti20_fikih.git #minta collab ke pak Muis
klo gk salah ada package yg kosong namanya rplidar_ros, jadi download ulang
$ cd <nama_workspace>/src/
$ rm -rf rplidar_ros
$ git clone https://github.com/robopeak/rplidar_ros.git
$ cd ..
$ rm -rf build
$ catkin_make #kalo ada error nya, cari di internet cara perbaikinnya
karena videonya gk bisa dimasukkin ke git, jadi download ulang videonya di link berikut
ekstrat dan simpan kedua video tersebut di: 
 <nama_workspace>/gui

$ geany ~/.bashrc
dibaris paling bawah tulis 
	source <alamat workspace>
	contoh
	source ~/obslam_vehicle/devel/setup.bash
restart terminal

gw pake nama workspacenya obslam_vehicle biar keren

Menggunakan Kamera
$ cd obslam_vehicle/documents
$ ./build.sh
$ ./allcolour
untuk mengubah kamera yang digunakan, ubah parameter baris 41
	VideoCapture cap(0); 0 untuk webcam laptop, 2 untuk IR, 4 untuk RGB, coba2 aja ubah angkanya

Menggunakan Pixhawk dan GPS
$ sudo chmod 666 /dev/ttyACM0
$ roslaunch mavros apm.launch
$ rostopic echo /mavros/global_position/global #klo gk salah ini nama topicnya
klo salah topicnya buka aja
$ rostopic list

Menggunakan RpLidar S1
$ roslaunch rplidar_ros view_rplidar_s1.launch #raw map
restart terminal

$ roslaunch rplidar_ros rplidar_ros rplidar_s1.launch
$ roslaunch hector_slam tutorial.launch #hector map

reff https://github.com/Slamtec/rplidar_ros
reff https://github.com/tu-darmstadt-ros-pkg/hector_slam

Menggunakan Full system pake log data 
$ cd <nama_workspace>/documents/mobil
$ ./server
buka QtCreator, buka <nama_workspace>/gui/ver_5/ver_3.pro, klik tombol running di kiri bawah

Menggunakan multi-sensor real time 
$ cd <nama_workspace>
$ source devel/setup.bash
$ roslaunch haha indoor.launch
atau
$ roslaunch haha outdoor.launch

menggunakan Full system real time
$ cd <nama_workspace>
$ source devel/setup.bash
$roslaunch hehe complete.launch
buka QtCreator, buka <nama_workspace>/gui/ver_6/ver_3.pro, klik tombol running di kiri bawah
