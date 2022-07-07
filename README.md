# drone-slam-octomap
under development

## Procedure
現在はROS2で考える．（迷い中）
1. Ubuntu20.04 install
2. ROS2 Foxy install（）
3. tello_ros (tello_driver) install (https://github.com/clydemcqueen/tello_ros)
4. ORB-SLAM2 install
5. Octomap install
6. Convert 3D point to Octomap
7. Send to Unity
8. positioning
9. Check correctly for Position
10. Merge multiple uav's OCtomap

### Ubuntu20.04 install
VirtualBox install
https://www.virtualbox.org/
Ubuntu20.04 install
https://www.ubuntulinux.jp/News/ubuntu2004-ja-remix
- memory size
  - 2048MB
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
### ROS2 Foxy install
https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html

### tello_ros install
https://github.com/clydemcqueen/tello_ros

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

- cmakeのversion-update
```
cd ~/Downloads/cmake-3.14.0   # or wherever you downloaded cmake
./bootstrap --prefix=$HOME/cmake-install
make 
make install
export PATH=$HOME/cmake-install/bin:$PATH
export CMAKE_PREFIX_PATH=$HOME/cmake-install:$CMAKE_PREFIX_PATH
```
-  lock対処
```
sudo rm /var/lib/apt/lists/lock
sudo rm /var/lib/dpkg/lock
sudo rm /var/lib/dpkg/lock-frontend
```
## Requirement Packages
### Pangolin本体のインストール
```
cd ~/ROS/
git clone https://github.com/stevenlovegrove/Pangolin.git
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
- install
sudo apt install pybind11-dev

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
```
