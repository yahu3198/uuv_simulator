cmake_minimum_required(VERSION 3.5)
project(uuv_gazebo_ros_plugins_msgs)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
  message_generation
  geometry_msgs
  std_msgs
)
## System dependencies are found with CMake''s conventions
################################################
## Declare ROS messages, services and actions ##
################################################
add_message_files(
    FILES
    FloatStamped.msg
    ThrusterConversionFcn.msg
    UnderwaterObjectModel.msg
)
add_service_files(
    FILES
    GetFloat.srv
    GetListParam.srv
    GetModelProperties.srv
    GetThrusterConversionFcn.srv
    GetThrusterEfficiency.srv
    GetThrusterState.srv
    SetFloat.srv
    SetThrusterEfficiency.srv
    SetThrusterState.srv
    SetUseGlobalCurrentVel.srv
)
find_package( geometry_msgs REQUIRED)
find_package( roscpp REQUIRED)
find_package( std_msgs REQUIRED)
## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
  std_msgs
)
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
  CATKIN_DEPENDS
  message_runtime
  "message_runtime"
  "geometry_msgs"
  "roscpp"
  "std_msgs"
)
###########
## Build ##
###########
## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${PROJECT_SOURCE_DIR}
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
 "/usr/local/Polyspace/R2021a/extern/include"
 "/usr/local/Polyspace/R2021a/extern/include/MatlabDataArray"
 "/usr/local/Polyspace/R2021a/toolbox/ros/include/ros1"
 "/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/include"
 "/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/console_bridge/include"
 "/usr/local/Polyspace/R2021a/toolbox/ros/mlroscpp/custom_messages/include"
 "/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/boost/include"
  "include/uuv_gazebo_ros_plugins_msgs"
)
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
## Get list of .c files in project source directory
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.c)
## Get list of .cpp files in project source directory
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.cpp)
link_directories("/usr/local/Polyspace/R2021a/extern/bin/glnxa64")
link_directories("/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/console_bridge/lib")
link_directories("/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib")
link_directories("/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/boost/lib")
# Declare library
add_library(
    uuv_gazebo_ros_plugins_msgs_matlab 
    SHARED
    src/uuv_gazebo_ros_plugins_msgs_FloatStamped_message.cpp
    src/uuv_gazebo_ros_plugins_msgs_ThrusterConversionFcn_message.cpp
    src/uuv_gazebo_ros_plugins_msgs_UnderwaterObjectModel_message.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetFloat_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetListParam_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetModelProperties_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetThrusterConversionFcn_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetThrusterEfficiency_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_GetThrusterState_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_SetFloat_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_SetThrusterEfficiency_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_SetThrusterState_service.cpp
    src/uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service.cpp
)
target_include_directories(uuv_gazebo_ros_plugins_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( uuv_gazebo_ros_plugins_msgs_matlab
	"/usr/local/Polyspace/R2021a/extern/bin/glnxa64/libMatlabDataArray.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/console_bridge/lib/libconsole_bridge.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib/libclass_loader.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib/librosconsole.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib/libroscpp.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib/libroscpp_serialization.so"
	"/usr/local/Polyspace/R2021a/sys/ros1/glnxa64/ros1/lib/librostime.so"
	${Boost_LIBRARIES}
	${CMAKE_DL_LIBS}
	)
## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(
  uuv_gazebo_ros_plugins_msgs_matlab
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(uuv_gazebo_ros_plugins_msgs_matlab PRIVATE "UUV_GAZEBO_ROS_PLUGINS_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS uuv_gazebo_ros_plugins_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
# Generated 16-Oct-2022 09:38:55
# Copyright 2019-2021 The MathWorks, Inc.
