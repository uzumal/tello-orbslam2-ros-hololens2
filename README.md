# tello-orbslam2-ros-hololens2

<!-- [![Version](https://img.shields.io/github/v/tag/Unity-Technologies/Unity-Robotics-Hub)](https://github.com/Unity-Technologies/Unity-Robotics-Hub/releases) -->
![version](https://img.shields.io/badge/version-1.0-orange)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-brightgreen.svg)](https://www.gnu.org/licenses/gpl-3.0)
![ROS](https://img.shields.io/badge/ros-melodic-brightgreen)
![Unity](https://img.shields.io/badge/unity-2019.4+-brightgreen)

Software for visualizing drone mapping environments using HoloLens2.
I am using this software for my Master's research, please cite the paper when using the program.

It is developed using [ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu), [ROS-SHARP](https://github.com/EricVoll/ros-sharp), and [Unity](https://unity3d.com/).

## Licence
The source code is released under [GPLv3](http://www.gnu.org/licenses/) license.

## Getting Started
### [How to Use](#Usage)

refer to how using ros command.

### [Quick Installation Instructions](#Prerequisites)

Brief steps on installing the Require packages.

### [Appendix](#Appendix)

If you need any help, I suggest you refer to it.

### [HoloLens Setup](#HoloLensSetup)

A brief description of how to set up to HoloLens2 (Unity).

<a id="Usage"></a>
## Usage
> **Note**: if u use a virtual-box, you must connect TELLO-XXXXX before launch Ubuntu.
```
roslaunch flock_driver orbslam2_with_cloud_map.launch
```

```
sudo apt-get install ros-melodic-rosbridge-suite
roslaunch rosbridge_server rosbridge_websocket.launch 
```

```
roslaunch pcl_ros_processing pcl_downsampling.launch
```

<a id="Prerequisites"></a>
## Prerequisites
We have tested the library in **Ubuntu **18.04**. 

basically have all the necessary libraries, so move to the folder and install each package

```
cd ~/tello-orbslam2-ros-hololens2/Requirements/
```
### Setup Software
Install what you need
#### catking tools
```
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu `lsb_release -sc` main" > /etc/apt/sources.list.d/ros-latest.list'
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -
sudo apt-get update
sudo apt-get install python-catkin-tools
```
#### ffmpeg
```
sudo apt install ffmpeg
```
#### Python PIL
```
sudo apt-get install python-imaging-tk
```

#### Python Pygame
```
sudo apt-get install python-pygame
```

#### Pangolin
We use [Pangolin](https://github.com/stevenlovegrove/Pangolin) for visualization and user interface. Dowload and install instructions can be found at: https://github.com/stevenlovegrove/Pangolin.

```
sudo apt install libgl1-mesa-dev
sudo apt install libglew-dev
sudo apt-get install libxkbcommon-dev
cd Pangolin
mkdir build
cd build
cmake ..
cmake --build .
sudo make install
```

#### Pybind11
[pybind11](https://github.com/pybind/pybind11) is a lightweight header-only library that exposes C++ types in Python and vice versa, mainly to create Python bindings of existing C++ code. 
```
cd pybind
mkdir build
cmake ..
make -j6
sudo make install
```

#### Eigen3
Required by g2o (see below). Download and install instructions can be found at: http://eigen.tuxfamily.org. **Required at least 3.1.0**.
```
cd eigen-3.3.7
mkdir build
cd build
cmake ..
# make check (not definitely)
sudo make install
```

#### DBoW2 and g2o (Included in Thirdparty folder)
We use modified versions of the [DBoW2](https://github.com/dorian3d/DBoW2) library to perform place recognition and [g2o](https://github.com/RainerKuemmerle/g2o) library to perform non-linear optimizations. Both modified libraries (which are BSD) are included in the *Thirdparty* folder.
```
cd DBoW2
mkdir build
cd build
cmake ..
make
sudo make install
```
#### h264decoder
```
cd h264decoder
mkdir build
cd build
cmake ..
make
```
now copy it to python path
```
sudo cp ~/ROS/h264decoder/libh264decoder.so /usr/local/lib/python2.7/dist-packages
```

#### OpenCV 3.4.0
We use [OpenCV](http://opencv.org) to manipulate images and features. Dowload and install instructions can be found at: http://opencv.org. **Required at OpenCV 3.4.0**.
```
# root authority
sudo su -

apt-get update
apt-get upgrade

# Add repository to include libjasper-dev
add-apt-repository "deb http://security.ubuntu.com/ubuntu bionic-security main"

# install dependent packages
apt-get -y install build-essential checkinstall cmake unzip pkg-config yasm
apt-get -y install git gfortran python3-dev
apt-get -y install libjpeg8-dev libjasper-dev libpng12-dev libavcodec-dev libavformat-dev libswscale-dev libdc1394-22-dev libxine2-dev libv4l-dev
apt-get -y install libjpeg-dev libpng-dev libtiff-dev libtbb-dev
apt-get -y install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev libatlas-base-dev libxvidcore-dev libx264-dev libgtk-3-dev

# Specify the latest version from the tag
cd /usr/local/src
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git
cd opencv_contrib
# change the version
cd opencv_contrib
git checkout -b 3.4.0 refs/tags/3.2.0
cd ../opencv/
git checkout -b 3.4.0 refs/tags/3.2.0

# Build and Install
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/usr/local -DENABLE_PRECOMPILED_HEADERS=OFF -DWITH_FFMPEG=ON -D WITH_CUDA=ON -DWITH_NVCUVID=ON -DBUILD_opencv_cudacodec=OFF -DCUDA_GENERATION=Pascal ..
// cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/usr/local -DENABLE_PRECOMPILED_HEADERS=OFF -DWITH_FFMPEG=ON ..
make
make install
echo /usr/local/lib > /etc/ld.so.conf.d/opencv.conf
ldconfig -v

# Check the OpenCV Version
opencv_version

exit
```

## Build
### Installing our version of TelloPy
based on https://github.com/dji-sdk/Tello-Python and https://github.com/hanyazou/TelloPy
```
cd ~/drone-slam-octomap/Tello_ROS_ORBSLAM/TelloPy
sudo python setup.py install
```
### Installing orbslam2
based on https://github.com/appliedAI-Initiative/orb_slam_2_ros and https://github.com/rayvburn/ORB-SLAM2_ROS and https://github.com/tau-adl/Tello_ROS_ORBSLAM

```
cd ~/tello-orbslam2-ros-hololens2/Tello_ROS_ORBSLAM/ROS/tello_catkin_ws/
catkin init
catkin clean
catkin build --mem-limit 70% -j1
```

#### Add the enviroment setup to bashrc
```
echo "source $PWD/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

### Installing rosbridge-server
[rosbridge](http://wiki.ros.org/ja/rosbridge) allows dynamic socket and web-socket based access to the full capabilities of ROS. 
```
sudo apt-get install ros-melodic-rosbridge-server
roslaunch rosbridge_server rosbridge_websocket.launch
```

### Installing pcl_ros_processing
[pcl_ros_processing](https://github.com/karaage0703/pcl_ros_processing) allows downsampling pointcloud from ros-orb-slam2.
```
cd pc_ws
catkin init
catkin build
```
#### Add the enviroment setup to bashrc
```
echo "source $PWD/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

<a id="HoloLensSetup"></a>
## HoloLens Setup

Unzipping below files

>tello-orbslam2-ros-hololens2/Unity Projects/ar-ros-package.zip  
>tello-orbslam2-ros-hololens2/Unity Projects/mrtk-ros-droneImage-package.zip

and please import these package files.

You must change IP address to yours IP address in below file.

>tello-orbslam2-ros-hololens2/Unity Projects/ar-ros/Assets/RosSharp/Scripts/RosBridgeClient/RosCommuncation/RosConnector.cs

<img width="463" alt="スクリーンショット 2022-12-13 9 40 36" src="https://user-images.githubusercontent.com/52265875/207198455-0c185ad9-73d7-4227-9505-700415ccedff.png">

> **Note**: If you want to change the connection point, check the second pc checkbox (see figure).

<a id="Appendix"></a>
## Appendix
### Use as appropriate
#### cmakeのversion-update
```
wget https://cmake.org/files/v3.14/cmake-3.14.0.tar.gz
tar xvf cmake-3.14.0.tar.gz
cd ~/Downloads/cmake-3.14.0   # or wherever you downloaded cmake
./bootstrap --prefix=$HOME/cmake-install
make 
make install
export PATH=$HOME/cmake-install/bin:$PATH
export CMAKE_PREFIX_PATH=$HOME/cmake-install:$CMAKE_PREFIX_PATH
```
#### If you encounter a lock error
```
sudo rm /var/lib/apt/lists/lock
sudo rm /var/lib/dpkg/lock
sudo rm /var/lib/dpkg/lock-frontend
```
### For users who install from scratch by themselves
#### Eigen3
```
cd ~
mkdir eigen_ws
wget https://gitlab.com/libeigen/eigen/-/archive/3.3.7/eigen-3.3.7.tar.gz
tar xvf eigen-3.3.7.tar.gz
cd eigen-3.3.7
mkdir build
cd build
cmake ..
# make check (not definitely)
sudo make install
```
#### g2o
```
sudo apt install libsuitesparse-dev - qtdeclarative5-dev - qt5-qmake - libqglviewer-dev
mkdir ~/g2o_ws
cd ~/g2o_ws
git clone https://github.com/RainerKuemmerle/g2o.git
cd g2o
mkdir build
cd build
cmake ..
make
sudo make install
```
#### DBoW2
```
sudo apt-get install libboost-dev
mkdir ~/DBoW2_ws
cd ~/DBoW2_ws
git clone https://github.com/dorian3d/DBoW2.git
cd DBoW2
mkdir build
cd build
cmake ..
make
sudo make install
```

#### Pangolin(ver.0.5)
```
cd ~/ROS/
git clone --recursive https://github.com/stevenlovegrove/Pangolin.git -b v0.5
sudo apt install libgl1-mesa-dev
sudo apt install libglew-dev
sudo apt-get install libxkbcommon-dev
cd Pangolin
mkdir build
cd build
cmake ..
cmake --build .
sudo make install
```
#### Pybind11
```
git clone https://github.com/pybind/pybind11.git
cd pybind
mkdir build
cmake ..
make -j6
sudo make install
```

## Disclaimer
This is research code, it is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of merchantability or fitness for a particular purpose.
