# drone-slam-octomap
under development

## Procedure
1. Ubuntu18.04 install
2. ROS Melodic
3. https://github.com/tau-adl/Tello_ROS_ORBSLAM　を参考に作成
4. Octomap install（https://github.com/OctoMap/octomap_mapping）
5. Convert 3D point to Octomap
6. Send to Unity
7. positioning
8. Check correctly for Position
9. Merge multiple uav's OCtomap

sudo apt-get install ros-melodic-rosbridge-suite
https://qiita.com/srs/items/1fcbd720e2489a0ce7cf

https://www.youtube.com/watch?v=yPPFK_74rro

### Usage
if u use a virtual-box, you must connect TELLO-XXXXX before launch Ubuntu.
```
roslaunch flock_driver orbslam2_with_cloud_map.launch
```

##Build
### Installing our version of TelloPy
based on https://github.com/dji-sdk/Tello-Python and https://github.com/hanyazou/TelloPy
```
cd ~/drone-slam-octomap/Tello_ROS_ORBSLAM/TelloPy
sudo python setup.py install
```
### Installing orbslam2
based on https://github.com/appliedAI-Initiative/orb_slam_2_ros and https://github.com/rayvburn/ORB-SLAM2_ROS 
```
cd ~/drone-slam-octomap/Tello_ROS_ORBSLAM/ROS/tello_catkin_ws/
catkin init
catkin clean
catkin build --mem-limit 70% -j1
```

## Add the enviroment setup to bashrc
```
echo "source $PWD/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

### Ubuntu18.04 install
VirtualBox install
https://www.virtualbox.org/
Ubuntu18.04 install
https://www.ubuntulinux.jp/News/ubuntu2004-ja-remix
- memory size
  - 7000MB
- プロセッサー
  - 6
- File size
  - 20.00GB
- 光学ディスク
  - ubuntu20.04-desktop.isoを使用
- install Ubuntu for Japanese
- スナップショットの作成
- 最新版へ更新
```
sudo apt update
sudo apt upgrade
```
### ROS Melodic install
[https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html
](http://wiki.ros.org/melodic/Installation/Ubuntu)

### GitHub
- git install
```
sudo apt-get install git
git config --global user.name [任意のユーザ名]
git config --global user.email [任意のユーザ名]
```
- ssh
```
ssh-keygen -t rsa -C "メールアドレス"
cat ~/.ssh/id_rsa.pub | clip.exe
```
- Githubへ登録後
```
ssh -T git@github.com
```

## Requirement Packages(全て自身でインストールしたい人)
```
### catking tools
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu `lsb_release -sc` main" > /etc/apt/sources.list.d/ros-latest.list'
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -
sudo apt-get update
sudo apt-get install python-catkin-tools
```
### ffmpeg
```
sudo apt install ffmpeg
```
### Python PIL
```
sudo apt-get install python-imaging-tk
```

### Pangolin(ver.0.5)本体のインストール
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
### Pybind11
```
git clone https://github.com/pybind/pybind11.git
cd pybind
mkdir build
cmake ..
make -j6
sudo make install
```

### OpenCV 3.4.0
```
# root権限
sudo su -

apt-get update
apt-get upgrade

# libjasper-devを入れるためにリポジトリを追加
add-apt-repository "deb http://security.ubuntu.com/ubuntu bionic-security main"

# 依存パッケージをインストールする
apt-get -y install build-essential checkinstall cmake unzip pkg-config yasm
apt-get -y install git gfortran python3-dev
apt-get -y install libjpeg8-dev libjasper-dev libpng12-dev libavcodec-dev libavformat-dev libswscale-dev libdc1394-22-dev libxine2-dev libv4l-dev
apt-get -y install libjpeg-dev libpng-dev libtiff-dev libtbb-dev
apt-get -y install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev libatlas-base-dev libxvidcore-dev libx264-dev libgtk-3-dev

# opencvとopencv_contribのソースをgithubからダウンロードする（zipに圧縮しているものでも可）
#  masterにチェックアウトしているものも見かけるけど、それだと開発中のバージョンになるので、タグから最新のバージョンを指定する
cd /usr/local/src
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git
cd opencv_contrib
# 本環境は3.２.0を使用したが、Github上のバージョンを要確認
cd opencv_contrib
git checkout -b 3.4.0 refs/tags/3.2.0
cd ../opencv/
git checkout -b 3.4.0 refs/tags/3.2.0

# ビルドしてインストールする
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/usr/local -DENABLE_PRECOMPILED_HEADERS=OFF -DWITH_FFMPEG=ON ..
make
make install
echo /usr/local/lib > /etc/ld.so.conf.d/opencv.conf
ldconfig -v

# きちんとインストールされていることを確認する
#   opencvっていうコマンドはないので注意
opencv_version

exit
```
### Eigen3
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
### g2o
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
### DBoW2
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

# Building
## Getting the code
git clone
## Install
基本的に必要なライブラリは揃えているため，フォルダーに移動し，各パッケージをインストール
```
cd ~/drone-slam-octomap/Requirements/
```

### Pangolin
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

Pybind11
```
cd pybind
mkdir build
cmake ..
make -j6
sudo make install
```

### Eigen3
```
cd eigen-3.3.7
mkdir build
cd build
cmake ..
# make check (not definitely)
sudo make install
```

### g2o, DBoW2
```
cd DBoW2(対象のフォルダー)
mkdir build
cd build
cmake ..
make
sudo make install
```
### h264decoder
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

## Octomap
```
sudo apt-get install ros-melodic-octomap ros-melodic-octomap-server ros-melodic-octomap-mapping ros-melodic-octomap-ros ros-melodic-octomap-msgs
```
run:
```
cd ~/octomap_catkin_ws
catkin build
source devel/setup.bash
```

then just run:

```
roslaunch octomap_server octomap_mapping.launch
```

## ORB-SLAMの違い
元コードを改修
- Tello_ROS_ORBSLAM > ROS > tello_catkin_ws > src > orb_slam_2_ros > CMakeLists
  - CmakeFile_changed2の使用
  - $ {PROJECT_SOURCE_DIR} /orb_slam2/Thirdparty/DBoW2/lib/libDBoW2.soの追加
- 

## Appendix
### cmakeのversion-update
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
### lock対処
```
sudo rm /var/lib/apt/lists/lock
sudo rm /var/lib/dpkg/lock
sudo rm /var/lib/dpkg/lock-frontend
```
