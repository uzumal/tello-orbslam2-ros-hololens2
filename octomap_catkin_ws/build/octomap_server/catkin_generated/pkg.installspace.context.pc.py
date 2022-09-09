# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/melodic/include".split(';') if "${prefix}/include;/opt/ros/melodic/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;visualization_msgs;sensor_msgs;pcl_ros;pcl_conversions;nav_msgs;std_msgs;std_srvs;octomap_ros;octomap_msgs;dynamic_reconfigure;nodelet".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-loctomap_server;/opt/ros/melodic/lib/liboctomap.so;/opt/ros/melodic/lib/liboctomath.so".split(';') if "-loctomap_server;/opt/ros/melodic/lib/liboctomap.so;/opt/ros/melodic/lib/liboctomath.so" != "" else []
PROJECT_NAME = "octomap_server"
PROJECT_SPACE_DIR = "/home/uzu/drone-slam-octomap/octomap_catkin_ws/install"
PROJECT_VERSION = "0.6.7"
