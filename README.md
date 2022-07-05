# drone-slam-octomap
under development

## Procedure
現在はROS2で考える．
1. Ubuntu20.04 install
2. ROS2 Foxy install
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

