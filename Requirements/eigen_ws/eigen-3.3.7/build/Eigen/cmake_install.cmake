# Install script for directory: /home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Cholesky"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/CholmodSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Core"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Dense"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Eigen"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Eigenvalues"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Geometry"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Householder"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/IterativeLinearSolvers"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Jacobi"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/LU"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/MetisSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/OrderingMethods"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/PaStiXSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/PardisoSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/QR"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/QtAlignedMalloc"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SPQRSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SVD"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/Sparse"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SparseCholesky"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SparseCore"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SparseLU"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SparseQR"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/StdDeque"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/StdList"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/StdVector"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/SuperLUSupport"
    "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/UmfPackSupport"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "/home/uzu/drone-slam-octomap/Requirements/eigen_ws/eigen-3.3.7/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

