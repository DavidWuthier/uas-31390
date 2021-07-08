cmake_minimum_required(VERSION 3.5)
project(mavros_msgs)
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
  geographic_msgs
  geometry_msgs
  std_msgs
)
## System dependencies are found with CMake''s conventions
################################################
## Declare ROS messages, services and actions ##
################################################
add_message_files(
    FILES
    ADSBVehicle.msg
    ActuatorControl.msg
    Altitude.msg
    AttitudeTarget.msg
    BatteryStatus.msg
    CamIMUStamp.msg
    CommandCode.msg
    CompanionProcessStatus.msg
    DebugValue.msg
    ESCInfo.msg
    ESCInfoItem.msg
    ESCStatus.msg
    ESCStatusItem.msg
    EstimatorStatus.msg
    ExtendedState.msg
    FileEntry.msg
    GPSRAW.msg
    GPSRTK.msg
    GlobalPositionTarget.msg
    HilActuatorControls.msg
    HilControls.msg
    HilGPS.msg
    HilSensor.msg
    HilStateQuaternion.msg
    HomePosition.msg
    LandingTarget.msg
    LogData.msg
    LogEntry.msg
    ManualControl.msg
    Mavlink.msg
    MountControl.msg
    OnboardComputerStatus.msg
    OpticalFlowRad.msg
    OverrideRCIn.msg
    Param.msg
    ParamValue.msg
    PlayTuneV2.msg
    PositionTarget.msg
    RCIn.msg
    RCOut.msg
    RTCM.msg
    RTKBaseline.msg
    RadioStatus.msg
    State.msg
    StatusText.msg
    Thrust.msg
    TimesyncStatus.msg
    Trajectory.msg
    VFR_HUD.msg
    VehicleInfo.msg
    Vibration.msg
    Waypoint.msg
    WaypointList.msg
    WaypointReached.msg
    WheelOdomStamped.msg
)
add_service_files(
    FILES
    CommandBool.srv
    CommandHome.srv
    CommandInt.srv
    CommandLong.srv
    CommandTOL.srv
    CommandTriggerControl.srv
    CommandTriggerInterval.srv
    CommandVtolTransition.srv
    FileChecksum.srv
    FileClose.srv
    FileList.srv
    FileMakeDir.srv
    FileOpen.srv
    FileRead.srv
    FileRemove.srv
    FileRemoveDir.srv
    FileRename.srv
    FileTruncate.srv
    FileWrite.srv
    LogRequestData.srv
    LogRequestEnd.srv
    LogRequestList.srv
    MessageInterval.srv
    MountConfigure.srv
    ParamGet.srv
    ParamPull.srv
    ParamPush.srv
    ParamSet.srv
    SetMavFrame.srv
    SetMode.srv
    StreamRate.srv
    VehicleInfoGet.srv
    WaypointClear.srv
    WaypointPull.srv
    WaypointPush.srv
    WaypointSetCurrent.srv
)
find_package( geographic_msgs REQUIRED)
find_package( geometry_msgs REQUIRED)
find_package( roscpp REQUIRED)
find_package( std_msgs REQUIRED)
## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  geographic_msgs
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
  "geographic_msgs"
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
 "/usr/local/MATLAB/R2021a/extern/include"
 "/usr/local/MATLAB/R2021a/extern/include/MatlabDataArray"
 "/usr/local/MATLAB/R2021a/toolbox/ros/include/ros1"
 "/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/include"
 "/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/console_bridge/include"
 "/usr/local/MATLAB/R2021a/toolbox/ros/mlroscpp/custom_messages/include"
 "/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/boost/include"
  "include/mavros_msgs"
)
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
## Get list of .c files in project source directory
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.c)
## Get list of .cpp files in project source directory
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.cpp)
link_directories("/usr/local/MATLAB/R2021a/extern/bin/glnxa64")
link_directories("/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/console_bridge/lib")
link_directories("/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib")
link_directories("/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/boost/lib")
# Declare library
add_library(
    mavros_msgs_matlab 
    SHARED
    src/mavros_msgs_ADSBVehicle_message.cpp
    src/mavros_msgs_ActuatorControl_message.cpp
    src/mavros_msgs_Altitude_message.cpp
    src/mavros_msgs_AttitudeTarget_message.cpp
    src/mavros_msgs_BatteryStatus_message.cpp
    src/mavros_msgs_CamIMUStamp_message.cpp
    src/mavros_msgs_CommandCode_message.cpp
    src/mavros_msgs_CompanionProcessStatus_message.cpp
    src/mavros_msgs_DebugValue_message.cpp
    src/mavros_msgs_ESCInfo_message.cpp
    src/mavros_msgs_ESCInfoItem_message.cpp
    src/mavros_msgs_ESCStatus_message.cpp
    src/mavros_msgs_ESCStatusItem_message.cpp
    src/mavros_msgs_EstimatorStatus_message.cpp
    src/mavros_msgs_ExtendedState_message.cpp
    src/mavros_msgs_FileEntry_message.cpp
    src/mavros_msgs_GPSRAW_message.cpp
    src/mavros_msgs_GPSRTK_message.cpp
    src/mavros_msgs_GlobalPositionTarget_message.cpp
    src/mavros_msgs_HilActuatorControls_message.cpp
    src/mavros_msgs_HilControls_message.cpp
    src/mavros_msgs_HilGPS_message.cpp
    src/mavros_msgs_HilSensor_message.cpp
    src/mavros_msgs_HilStateQuaternion_message.cpp
    src/mavros_msgs_HomePosition_message.cpp
    src/mavros_msgs_LandingTarget_message.cpp
    src/mavros_msgs_LogData_message.cpp
    src/mavros_msgs_LogEntry_message.cpp
    src/mavros_msgs_ManualControl_message.cpp
    src/mavros_msgs_Mavlink_message.cpp
    src/mavros_msgs_MountControl_message.cpp
    src/mavros_msgs_OnboardComputerStatus_message.cpp
    src/mavros_msgs_OpticalFlowRad_message.cpp
    src/mavros_msgs_OverrideRCIn_message.cpp
    src/mavros_msgs_Param_message.cpp
    src/mavros_msgs_ParamValue_message.cpp
    src/mavros_msgs_PlayTuneV2_message.cpp
    src/mavros_msgs_PositionTarget_message.cpp
    src/mavros_msgs_RCIn_message.cpp
    src/mavros_msgs_RCOut_message.cpp
    src/mavros_msgs_RTCM_message.cpp
    src/mavros_msgs_RTKBaseline_message.cpp
    src/mavros_msgs_RadioStatus_message.cpp
    src/mavros_msgs_State_message.cpp
    src/mavros_msgs_StatusText_message.cpp
    src/mavros_msgs_Thrust_message.cpp
    src/mavros_msgs_TimesyncStatus_message.cpp
    src/mavros_msgs_Trajectory_message.cpp
    src/mavros_msgs_VFR_HUD_message.cpp
    src/mavros_msgs_VehicleInfo_message.cpp
    src/mavros_msgs_Vibration_message.cpp
    src/mavros_msgs_Waypoint_message.cpp
    src/mavros_msgs_WaypointList_message.cpp
    src/mavros_msgs_WaypointReached_message.cpp
    src/mavros_msgs_WheelOdomStamped_message.cpp
    src/mavros_msgs_CommandBool_service.cpp
    src/mavros_msgs_CommandHome_service.cpp
    src/mavros_msgs_CommandInt_service.cpp
    src/mavros_msgs_CommandLong_service.cpp
    src/mavros_msgs_CommandTOL_service.cpp
    src/mavros_msgs_CommandTriggerControl_service.cpp
    src/mavros_msgs_CommandTriggerInterval_service.cpp
    src/mavros_msgs_CommandVtolTransition_service.cpp
    src/mavros_msgs_FileChecksum_service.cpp
    src/mavros_msgs_FileClose_service.cpp
    src/mavros_msgs_FileList_service.cpp
    src/mavros_msgs_FileMakeDir_service.cpp
    src/mavros_msgs_FileOpen_service.cpp
    src/mavros_msgs_FileRead_service.cpp
    src/mavros_msgs_FileRemove_service.cpp
    src/mavros_msgs_FileRemoveDir_service.cpp
    src/mavros_msgs_FileRename_service.cpp
    src/mavros_msgs_FileTruncate_service.cpp
    src/mavros_msgs_FileWrite_service.cpp
    src/mavros_msgs_LogRequestData_service.cpp
    src/mavros_msgs_LogRequestEnd_service.cpp
    src/mavros_msgs_LogRequestList_service.cpp
    src/mavros_msgs_MessageInterval_service.cpp
    src/mavros_msgs_MountConfigure_service.cpp
    src/mavros_msgs_ParamGet_service.cpp
    src/mavros_msgs_ParamPull_service.cpp
    src/mavros_msgs_ParamPush_service.cpp
    src/mavros_msgs_ParamSet_service.cpp
    src/mavros_msgs_SetMavFrame_service.cpp
    src/mavros_msgs_SetMode_service.cpp
    src/mavros_msgs_StreamRate_service.cpp
    src/mavros_msgs_VehicleInfoGet_service.cpp
    src/mavros_msgs_WaypointClear_service.cpp
    src/mavros_msgs_WaypointPull_service.cpp
    src/mavros_msgs_WaypointPush_service.cpp
    src/mavros_msgs_WaypointSetCurrent_service.cpp
)
target_include_directories(mavros_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( mavros_msgs_matlab
	"/usr/local/MATLAB/R2021a/extern/bin/glnxa64/libMatlabDataArray.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/console_bridge/lib/libconsole_bridge.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib/libclass_loader.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib/librosconsole.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib/libroscpp.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib/libroscpp_serialization.so"
	"/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/lib/librostime.so"
	${Boost_LIBRARIES}
	${CMAKE_DL_LIBS}
	)
## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(
  mavros_msgs_matlab
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(mavros_msgs_matlab PRIVATE "MAVROS_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS mavros_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
# Generated 08-Jul-2021 13:24:14
# Copyright 2019-2021 The MathWorks, Inc.
