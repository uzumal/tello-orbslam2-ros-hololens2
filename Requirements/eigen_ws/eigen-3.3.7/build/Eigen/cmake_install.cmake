# Install script for directory: /home/uzu/eigen_ws/eigen-3.3.7/Eigen

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
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Cholesky"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/CholmodSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Core"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Dense"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Eigen"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Eigenvalues"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Geometry"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Householder"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/IterativeLinearSolvers"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Jacobi"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/LU"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/MetisSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/OrderingMethods"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/PaStiXSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/PardisoSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/QR"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/QtAlignedMalloc"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SPQRSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SVD"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/Sparse"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SparseCholesky"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SparseCore"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SparseLU"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SparseQR"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/StdDeque"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/StdList"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/StdVector"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/SuperLUSupport"
    "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/UmfPackSupport"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "/home/uzu/eigen_ws/eigen-3.3.7/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

