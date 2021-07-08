// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandCode
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "mavros_msgs/CommandCode.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandCode_common : public MATLABROSMsgInterface<mavros_msgs::CommandCode> {
  public:
    virtual ~mavros_msgs_msg_CommandCode_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandCode* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandCode* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandCode_common::copy_from_struct(mavros_msgs::CommandCode* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandCode_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandCode* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","AIRFRAMECONFIGURATION","ARMAUTHORIZATIONREQUEST","CAMERATRACKPOINT","CAMERATRACKRECTANGLE","CAMERASTOPTRACKING","COMPONENTARMDISARM","CONDITIONDELAY","CONDITIONCHANGEALT","CONDITIONDISTANCE","CONDITIONYAW","CONDITIONLAST","CONDITIONGATE","CONTROLHIGHLATENCY","DOFOLLOW","DOFOLLOWREPOSITION","DOORBIT","DOSETMODE","DOJUMP","DOCHANGESPEED","DOSETHOME","DOSETPARAMETER","DOSETRELAY","DOREPEATRELAY","DOSETSERVO","DOREPEATSERVO","DOFLIGHTTERMINATION","DOCHANGEALTITUDE","DOSETACTUATOR","DOLANDSTART","DORALLYLAND","DOGOAROUND","DOREPOSITION","DOPAUSECONTINUE","DOSETREVERSE","DOSETROILOCATION","DOSETROIWPNEXTOFFSET","DOSETROINONE","DOSETROISYSID","DOCONTROLVIDEO","DOSETROI","DODIGICAMCONFIGURE","DODIGICAMCONTROL","DOMOUNTCONFIGURE","DOMOUNTCONTROL","DOSETCAMTRIGGDIST","DOFENCEENABLE","DOPARACHUTE","DOMOTORTEST","DOINVERTEDFLIGHT","DOGRIPPER","DOAUTOTUNEENABLE","DOSETCAMTRIGGINTERVAL","DOMOUNTCONTROLQUAT","DOGUIDEDMASTER","DOGUIDEDLIMITS","DOENGINECONTROL","DOSETMISSIONCURRENT","DOLAST","DOUPGRADE","DOJUMPTAG","DOGIMBALMANAGERPITCHYAW","DOGIMBALMANAGERCONFIGURE","DOTRIGGERCONTROL","DOVTOLTRANSITION","DOWINCH","FIXEDMAGCALYAW","GETHOMEPOSITION","GETMESSAGEINTERVAL","ILLUMINATORONOFF","IMAGESTARTCAPTURE","IMAGESTOPCAPTURE","INJECTFAILURE","JUMPTAG","LOGGINGSTART","LOGGINGSTOP","MISSIONSTART","NAVWAYPOINT","NAVLOITERUNLIM","NAVLOITERTURNS","NAVLOITERTIME","NAVRETURNTOLAUNCH","NAVLAND","NAVTAKEOFF","NAVLANDLOCAL","NAVTAKEOFFLOCAL","NAVFOLLOW","NAVCONTINUEANDCHANGEALT","NAVLOITERTOALT","NAVROI","NAVPATHPLANNING","NAVSPLINEWAYPOINT","NAVVTOLTAKEOFF","NAVVTOLLAND","NAVGUIDEDENABLE","NAVDELAY","NAVPAYLOADPLACE","NAVLAST","NAVSETYAWSPEED","NAVFENCERETURNPOINT","NAVFENCEPOLYGONVERTEXINCLUSION","NAVFENCEPOLYGONVERTEXEXCLUSION","NAVFENCECIRCLEINCLUSION","NAVFENCECIRCLEEXCLUSION","NAVRALLYPOINT","OBLIQUESURVEY","OVERRIDEGOTO","PANORAMACREATE","PARAMTRANSACTION","PAYLOADPREPAREDEPLOY","PAYLOADCONTROLDEPLOY","PREFLIGHTCALIBRATION","PREFLIGHTSETSENSOROFFSETS","PREFLIGHTUAVCAN","PREFLIGHTSTORAGE","PREFLIGHTREBOOTSHUTDOWN","REQUESTMESSAGE","REQUESTPROTOCOLVERSION","REQUESTAUTOPILOTCAPABILITIES","REQUESTCAMERAINFORMATION","REQUESTCAMERASETTINGS","REQUESTSTORAGEINFORMATION","REQUESTCAMERACAPTURESTATUS","REQUESTFLIGHTINFORMATION","REQUESTCAMERAIMAGECAPTURE","REQUESTVIDEOSTREAMINFORMATION","REQUESTVIDEOSTREAMSTATUS","RESETCAMERASETTINGS","SETMESSAGEINTERVAL","SETCAMERAMODE","SETCAMERAZOOM","SETCAMERAFOCUS","SETGUIDEDSUBMODESTANDARD","SETGUIDEDSUBMODECIRCLE","STARTRXPAIR","STORAGEFORMAT","UAVCANGETNODEINFO","VIDEOSTARTCAPTURE","VIDEOSTOPCAPTURE","VIDEOSTARTSTREAMING","VIDEOSTOPSTREAMING"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandCode");
    // AIRFRAME_CONFIGURATION
    auto currentElement_AIRFRAME_CONFIGURATION = (msg + ctr)->AIRFRAME_CONFIGURATION;
    outArray[ctr]["AIRFRAMECONFIGURATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_AIRFRAME_CONFIGURATION));
    // ARM_AUTHORIZATION_REQUEST
    auto currentElement_ARM_AUTHORIZATION_REQUEST = (msg + ctr)->ARM_AUTHORIZATION_REQUEST;
    outArray[ctr]["ARMAUTHORIZATIONREQUEST"] = factory.createScalar(static_cast<uint16_t>(currentElement_ARM_AUTHORIZATION_REQUEST));
    // CAMERA_TRACK_POINT
    auto currentElement_CAMERA_TRACK_POINT = (msg + ctr)->CAMERA_TRACK_POINT;
    outArray[ctr]["CAMERATRACKPOINT"] = factory.createScalar(static_cast<uint16_t>(currentElement_CAMERA_TRACK_POINT));
    // CAMERA_TRACK_RECTANGLE
    auto currentElement_CAMERA_TRACK_RECTANGLE = (msg + ctr)->CAMERA_TRACK_RECTANGLE;
    outArray[ctr]["CAMERATRACKRECTANGLE"] = factory.createScalar(static_cast<uint16_t>(currentElement_CAMERA_TRACK_RECTANGLE));
    // CAMERA_STOP_TRACKING
    auto currentElement_CAMERA_STOP_TRACKING = (msg + ctr)->CAMERA_STOP_TRACKING;
    outArray[ctr]["CAMERASTOPTRACKING"] = factory.createScalar(static_cast<uint16_t>(currentElement_CAMERA_STOP_TRACKING));
    // COMPONENT_ARM_DISARM
    auto currentElement_COMPONENT_ARM_DISARM = (msg + ctr)->COMPONENT_ARM_DISARM;
    outArray[ctr]["COMPONENTARMDISARM"] = factory.createScalar(static_cast<uint16_t>(currentElement_COMPONENT_ARM_DISARM));
    // CONDITION_DELAY
    auto currentElement_CONDITION_DELAY = (msg + ctr)->CONDITION_DELAY;
    outArray[ctr]["CONDITIONDELAY"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_DELAY));
    // CONDITION_CHANGE_ALT
    auto currentElement_CONDITION_CHANGE_ALT = (msg + ctr)->CONDITION_CHANGE_ALT;
    outArray[ctr]["CONDITIONCHANGEALT"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_CHANGE_ALT));
    // CONDITION_DISTANCE
    auto currentElement_CONDITION_DISTANCE = (msg + ctr)->CONDITION_DISTANCE;
    outArray[ctr]["CONDITIONDISTANCE"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_DISTANCE));
    // CONDITION_YAW
    auto currentElement_CONDITION_YAW = (msg + ctr)->CONDITION_YAW;
    outArray[ctr]["CONDITIONYAW"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_YAW));
    // CONDITION_LAST
    auto currentElement_CONDITION_LAST = (msg + ctr)->CONDITION_LAST;
    outArray[ctr]["CONDITIONLAST"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_LAST));
    // CONDITION_GATE
    auto currentElement_CONDITION_GATE = (msg + ctr)->CONDITION_GATE;
    outArray[ctr]["CONDITIONGATE"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONDITION_GATE));
    // CONTROL_HIGH_LATENCY
    auto currentElement_CONTROL_HIGH_LATENCY = (msg + ctr)->CONTROL_HIGH_LATENCY;
    outArray[ctr]["CONTROLHIGHLATENCY"] = factory.createScalar(static_cast<uint16_t>(currentElement_CONTROL_HIGH_LATENCY));
    // DO_FOLLOW
    auto currentElement_DO_FOLLOW = (msg + ctr)->DO_FOLLOW;
    outArray[ctr]["DOFOLLOW"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_FOLLOW));
    // DO_FOLLOW_REPOSITION
    auto currentElement_DO_FOLLOW_REPOSITION = (msg + ctr)->DO_FOLLOW_REPOSITION;
    outArray[ctr]["DOFOLLOWREPOSITION"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_FOLLOW_REPOSITION));
    // DO_ORBIT
    auto currentElement_DO_ORBIT = (msg + ctr)->DO_ORBIT;
    outArray[ctr]["DOORBIT"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_ORBIT));
    // DO_SET_MODE
    auto currentElement_DO_SET_MODE = (msg + ctr)->DO_SET_MODE;
    outArray[ctr]["DOSETMODE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_MODE));
    // DO_JUMP
    auto currentElement_DO_JUMP = (msg + ctr)->DO_JUMP;
    outArray[ctr]["DOJUMP"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_JUMP));
    // DO_CHANGE_SPEED
    auto currentElement_DO_CHANGE_SPEED = (msg + ctr)->DO_CHANGE_SPEED;
    outArray[ctr]["DOCHANGESPEED"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_CHANGE_SPEED));
    // DO_SET_HOME
    auto currentElement_DO_SET_HOME = (msg + ctr)->DO_SET_HOME;
    outArray[ctr]["DOSETHOME"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_HOME));
    // DO_SET_PARAMETER
    auto currentElement_DO_SET_PARAMETER = (msg + ctr)->DO_SET_PARAMETER;
    outArray[ctr]["DOSETPARAMETER"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_PARAMETER));
    // DO_SET_RELAY
    auto currentElement_DO_SET_RELAY = (msg + ctr)->DO_SET_RELAY;
    outArray[ctr]["DOSETRELAY"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_RELAY));
    // DO_REPEAT_RELAY
    auto currentElement_DO_REPEAT_RELAY = (msg + ctr)->DO_REPEAT_RELAY;
    outArray[ctr]["DOREPEATRELAY"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_REPEAT_RELAY));
    // DO_SET_SERVO
    auto currentElement_DO_SET_SERVO = (msg + ctr)->DO_SET_SERVO;
    outArray[ctr]["DOSETSERVO"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_SERVO));
    // DO_REPEAT_SERVO
    auto currentElement_DO_REPEAT_SERVO = (msg + ctr)->DO_REPEAT_SERVO;
    outArray[ctr]["DOREPEATSERVO"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_REPEAT_SERVO));
    // DO_FLIGHTTERMINATION
    auto currentElement_DO_FLIGHTTERMINATION = (msg + ctr)->DO_FLIGHTTERMINATION;
    outArray[ctr]["DOFLIGHTTERMINATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_FLIGHTTERMINATION));
    // DO_CHANGE_ALTITUDE
    auto currentElement_DO_CHANGE_ALTITUDE = (msg + ctr)->DO_CHANGE_ALTITUDE;
    outArray[ctr]["DOCHANGEALTITUDE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_CHANGE_ALTITUDE));
    // DO_SET_ACTUATOR
    auto currentElement_DO_SET_ACTUATOR = (msg + ctr)->DO_SET_ACTUATOR;
    outArray[ctr]["DOSETACTUATOR"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ACTUATOR));
    // DO_LAND_START
    auto currentElement_DO_LAND_START = (msg + ctr)->DO_LAND_START;
    outArray[ctr]["DOLANDSTART"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_LAND_START));
    // DO_RALLY_LAND
    auto currentElement_DO_RALLY_LAND = (msg + ctr)->DO_RALLY_LAND;
    outArray[ctr]["DORALLYLAND"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_RALLY_LAND));
    // DO_GO_AROUND
    auto currentElement_DO_GO_AROUND = (msg + ctr)->DO_GO_AROUND;
    outArray[ctr]["DOGOAROUND"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GO_AROUND));
    // DO_REPOSITION
    auto currentElement_DO_REPOSITION = (msg + ctr)->DO_REPOSITION;
    outArray[ctr]["DOREPOSITION"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_REPOSITION));
    // DO_PAUSE_CONTINUE
    auto currentElement_DO_PAUSE_CONTINUE = (msg + ctr)->DO_PAUSE_CONTINUE;
    outArray[ctr]["DOPAUSECONTINUE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_PAUSE_CONTINUE));
    // DO_SET_REVERSE
    auto currentElement_DO_SET_REVERSE = (msg + ctr)->DO_SET_REVERSE;
    outArray[ctr]["DOSETREVERSE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_REVERSE));
    // DO_SET_ROI_LOCATION
    auto currentElement_DO_SET_ROI_LOCATION = (msg + ctr)->DO_SET_ROI_LOCATION;
    outArray[ctr]["DOSETROILOCATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ROI_LOCATION));
    // DO_SET_ROI_WPNEXT_OFFSET
    auto currentElement_DO_SET_ROI_WPNEXT_OFFSET = (msg + ctr)->DO_SET_ROI_WPNEXT_OFFSET;
    outArray[ctr]["DOSETROIWPNEXTOFFSET"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ROI_WPNEXT_OFFSET));
    // DO_SET_ROI_NONE
    auto currentElement_DO_SET_ROI_NONE = (msg + ctr)->DO_SET_ROI_NONE;
    outArray[ctr]["DOSETROINONE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ROI_NONE));
    // DO_SET_ROI_SYSID
    auto currentElement_DO_SET_ROI_SYSID = (msg + ctr)->DO_SET_ROI_SYSID;
    outArray[ctr]["DOSETROISYSID"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ROI_SYSID));
    // DO_CONTROL_VIDEO
    auto currentElement_DO_CONTROL_VIDEO = (msg + ctr)->DO_CONTROL_VIDEO;
    outArray[ctr]["DOCONTROLVIDEO"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_CONTROL_VIDEO));
    // DO_SET_ROI
    auto currentElement_DO_SET_ROI = (msg + ctr)->DO_SET_ROI;
    outArray[ctr]["DOSETROI"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_ROI));
    // DO_DIGICAM_CONFIGURE
    auto currentElement_DO_DIGICAM_CONFIGURE = (msg + ctr)->DO_DIGICAM_CONFIGURE;
    outArray[ctr]["DODIGICAMCONFIGURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_DIGICAM_CONFIGURE));
    // DO_DIGICAM_CONTROL
    auto currentElement_DO_DIGICAM_CONTROL = (msg + ctr)->DO_DIGICAM_CONTROL;
    outArray[ctr]["DODIGICAMCONTROL"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_DIGICAM_CONTROL));
    // DO_MOUNT_CONFIGURE
    auto currentElement_DO_MOUNT_CONFIGURE = (msg + ctr)->DO_MOUNT_CONFIGURE;
    outArray[ctr]["DOMOUNTCONFIGURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_MOUNT_CONFIGURE));
    // DO_MOUNT_CONTROL
    auto currentElement_DO_MOUNT_CONTROL = (msg + ctr)->DO_MOUNT_CONTROL;
    outArray[ctr]["DOMOUNTCONTROL"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_MOUNT_CONTROL));
    // DO_SET_CAM_TRIGG_DIST
    auto currentElement_DO_SET_CAM_TRIGG_DIST = (msg + ctr)->DO_SET_CAM_TRIGG_DIST;
    outArray[ctr]["DOSETCAMTRIGGDIST"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_CAM_TRIGG_DIST));
    // DO_FENCE_ENABLE
    auto currentElement_DO_FENCE_ENABLE = (msg + ctr)->DO_FENCE_ENABLE;
    outArray[ctr]["DOFENCEENABLE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_FENCE_ENABLE));
    // DO_PARACHUTE
    auto currentElement_DO_PARACHUTE = (msg + ctr)->DO_PARACHUTE;
    outArray[ctr]["DOPARACHUTE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_PARACHUTE));
    // DO_MOTOR_TEST
    auto currentElement_DO_MOTOR_TEST = (msg + ctr)->DO_MOTOR_TEST;
    outArray[ctr]["DOMOTORTEST"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_MOTOR_TEST));
    // DO_INVERTED_FLIGHT
    auto currentElement_DO_INVERTED_FLIGHT = (msg + ctr)->DO_INVERTED_FLIGHT;
    outArray[ctr]["DOINVERTEDFLIGHT"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_INVERTED_FLIGHT));
    // DO_GRIPPER
    auto currentElement_DO_GRIPPER = (msg + ctr)->DO_GRIPPER;
    outArray[ctr]["DOGRIPPER"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GRIPPER));
    // DO_AUTOTUNE_ENABLE
    auto currentElement_DO_AUTOTUNE_ENABLE = (msg + ctr)->DO_AUTOTUNE_ENABLE;
    outArray[ctr]["DOAUTOTUNEENABLE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_AUTOTUNE_ENABLE));
    // DO_SET_CAM_TRIGG_INTERVAL
    auto currentElement_DO_SET_CAM_TRIGG_INTERVAL = (msg + ctr)->DO_SET_CAM_TRIGG_INTERVAL;
    outArray[ctr]["DOSETCAMTRIGGINTERVAL"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_CAM_TRIGG_INTERVAL));
    // DO_MOUNT_CONTROL_QUAT
    auto currentElement_DO_MOUNT_CONTROL_QUAT = (msg + ctr)->DO_MOUNT_CONTROL_QUAT;
    outArray[ctr]["DOMOUNTCONTROLQUAT"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_MOUNT_CONTROL_QUAT));
    // DO_GUIDED_MASTER
    auto currentElement_DO_GUIDED_MASTER = (msg + ctr)->DO_GUIDED_MASTER;
    outArray[ctr]["DOGUIDEDMASTER"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GUIDED_MASTER));
    // DO_GUIDED_LIMITS
    auto currentElement_DO_GUIDED_LIMITS = (msg + ctr)->DO_GUIDED_LIMITS;
    outArray[ctr]["DOGUIDEDLIMITS"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GUIDED_LIMITS));
    // DO_ENGINE_CONTROL
    auto currentElement_DO_ENGINE_CONTROL = (msg + ctr)->DO_ENGINE_CONTROL;
    outArray[ctr]["DOENGINECONTROL"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_ENGINE_CONTROL));
    // DO_SET_MISSION_CURRENT
    auto currentElement_DO_SET_MISSION_CURRENT = (msg + ctr)->DO_SET_MISSION_CURRENT;
    outArray[ctr]["DOSETMISSIONCURRENT"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_SET_MISSION_CURRENT));
    // DO_LAST
    auto currentElement_DO_LAST = (msg + ctr)->DO_LAST;
    outArray[ctr]["DOLAST"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_LAST));
    // DO_UPGRADE
    auto currentElement_DO_UPGRADE = (msg + ctr)->DO_UPGRADE;
    outArray[ctr]["DOUPGRADE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_UPGRADE));
    // DO_JUMP_TAG
    auto currentElement_DO_JUMP_TAG = (msg + ctr)->DO_JUMP_TAG;
    outArray[ctr]["DOJUMPTAG"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_JUMP_TAG));
    // DO_GIMBAL_MANAGER_PITCHYAW
    auto currentElement_DO_GIMBAL_MANAGER_PITCHYAW = (msg + ctr)->DO_GIMBAL_MANAGER_PITCHYAW;
    outArray[ctr]["DOGIMBALMANAGERPITCHYAW"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GIMBAL_MANAGER_PITCHYAW));
    // DO_GIMBAL_MANAGER_CONFIGURE
    auto currentElement_DO_GIMBAL_MANAGER_CONFIGURE = (msg + ctr)->DO_GIMBAL_MANAGER_CONFIGURE;
    outArray[ctr]["DOGIMBALMANAGERCONFIGURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_GIMBAL_MANAGER_CONFIGURE));
    // DO_TRIGGER_CONTROL
    auto currentElement_DO_TRIGGER_CONTROL = (msg + ctr)->DO_TRIGGER_CONTROL;
    outArray[ctr]["DOTRIGGERCONTROL"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_TRIGGER_CONTROL));
    // DO_VTOL_TRANSITION
    auto currentElement_DO_VTOL_TRANSITION = (msg + ctr)->DO_VTOL_TRANSITION;
    outArray[ctr]["DOVTOLTRANSITION"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_VTOL_TRANSITION));
    // DO_WINCH
    auto currentElement_DO_WINCH = (msg + ctr)->DO_WINCH;
    outArray[ctr]["DOWINCH"] = factory.createScalar(static_cast<uint16_t>(currentElement_DO_WINCH));
    // FIXED_MAG_CAL_YAW
    auto currentElement_FIXED_MAG_CAL_YAW = (msg + ctr)->FIXED_MAG_CAL_YAW;
    outArray[ctr]["FIXEDMAGCALYAW"] = factory.createScalar(static_cast<uint16_t>(currentElement_FIXED_MAG_CAL_YAW));
    // GET_HOME_POSITION
    auto currentElement_GET_HOME_POSITION = (msg + ctr)->GET_HOME_POSITION;
    outArray[ctr]["GETHOMEPOSITION"] = factory.createScalar(static_cast<uint16_t>(currentElement_GET_HOME_POSITION));
    // GET_MESSAGE_INTERVAL
    auto currentElement_GET_MESSAGE_INTERVAL = (msg + ctr)->GET_MESSAGE_INTERVAL;
    outArray[ctr]["GETMESSAGEINTERVAL"] = factory.createScalar(static_cast<uint16_t>(currentElement_GET_MESSAGE_INTERVAL));
    // ILLUMINATOR_ON_OFF
    auto currentElement_ILLUMINATOR_ON_OFF = (msg + ctr)->ILLUMINATOR_ON_OFF;
    outArray[ctr]["ILLUMINATORONOFF"] = factory.createScalar(static_cast<uint16_t>(currentElement_ILLUMINATOR_ON_OFF));
    // IMAGE_START_CAPTURE
    auto currentElement_IMAGE_START_CAPTURE = (msg + ctr)->IMAGE_START_CAPTURE;
    outArray[ctr]["IMAGESTARTCAPTURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IMAGE_START_CAPTURE));
    // IMAGE_STOP_CAPTURE
    auto currentElement_IMAGE_STOP_CAPTURE = (msg + ctr)->IMAGE_STOP_CAPTURE;
    outArray[ctr]["IMAGESTOPCAPTURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IMAGE_STOP_CAPTURE));
    // INJECT_FAILURE
    auto currentElement_INJECT_FAILURE = (msg + ctr)->INJECT_FAILURE;
    outArray[ctr]["INJECTFAILURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_INJECT_FAILURE));
    // JUMP_TAG
    auto currentElement_JUMP_TAG = (msg + ctr)->JUMP_TAG;
    outArray[ctr]["JUMPTAG"] = factory.createScalar(static_cast<uint16_t>(currentElement_JUMP_TAG));
    // LOGGING_START
    auto currentElement_LOGGING_START = (msg + ctr)->LOGGING_START;
    outArray[ctr]["LOGGINGSTART"] = factory.createScalar(static_cast<uint16_t>(currentElement_LOGGING_START));
    // LOGGING_STOP
    auto currentElement_LOGGING_STOP = (msg + ctr)->LOGGING_STOP;
    outArray[ctr]["LOGGINGSTOP"] = factory.createScalar(static_cast<uint16_t>(currentElement_LOGGING_STOP));
    // MISSION_START
    auto currentElement_MISSION_START = (msg + ctr)->MISSION_START;
    outArray[ctr]["MISSIONSTART"] = factory.createScalar(static_cast<uint16_t>(currentElement_MISSION_START));
    // NAV_WAYPOINT
    auto currentElement_NAV_WAYPOINT = (msg + ctr)->NAV_WAYPOINT;
    outArray[ctr]["NAVWAYPOINT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_WAYPOINT));
    // NAV_LOITER_UNLIM
    auto currentElement_NAV_LOITER_UNLIM = (msg + ctr)->NAV_LOITER_UNLIM;
    outArray[ctr]["NAVLOITERUNLIM"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LOITER_UNLIM));
    // NAV_LOITER_TURNS
    auto currentElement_NAV_LOITER_TURNS = (msg + ctr)->NAV_LOITER_TURNS;
    outArray[ctr]["NAVLOITERTURNS"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LOITER_TURNS));
    // NAV_LOITER_TIME
    auto currentElement_NAV_LOITER_TIME = (msg + ctr)->NAV_LOITER_TIME;
    outArray[ctr]["NAVLOITERTIME"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LOITER_TIME));
    // NAV_RETURN_TO_LAUNCH
    auto currentElement_NAV_RETURN_TO_LAUNCH = (msg + ctr)->NAV_RETURN_TO_LAUNCH;
    outArray[ctr]["NAVRETURNTOLAUNCH"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_RETURN_TO_LAUNCH));
    // NAV_LAND
    auto currentElement_NAV_LAND = (msg + ctr)->NAV_LAND;
    outArray[ctr]["NAVLAND"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LAND));
    // NAV_TAKEOFF
    auto currentElement_NAV_TAKEOFF = (msg + ctr)->NAV_TAKEOFF;
    outArray[ctr]["NAVTAKEOFF"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_TAKEOFF));
    // NAV_LAND_LOCAL
    auto currentElement_NAV_LAND_LOCAL = (msg + ctr)->NAV_LAND_LOCAL;
    outArray[ctr]["NAVLANDLOCAL"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LAND_LOCAL));
    // NAV_TAKEOFF_LOCAL
    auto currentElement_NAV_TAKEOFF_LOCAL = (msg + ctr)->NAV_TAKEOFF_LOCAL;
    outArray[ctr]["NAVTAKEOFFLOCAL"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_TAKEOFF_LOCAL));
    // NAV_FOLLOW
    auto currentElement_NAV_FOLLOW = (msg + ctr)->NAV_FOLLOW;
    outArray[ctr]["NAVFOLLOW"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FOLLOW));
    // NAV_CONTINUE_AND_CHANGE_ALT
    auto currentElement_NAV_CONTINUE_AND_CHANGE_ALT = (msg + ctr)->NAV_CONTINUE_AND_CHANGE_ALT;
    outArray[ctr]["NAVCONTINUEANDCHANGEALT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_CONTINUE_AND_CHANGE_ALT));
    // NAV_LOITER_TO_ALT
    auto currentElement_NAV_LOITER_TO_ALT = (msg + ctr)->NAV_LOITER_TO_ALT;
    outArray[ctr]["NAVLOITERTOALT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LOITER_TO_ALT));
    // NAV_ROI
    auto currentElement_NAV_ROI = (msg + ctr)->NAV_ROI;
    outArray[ctr]["NAVROI"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_ROI));
    // NAV_PATHPLANNING
    auto currentElement_NAV_PATHPLANNING = (msg + ctr)->NAV_PATHPLANNING;
    outArray[ctr]["NAVPATHPLANNING"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_PATHPLANNING));
    // NAV_SPLINE_WAYPOINT
    auto currentElement_NAV_SPLINE_WAYPOINT = (msg + ctr)->NAV_SPLINE_WAYPOINT;
    outArray[ctr]["NAVSPLINEWAYPOINT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_SPLINE_WAYPOINT));
    // NAV_VTOL_TAKEOFF
    auto currentElement_NAV_VTOL_TAKEOFF = (msg + ctr)->NAV_VTOL_TAKEOFF;
    outArray[ctr]["NAVVTOLTAKEOFF"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_VTOL_TAKEOFF));
    // NAV_VTOL_LAND
    auto currentElement_NAV_VTOL_LAND = (msg + ctr)->NAV_VTOL_LAND;
    outArray[ctr]["NAVVTOLLAND"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_VTOL_LAND));
    // NAV_GUIDED_ENABLE
    auto currentElement_NAV_GUIDED_ENABLE = (msg + ctr)->NAV_GUIDED_ENABLE;
    outArray[ctr]["NAVGUIDEDENABLE"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_GUIDED_ENABLE));
    // NAV_DELAY
    auto currentElement_NAV_DELAY = (msg + ctr)->NAV_DELAY;
    outArray[ctr]["NAVDELAY"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_DELAY));
    // NAV_PAYLOAD_PLACE
    auto currentElement_NAV_PAYLOAD_PLACE = (msg + ctr)->NAV_PAYLOAD_PLACE;
    outArray[ctr]["NAVPAYLOADPLACE"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_PAYLOAD_PLACE));
    // NAV_LAST
    auto currentElement_NAV_LAST = (msg + ctr)->NAV_LAST;
    outArray[ctr]["NAVLAST"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_LAST));
    // NAV_SET_YAW_SPEED
    auto currentElement_NAV_SET_YAW_SPEED = (msg + ctr)->NAV_SET_YAW_SPEED;
    outArray[ctr]["NAVSETYAWSPEED"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_SET_YAW_SPEED));
    // NAV_FENCE_RETURN_POINT
    auto currentElement_NAV_FENCE_RETURN_POINT = (msg + ctr)->NAV_FENCE_RETURN_POINT;
    outArray[ctr]["NAVFENCERETURNPOINT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FENCE_RETURN_POINT));
    // NAV_FENCE_POLYGON_VERTEX_INCLUSION
    auto currentElement_NAV_FENCE_POLYGON_VERTEX_INCLUSION = (msg + ctr)->NAV_FENCE_POLYGON_VERTEX_INCLUSION;
    outArray[ctr]["NAVFENCEPOLYGONVERTEXINCLUSION"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FENCE_POLYGON_VERTEX_INCLUSION));
    // NAV_FENCE_POLYGON_VERTEX_EXCLUSION
    auto currentElement_NAV_FENCE_POLYGON_VERTEX_EXCLUSION = (msg + ctr)->NAV_FENCE_POLYGON_VERTEX_EXCLUSION;
    outArray[ctr]["NAVFENCEPOLYGONVERTEXEXCLUSION"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FENCE_POLYGON_VERTEX_EXCLUSION));
    // NAV_FENCE_CIRCLE_INCLUSION
    auto currentElement_NAV_FENCE_CIRCLE_INCLUSION = (msg + ctr)->NAV_FENCE_CIRCLE_INCLUSION;
    outArray[ctr]["NAVFENCECIRCLEINCLUSION"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FENCE_CIRCLE_INCLUSION));
    // NAV_FENCE_CIRCLE_EXCLUSION
    auto currentElement_NAV_FENCE_CIRCLE_EXCLUSION = (msg + ctr)->NAV_FENCE_CIRCLE_EXCLUSION;
    outArray[ctr]["NAVFENCECIRCLEEXCLUSION"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_FENCE_CIRCLE_EXCLUSION));
    // NAV_RALLY_POINT
    auto currentElement_NAV_RALLY_POINT = (msg + ctr)->NAV_RALLY_POINT;
    outArray[ctr]["NAVRALLYPOINT"] = factory.createScalar(static_cast<uint16_t>(currentElement_NAV_RALLY_POINT));
    // OBLIQUE_SURVEY
    auto currentElement_OBLIQUE_SURVEY = (msg + ctr)->OBLIQUE_SURVEY;
    outArray[ctr]["OBLIQUESURVEY"] = factory.createScalar(static_cast<uint16_t>(currentElement_OBLIQUE_SURVEY));
    // OVERRIDE_GOTO
    auto currentElement_OVERRIDE_GOTO = (msg + ctr)->OVERRIDE_GOTO;
    outArray[ctr]["OVERRIDEGOTO"] = factory.createScalar(static_cast<uint16_t>(currentElement_OVERRIDE_GOTO));
    // PANORAMA_CREATE
    auto currentElement_PANORAMA_CREATE = (msg + ctr)->PANORAMA_CREATE;
    outArray[ctr]["PANORAMACREATE"] = factory.createScalar(static_cast<uint16_t>(currentElement_PANORAMA_CREATE));
    // PARAM_TRANSACTION
    auto currentElement_PARAM_TRANSACTION = (msg + ctr)->PARAM_TRANSACTION;
    outArray[ctr]["PARAMTRANSACTION"] = factory.createScalar(static_cast<uint16_t>(currentElement_PARAM_TRANSACTION));
    // PAYLOAD_PREPARE_DEPLOY
    auto currentElement_PAYLOAD_PREPARE_DEPLOY = (msg + ctr)->PAYLOAD_PREPARE_DEPLOY;
    outArray[ctr]["PAYLOADPREPAREDEPLOY"] = factory.createScalar(static_cast<uint16_t>(currentElement_PAYLOAD_PREPARE_DEPLOY));
    // PAYLOAD_CONTROL_DEPLOY
    auto currentElement_PAYLOAD_CONTROL_DEPLOY = (msg + ctr)->PAYLOAD_CONTROL_DEPLOY;
    outArray[ctr]["PAYLOADCONTROLDEPLOY"] = factory.createScalar(static_cast<uint16_t>(currentElement_PAYLOAD_CONTROL_DEPLOY));
    // PREFLIGHT_CALIBRATION
    auto currentElement_PREFLIGHT_CALIBRATION = (msg + ctr)->PREFLIGHT_CALIBRATION;
    outArray[ctr]["PREFLIGHTCALIBRATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_PREFLIGHT_CALIBRATION));
    // PREFLIGHT_SET_SENSOR_OFFSETS
    auto currentElement_PREFLIGHT_SET_SENSOR_OFFSETS = (msg + ctr)->PREFLIGHT_SET_SENSOR_OFFSETS;
    outArray[ctr]["PREFLIGHTSETSENSOROFFSETS"] = factory.createScalar(static_cast<uint16_t>(currentElement_PREFLIGHT_SET_SENSOR_OFFSETS));
    // PREFLIGHT_UAVCAN
    auto currentElement_PREFLIGHT_UAVCAN = (msg + ctr)->PREFLIGHT_UAVCAN;
    outArray[ctr]["PREFLIGHTUAVCAN"] = factory.createScalar(static_cast<uint16_t>(currentElement_PREFLIGHT_UAVCAN));
    // PREFLIGHT_STORAGE
    auto currentElement_PREFLIGHT_STORAGE = (msg + ctr)->PREFLIGHT_STORAGE;
    outArray[ctr]["PREFLIGHTSTORAGE"] = factory.createScalar(static_cast<uint16_t>(currentElement_PREFLIGHT_STORAGE));
    // PREFLIGHT_REBOOT_SHUTDOWN
    auto currentElement_PREFLIGHT_REBOOT_SHUTDOWN = (msg + ctr)->PREFLIGHT_REBOOT_SHUTDOWN;
    outArray[ctr]["PREFLIGHTREBOOTSHUTDOWN"] = factory.createScalar(static_cast<uint16_t>(currentElement_PREFLIGHT_REBOOT_SHUTDOWN));
    // REQUEST_MESSAGE
    auto currentElement_REQUEST_MESSAGE = (msg + ctr)->REQUEST_MESSAGE;
    outArray[ctr]["REQUESTMESSAGE"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_MESSAGE));
    // REQUEST_PROTOCOL_VERSION
    auto currentElement_REQUEST_PROTOCOL_VERSION = (msg + ctr)->REQUEST_PROTOCOL_VERSION;
    outArray[ctr]["REQUESTPROTOCOLVERSION"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_PROTOCOL_VERSION));
    // REQUEST_AUTOPILOT_CAPABILITIES
    auto currentElement_REQUEST_AUTOPILOT_CAPABILITIES = (msg + ctr)->REQUEST_AUTOPILOT_CAPABILITIES;
    outArray[ctr]["REQUESTAUTOPILOTCAPABILITIES"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_AUTOPILOT_CAPABILITIES));
    // REQUEST_CAMERA_INFORMATION
    auto currentElement_REQUEST_CAMERA_INFORMATION = (msg + ctr)->REQUEST_CAMERA_INFORMATION;
    outArray[ctr]["REQUESTCAMERAINFORMATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_CAMERA_INFORMATION));
    // REQUEST_CAMERA_SETTINGS
    auto currentElement_REQUEST_CAMERA_SETTINGS = (msg + ctr)->REQUEST_CAMERA_SETTINGS;
    outArray[ctr]["REQUESTCAMERASETTINGS"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_CAMERA_SETTINGS));
    // REQUEST_STORAGE_INFORMATION
    auto currentElement_REQUEST_STORAGE_INFORMATION = (msg + ctr)->REQUEST_STORAGE_INFORMATION;
    outArray[ctr]["REQUESTSTORAGEINFORMATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_STORAGE_INFORMATION));
    // REQUEST_CAMERA_CAPTURE_STATUS
    auto currentElement_REQUEST_CAMERA_CAPTURE_STATUS = (msg + ctr)->REQUEST_CAMERA_CAPTURE_STATUS;
    outArray[ctr]["REQUESTCAMERACAPTURESTATUS"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_CAMERA_CAPTURE_STATUS));
    // REQUEST_FLIGHT_INFORMATION
    auto currentElement_REQUEST_FLIGHT_INFORMATION = (msg + ctr)->REQUEST_FLIGHT_INFORMATION;
    outArray[ctr]["REQUESTFLIGHTINFORMATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_FLIGHT_INFORMATION));
    // REQUEST_CAMERA_IMAGE_CAPTURE
    auto currentElement_REQUEST_CAMERA_IMAGE_CAPTURE = (msg + ctr)->REQUEST_CAMERA_IMAGE_CAPTURE;
    outArray[ctr]["REQUESTCAMERAIMAGECAPTURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_CAMERA_IMAGE_CAPTURE));
    // REQUEST_VIDEO_STREAM_INFORMATION
    auto currentElement_REQUEST_VIDEO_STREAM_INFORMATION = (msg + ctr)->REQUEST_VIDEO_STREAM_INFORMATION;
    outArray[ctr]["REQUESTVIDEOSTREAMINFORMATION"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_VIDEO_STREAM_INFORMATION));
    // REQUEST_VIDEO_STREAM_STATUS
    auto currentElement_REQUEST_VIDEO_STREAM_STATUS = (msg + ctr)->REQUEST_VIDEO_STREAM_STATUS;
    outArray[ctr]["REQUESTVIDEOSTREAMSTATUS"] = factory.createScalar(static_cast<uint16_t>(currentElement_REQUEST_VIDEO_STREAM_STATUS));
    // RESET_CAMERA_SETTINGS
    auto currentElement_RESET_CAMERA_SETTINGS = (msg + ctr)->RESET_CAMERA_SETTINGS;
    outArray[ctr]["RESETCAMERASETTINGS"] = factory.createScalar(static_cast<uint16_t>(currentElement_RESET_CAMERA_SETTINGS));
    // SET_MESSAGE_INTERVAL
    auto currentElement_SET_MESSAGE_INTERVAL = (msg + ctr)->SET_MESSAGE_INTERVAL;
    outArray[ctr]["SETMESSAGEINTERVAL"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_MESSAGE_INTERVAL));
    // SET_CAMERA_MODE
    auto currentElement_SET_CAMERA_MODE = (msg + ctr)->SET_CAMERA_MODE;
    outArray[ctr]["SETCAMERAMODE"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_CAMERA_MODE));
    // SET_CAMERA_ZOOM
    auto currentElement_SET_CAMERA_ZOOM = (msg + ctr)->SET_CAMERA_ZOOM;
    outArray[ctr]["SETCAMERAZOOM"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_CAMERA_ZOOM));
    // SET_CAMERA_FOCUS
    auto currentElement_SET_CAMERA_FOCUS = (msg + ctr)->SET_CAMERA_FOCUS;
    outArray[ctr]["SETCAMERAFOCUS"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_CAMERA_FOCUS));
    // SET_GUIDED_SUBMODE_STANDARD
    auto currentElement_SET_GUIDED_SUBMODE_STANDARD = (msg + ctr)->SET_GUIDED_SUBMODE_STANDARD;
    outArray[ctr]["SETGUIDEDSUBMODESTANDARD"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_GUIDED_SUBMODE_STANDARD));
    // SET_GUIDED_SUBMODE_CIRCLE
    auto currentElement_SET_GUIDED_SUBMODE_CIRCLE = (msg + ctr)->SET_GUIDED_SUBMODE_CIRCLE;
    outArray[ctr]["SETGUIDEDSUBMODECIRCLE"] = factory.createScalar(static_cast<uint16_t>(currentElement_SET_GUIDED_SUBMODE_CIRCLE));
    // START_RX_PAIR
    auto currentElement_START_RX_PAIR = (msg + ctr)->START_RX_PAIR;
    outArray[ctr]["STARTRXPAIR"] = factory.createScalar(static_cast<uint16_t>(currentElement_START_RX_PAIR));
    // STORAGE_FORMAT
    auto currentElement_STORAGE_FORMAT = (msg + ctr)->STORAGE_FORMAT;
    outArray[ctr]["STORAGEFORMAT"] = factory.createScalar(static_cast<uint16_t>(currentElement_STORAGE_FORMAT));
    // UAVCAN_GET_NODE_INFO
    auto currentElement_UAVCAN_GET_NODE_INFO = (msg + ctr)->UAVCAN_GET_NODE_INFO;
    outArray[ctr]["UAVCANGETNODEINFO"] = factory.createScalar(static_cast<uint16_t>(currentElement_UAVCAN_GET_NODE_INFO));
    // VIDEO_START_CAPTURE
    auto currentElement_VIDEO_START_CAPTURE = (msg + ctr)->VIDEO_START_CAPTURE;
    outArray[ctr]["VIDEOSTARTCAPTURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_VIDEO_START_CAPTURE));
    // VIDEO_STOP_CAPTURE
    auto currentElement_VIDEO_STOP_CAPTURE = (msg + ctr)->VIDEO_STOP_CAPTURE;
    outArray[ctr]["VIDEOSTOPCAPTURE"] = factory.createScalar(static_cast<uint16_t>(currentElement_VIDEO_STOP_CAPTURE));
    // VIDEO_START_STREAMING
    auto currentElement_VIDEO_START_STREAMING = (msg + ctr)->VIDEO_START_STREAMING;
    outArray[ctr]["VIDEOSTARTSTREAMING"] = factory.createScalar(static_cast<uint16_t>(currentElement_VIDEO_START_STREAMING));
    // VIDEO_STOP_STREAMING
    auto currentElement_VIDEO_STOP_STREAMING = (msg + ctr)->VIDEO_STOP_STREAMING;
    outArray[ctr]["VIDEOSTOPSTREAMING"] = factory.createScalar(static_cast<uint16_t>(currentElement_VIDEO_STOP_STREAMING));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandCode_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandCode_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandCode_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::CommandCode,mavros_msgs_msg_CommandCode_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_CommandCode_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandCode,mavros_msgs::CommandCode::ConstPtr,mavros_msgs_msg_CommandCode_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandCode_common, MATLABROSMsgInterface<mavros_msgs::CommandCode>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandCode_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1