// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/State
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
#include "mavros_msgs/State.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_State_common : public MATLABROSMsgInterface<mavros_msgs::State> {
  public:
    virtual ~mavros_msgs_msg_State_common(){}
    virtual void copy_from_struct(mavros_msgs::State* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::State* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_State_common::copy_from_struct(mavros_msgs::State* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["Header"];
        static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Header' is wrong type; expected a struct.");
    }
    try {
        //connected
        const matlab::data::TypedArray<bool> connected_arr = arr["Connected"];
        msg->connected = connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Connected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Connected' is wrong type; expected a logical.");
    }
    try {
        //armed
        const matlab::data::TypedArray<bool> armed_arr = arr["Armed"];
        msg->armed = armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Armed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Armed' is wrong type; expected a logical.");
    }
    try {
        //guided
        const matlab::data::TypedArray<bool> guided_arr = arr["Guided"];
        msg->guided = guided_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Guided' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Guided' is wrong type; expected a logical.");
    }
    try {
        //manual_input
        const matlab::data::TypedArray<bool> manual_input_arr = arr["ManualInput"];
        msg->manual_input = manual_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ManualInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ManualInput' is wrong type; expected a logical.");
    }
    try {
        //mode
        const matlab::data::CharArray mode_arr = arr["Mode"];
        msg->mode = mode_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mode' is wrong type; expected a string.");
    }
    try {
        //system_status
        const matlab::data::TypedArray<uint8_t> system_status_arr = arr["SystemStatus"];
        msg->system_status = system_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SystemStatus' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SystemStatus' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_State_common::get_arr(MDFactory_T& factory, const mavros_msgs::State* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Connected","Armed","Guided","ManualInput","Mode","SystemStatus","MODEAPMPLANEMANUAL","MODEAPMPLANECIRCLE","MODEAPMPLANESTABILIZE","MODEAPMPLANETRAINING","MODEAPMPLANEACRO","MODEAPMPLANEFBWA","MODEAPMPLANEFBWB","MODEAPMPLANECRUISE","MODEAPMPLANEAUTOTUNE","MODEAPMPLANEAUTO","MODEAPMPLANERTL","MODEAPMPLANELOITER","MODEAPMPLANELAND","MODEAPMPLANEGUIDED","MODEAPMPLANEINITIALISING","MODEAPMPLANEQSTABILIZE","MODEAPMPLANEQHOVER","MODEAPMPLANEQLOITER","MODEAPMPLANEQLAND","MODEAPMPLANEQRTL","MODEAPMCOPTERSTABILIZE","MODEAPMCOPTERACRO","MODEAPMCOPTERALTHOLD","MODEAPMCOPTERAUTO","MODEAPMCOPTERGUIDED","MODEAPMCOPTERLOITER","MODEAPMCOPTERRTL","MODEAPMCOPTERCIRCLE","MODEAPMCOPTERPOSITION","MODEAPMCOPTERLAND","MODEAPMCOPTEROFLOITER","MODEAPMCOPTERDRIFT","MODEAPMCOPTERSPORT","MODEAPMCOPTERFLIP","MODEAPMCOPTERAUTOTUNE","MODEAPMCOPTERPOSHOLD","MODEAPMCOPTERBRAKE","MODEAPMCOPTERTHROW","MODEAPMCOPTERAVOIDADSB","MODEAPMCOPTERGUIDEDNOGPS","MODEAPMROVERMANUAL","MODEAPMROVERLEARNING","MODEAPMROVERSTEERING","MODEAPMROVERHOLD","MODEAPMROVERAUTO","MODEAPMROVERRTL","MODEAPMROVERGUIDED","MODEAPMROVERINITIALISING","MODEPX4MANUAL","MODEPX4ACRO","MODEPX4ALTITUDE","MODEPX4POSITION","MODEPX4OFFBOARD","MODEPX4STABILIZED","MODEPX4RATTITUDE","MODEPX4MISSION","MODEPX4LOITER","MODEPX4RTL","MODEPX4LAND","MODEPX4RTGS","MODEPX4READY","MODEPX4TAKEOFF"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/State");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // connected
    auto currentElement_connected = (msg + ctr)->connected;
    outArray[ctr]["Connected"] = factory.createScalar(static_cast<bool>(currentElement_connected));
    // armed
    auto currentElement_armed = (msg + ctr)->armed;
    outArray[ctr]["Armed"] = factory.createScalar(static_cast<bool>(currentElement_armed));
    // guided
    auto currentElement_guided = (msg + ctr)->guided;
    outArray[ctr]["Guided"] = factory.createScalar(static_cast<bool>(currentElement_guided));
    // manual_input
    auto currentElement_manual_input = (msg + ctr)->manual_input;
    outArray[ctr]["ManualInput"] = factory.createScalar(static_cast<bool>(currentElement_manual_input));
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createCharArray(currentElement_mode);
    // system_status
    auto currentElement_system_status = (msg + ctr)->system_status;
    outArray[ctr]["SystemStatus"] = factory.createScalar(currentElement_system_status);
    // MODE_APM_PLANE_MANUAL
    auto currentElement_MODE_APM_PLANE_MANUAL = (msg + ctr)->MODE_APM_PLANE_MANUAL;
    outArray[ctr]["MODEAPMPLANEMANUAL"] = factory.createCharArray(currentElement_MODE_APM_PLANE_MANUAL);
    // MODE_APM_PLANE_CIRCLE
    auto currentElement_MODE_APM_PLANE_CIRCLE = (msg + ctr)->MODE_APM_PLANE_CIRCLE;
    outArray[ctr]["MODEAPMPLANECIRCLE"] = factory.createCharArray(currentElement_MODE_APM_PLANE_CIRCLE);
    // MODE_APM_PLANE_STABILIZE
    auto currentElement_MODE_APM_PLANE_STABILIZE = (msg + ctr)->MODE_APM_PLANE_STABILIZE;
    outArray[ctr]["MODEAPMPLANESTABILIZE"] = factory.createCharArray(currentElement_MODE_APM_PLANE_STABILIZE);
    // MODE_APM_PLANE_TRAINING
    auto currentElement_MODE_APM_PLANE_TRAINING = (msg + ctr)->MODE_APM_PLANE_TRAINING;
    outArray[ctr]["MODEAPMPLANETRAINING"] = factory.createCharArray(currentElement_MODE_APM_PLANE_TRAINING);
    // MODE_APM_PLANE_ACRO
    auto currentElement_MODE_APM_PLANE_ACRO = (msg + ctr)->MODE_APM_PLANE_ACRO;
    outArray[ctr]["MODEAPMPLANEACRO"] = factory.createCharArray(currentElement_MODE_APM_PLANE_ACRO);
    // MODE_APM_PLANE_FBWA
    auto currentElement_MODE_APM_PLANE_FBWA = (msg + ctr)->MODE_APM_PLANE_FBWA;
    outArray[ctr]["MODEAPMPLANEFBWA"] = factory.createCharArray(currentElement_MODE_APM_PLANE_FBWA);
    // MODE_APM_PLANE_FBWB
    auto currentElement_MODE_APM_PLANE_FBWB = (msg + ctr)->MODE_APM_PLANE_FBWB;
    outArray[ctr]["MODEAPMPLANEFBWB"] = factory.createCharArray(currentElement_MODE_APM_PLANE_FBWB);
    // MODE_APM_PLANE_CRUISE
    auto currentElement_MODE_APM_PLANE_CRUISE = (msg + ctr)->MODE_APM_PLANE_CRUISE;
    outArray[ctr]["MODEAPMPLANECRUISE"] = factory.createCharArray(currentElement_MODE_APM_PLANE_CRUISE);
    // MODE_APM_PLANE_AUTOTUNE
    auto currentElement_MODE_APM_PLANE_AUTOTUNE = (msg + ctr)->MODE_APM_PLANE_AUTOTUNE;
    outArray[ctr]["MODEAPMPLANEAUTOTUNE"] = factory.createCharArray(currentElement_MODE_APM_PLANE_AUTOTUNE);
    // MODE_APM_PLANE_AUTO
    auto currentElement_MODE_APM_PLANE_AUTO = (msg + ctr)->MODE_APM_PLANE_AUTO;
    outArray[ctr]["MODEAPMPLANEAUTO"] = factory.createCharArray(currentElement_MODE_APM_PLANE_AUTO);
    // MODE_APM_PLANE_RTL
    auto currentElement_MODE_APM_PLANE_RTL = (msg + ctr)->MODE_APM_PLANE_RTL;
    outArray[ctr]["MODEAPMPLANERTL"] = factory.createCharArray(currentElement_MODE_APM_PLANE_RTL);
    // MODE_APM_PLANE_LOITER
    auto currentElement_MODE_APM_PLANE_LOITER = (msg + ctr)->MODE_APM_PLANE_LOITER;
    outArray[ctr]["MODEAPMPLANELOITER"] = factory.createCharArray(currentElement_MODE_APM_PLANE_LOITER);
    // MODE_APM_PLANE_LAND
    auto currentElement_MODE_APM_PLANE_LAND = (msg + ctr)->MODE_APM_PLANE_LAND;
    outArray[ctr]["MODEAPMPLANELAND"] = factory.createCharArray(currentElement_MODE_APM_PLANE_LAND);
    // MODE_APM_PLANE_GUIDED
    auto currentElement_MODE_APM_PLANE_GUIDED = (msg + ctr)->MODE_APM_PLANE_GUIDED;
    outArray[ctr]["MODEAPMPLANEGUIDED"] = factory.createCharArray(currentElement_MODE_APM_PLANE_GUIDED);
    // MODE_APM_PLANE_INITIALISING
    auto currentElement_MODE_APM_PLANE_INITIALISING = (msg + ctr)->MODE_APM_PLANE_INITIALISING;
    outArray[ctr]["MODEAPMPLANEINITIALISING"] = factory.createCharArray(currentElement_MODE_APM_PLANE_INITIALISING);
    // MODE_APM_PLANE_QSTABILIZE
    auto currentElement_MODE_APM_PLANE_QSTABILIZE = (msg + ctr)->MODE_APM_PLANE_QSTABILIZE;
    outArray[ctr]["MODEAPMPLANEQSTABILIZE"] = factory.createCharArray(currentElement_MODE_APM_PLANE_QSTABILIZE);
    // MODE_APM_PLANE_QHOVER
    auto currentElement_MODE_APM_PLANE_QHOVER = (msg + ctr)->MODE_APM_PLANE_QHOVER;
    outArray[ctr]["MODEAPMPLANEQHOVER"] = factory.createCharArray(currentElement_MODE_APM_PLANE_QHOVER);
    // MODE_APM_PLANE_QLOITER
    auto currentElement_MODE_APM_PLANE_QLOITER = (msg + ctr)->MODE_APM_PLANE_QLOITER;
    outArray[ctr]["MODEAPMPLANEQLOITER"] = factory.createCharArray(currentElement_MODE_APM_PLANE_QLOITER);
    // MODE_APM_PLANE_QLAND
    auto currentElement_MODE_APM_PLANE_QLAND = (msg + ctr)->MODE_APM_PLANE_QLAND;
    outArray[ctr]["MODEAPMPLANEQLAND"] = factory.createCharArray(currentElement_MODE_APM_PLANE_QLAND);
    // MODE_APM_PLANE_QRTL
    auto currentElement_MODE_APM_PLANE_QRTL = (msg + ctr)->MODE_APM_PLANE_QRTL;
    outArray[ctr]["MODEAPMPLANEQRTL"] = factory.createCharArray(currentElement_MODE_APM_PLANE_QRTL);
    // MODE_APM_COPTER_STABILIZE
    auto currentElement_MODE_APM_COPTER_STABILIZE = (msg + ctr)->MODE_APM_COPTER_STABILIZE;
    outArray[ctr]["MODEAPMCOPTERSTABILIZE"] = factory.createCharArray(currentElement_MODE_APM_COPTER_STABILIZE);
    // MODE_APM_COPTER_ACRO
    auto currentElement_MODE_APM_COPTER_ACRO = (msg + ctr)->MODE_APM_COPTER_ACRO;
    outArray[ctr]["MODEAPMCOPTERACRO"] = factory.createCharArray(currentElement_MODE_APM_COPTER_ACRO);
    // MODE_APM_COPTER_ALT_HOLD
    auto currentElement_MODE_APM_COPTER_ALT_HOLD = (msg + ctr)->MODE_APM_COPTER_ALT_HOLD;
    outArray[ctr]["MODEAPMCOPTERALTHOLD"] = factory.createCharArray(currentElement_MODE_APM_COPTER_ALT_HOLD);
    // MODE_APM_COPTER_AUTO
    auto currentElement_MODE_APM_COPTER_AUTO = (msg + ctr)->MODE_APM_COPTER_AUTO;
    outArray[ctr]["MODEAPMCOPTERAUTO"] = factory.createCharArray(currentElement_MODE_APM_COPTER_AUTO);
    // MODE_APM_COPTER_GUIDED
    auto currentElement_MODE_APM_COPTER_GUIDED = (msg + ctr)->MODE_APM_COPTER_GUIDED;
    outArray[ctr]["MODEAPMCOPTERGUIDED"] = factory.createCharArray(currentElement_MODE_APM_COPTER_GUIDED);
    // MODE_APM_COPTER_LOITER
    auto currentElement_MODE_APM_COPTER_LOITER = (msg + ctr)->MODE_APM_COPTER_LOITER;
    outArray[ctr]["MODEAPMCOPTERLOITER"] = factory.createCharArray(currentElement_MODE_APM_COPTER_LOITER);
    // MODE_APM_COPTER_RTL
    auto currentElement_MODE_APM_COPTER_RTL = (msg + ctr)->MODE_APM_COPTER_RTL;
    outArray[ctr]["MODEAPMCOPTERRTL"] = factory.createCharArray(currentElement_MODE_APM_COPTER_RTL);
    // MODE_APM_COPTER_CIRCLE
    auto currentElement_MODE_APM_COPTER_CIRCLE = (msg + ctr)->MODE_APM_COPTER_CIRCLE;
    outArray[ctr]["MODEAPMCOPTERCIRCLE"] = factory.createCharArray(currentElement_MODE_APM_COPTER_CIRCLE);
    // MODE_APM_COPTER_POSITION
    auto currentElement_MODE_APM_COPTER_POSITION = (msg + ctr)->MODE_APM_COPTER_POSITION;
    outArray[ctr]["MODEAPMCOPTERPOSITION"] = factory.createCharArray(currentElement_MODE_APM_COPTER_POSITION);
    // MODE_APM_COPTER_LAND
    auto currentElement_MODE_APM_COPTER_LAND = (msg + ctr)->MODE_APM_COPTER_LAND;
    outArray[ctr]["MODEAPMCOPTERLAND"] = factory.createCharArray(currentElement_MODE_APM_COPTER_LAND);
    // MODE_APM_COPTER_OF_LOITER
    auto currentElement_MODE_APM_COPTER_OF_LOITER = (msg + ctr)->MODE_APM_COPTER_OF_LOITER;
    outArray[ctr]["MODEAPMCOPTEROFLOITER"] = factory.createCharArray(currentElement_MODE_APM_COPTER_OF_LOITER);
    // MODE_APM_COPTER_DRIFT
    auto currentElement_MODE_APM_COPTER_DRIFT = (msg + ctr)->MODE_APM_COPTER_DRIFT;
    outArray[ctr]["MODEAPMCOPTERDRIFT"] = factory.createCharArray(currentElement_MODE_APM_COPTER_DRIFT);
    // MODE_APM_COPTER_SPORT
    auto currentElement_MODE_APM_COPTER_SPORT = (msg + ctr)->MODE_APM_COPTER_SPORT;
    outArray[ctr]["MODEAPMCOPTERSPORT"] = factory.createCharArray(currentElement_MODE_APM_COPTER_SPORT);
    // MODE_APM_COPTER_FLIP
    auto currentElement_MODE_APM_COPTER_FLIP = (msg + ctr)->MODE_APM_COPTER_FLIP;
    outArray[ctr]["MODEAPMCOPTERFLIP"] = factory.createCharArray(currentElement_MODE_APM_COPTER_FLIP);
    // MODE_APM_COPTER_AUTOTUNE
    auto currentElement_MODE_APM_COPTER_AUTOTUNE = (msg + ctr)->MODE_APM_COPTER_AUTOTUNE;
    outArray[ctr]["MODEAPMCOPTERAUTOTUNE"] = factory.createCharArray(currentElement_MODE_APM_COPTER_AUTOTUNE);
    // MODE_APM_COPTER_POSHOLD
    auto currentElement_MODE_APM_COPTER_POSHOLD = (msg + ctr)->MODE_APM_COPTER_POSHOLD;
    outArray[ctr]["MODEAPMCOPTERPOSHOLD"] = factory.createCharArray(currentElement_MODE_APM_COPTER_POSHOLD);
    // MODE_APM_COPTER_BRAKE
    auto currentElement_MODE_APM_COPTER_BRAKE = (msg + ctr)->MODE_APM_COPTER_BRAKE;
    outArray[ctr]["MODEAPMCOPTERBRAKE"] = factory.createCharArray(currentElement_MODE_APM_COPTER_BRAKE);
    // MODE_APM_COPTER_THROW
    auto currentElement_MODE_APM_COPTER_THROW = (msg + ctr)->MODE_APM_COPTER_THROW;
    outArray[ctr]["MODEAPMCOPTERTHROW"] = factory.createCharArray(currentElement_MODE_APM_COPTER_THROW);
    // MODE_APM_COPTER_AVOID_ADSB
    auto currentElement_MODE_APM_COPTER_AVOID_ADSB = (msg + ctr)->MODE_APM_COPTER_AVOID_ADSB;
    outArray[ctr]["MODEAPMCOPTERAVOIDADSB"] = factory.createCharArray(currentElement_MODE_APM_COPTER_AVOID_ADSB);
    // MODE_APM_COPTER_GUIDED_NOGPS
    auto currentElement_MODE_APM_COPTER_GUIDED_NOGPS = (msg + ctr)->MODE_APM_COPTER_GUIDED_NOGPS;
    outArray[ctr]["MODEAPMCOPTERGUIDEDNOGPS"] = factory.createCharArray(currentElement_MODE_APM_COPTER_GUIDED_NOGPS);
    // MODE_APM_ROVER_MANUAL
    auto currentElement_MODE_APM_ROVER_MANUAL = (msg + ctr)->MODE_APM_ROVER_MANUAL;
    outArray[ctr]["MODEAPMROVERMANUAL"] = factory.createCharArray(currentElement_MODE_APM_ROVER_MANUAL);
    // MODE_APM_ROVER_LEARNING
    auto currentElement_MODE_APM_ROVER_LEARNING = (msg + ctr)->MODE_APM_ROVER_LEARNING;
    outArray[ctr]["MODEAPMROVERLEARNING"] = factory.createCharArray(currentElement_MODE_APM_ROVER_LEARNING);
    // MODE_APM_ROVER_STEERING
    auto currentElement_MODE_APM_ROVER_STEERING = (msg + ctr)->MODE_APM_ROVER_STEERING;
    outArray[ctr]["MODEAPMROVERSTEERING"] = factory.createCharArray(currentElement_MODE_APM_ROVER_STEERING);
    // MODE_APM_ROVER_HOLD
    auto currentElement_MODE_APM_ROVER_HOLD = (msg + ctr)->MODE_APM_ROVER_HOLD;
    outArray[ctr]["MODEAPMROVERHOLD"] = factory.createCharArray(currentElement_MODE_APM_ROVER_HOLD);
    // MODE_APM_ROVER_AUTO
    auto currentElement_MODE_APM_ROVER_AUTO = (msg + ctr)->MODE_APM_ROVER_AUTO;
    outArray[ctr]["MODEAPMROVERAUTO"] = factory.createCharArray(currentElement_MODE_APM_ROVER_AUTO);
    // MODE_APM_ROVER_RTL
    auto currentElement_MODE_APM_ROVER_RTL = (msg + ctr)->MODE_APM_ROVER_RTL;
    outArray[ctr]["MODEAPMROVERRTL"] = factory.createCharArray(currentElement_MODE_APM_ROVER_RTL);
    // MODE_APM_ROVER_GUIDED
    auto currentElement_MODE_APM_ROVER_GUIDED = (msg + ctr)->MODE_APM_ROVER_GUIDED;
    outArray[ctr]["MODEAPMROVERGUIDED"] = factory.createCharArray(currentElement_MODE_APM_ROVER_GUIDED);
    // MODE_APM_ROVER_INITIALISING
    auto currentElement_MODE_APM_ROVER_INITIALISING = (msg + ctr)->MODE_APM_ROVER_INITIALISING;
    outArray[ctr]["MODEAPMROVERINITIALISING"] = factory.createCharArray(currentElement_MODE_APM_ROVER_INITIALISING);
    // MODE_PX4_MANUAL
    auto currentElement_MODE_PX4_MANUAL = (msg + ctr)->MODE_PX4_MANUAL;
    outArray[ctr]["MODEPX4MANUAL"] = factory.createCharArray(currentElement_MODE_PX4_MANUAL);
    // MODE_PX4_ACRO
    auto currentElement_MODE_PX4_ACRO = (msg + ctr)->MODE_PX4_ACRO;
    outArray[ctr]["MODEPX4ACRO"] = factory.createCharArray(currentElement_MODE_PX4_ACRO);
    // MODE_PX4_ALTITUDE
    auto currentElement_MODE_PX4_ALTITUDE = (msg + ctr)->MODE_PX4_ALTITUDE;
    outArray[ctr]["MODEPX4ALTITUDE"] = factory.createCharArray(currentElement_MODE_PX4_ALTITUDE);
    // MODE_PX4_POSITION
    auto currentElement_MODE_PX4_POSITION = (msg + ctr)->MODE_PX4_POSITION;
    outArray[ctr]["MODEPX4POSITION"] = factory.createCharArray(currentElement_MODE_PX4_POSITION);
    // MODE_PX4_OFFBOARD
    auto currentElement_MODE_PX4_OFFBOARD = (msg + ctr)->MODE_PX4_OFFBOARD;
    outArray[ctr]["MODEPX4OFFBOARD"] = factory.createCharArray(currentElement_MODE_PX4_OFFBOARD);
    // MODE_PX4_STABILIZED
    auto currentElement_MODE_PX4_STABILIZED = (msg + ctr)->MODE_PX4_STABILIZED;
    outArray[ctr]["MODEPX4STABILIZED"] = factory.createCharArray(currentElement_MODE_PX4_STABILIZED);
    // MODE_PX4_RATTITUDE
    auto currentElement_MODE_PX4_RATTITUDE = (msg + ctr)->MODE_PX4_RATTITUDE;
    outArray[ctr]["MODEPX4RATTITUDE"] = factory.createCharArray(currentElement_MODE_PX4_RATTITUDE);
    // MODE_PX4_MISSION
    auto currentElement_MODE_PX4_MISSION = (msg + ctr)->MODE_PX4_MISSION;
    outArray[ctr]["MODEPX4MISSION"] = factory.createCharArray(currentElement_MODE_PX4_MISSION);
    // MODE_PX4_LOITER
    auto currentElement_MODE_PX4_LOITER = (msg + ctr)->MODE_PX4_LOITER;
    outArray[ctr]["MODEPX4LOITER"] = factory.createCharArray(currentElement_MODE_PX4_LOITER);
    // MODE_PX4_RTL
    auto currentElement_MODE_PX4_RTL = (msg + ctr)->MODE_PX4_RTL;
    outArray[ctr]["MODEPX4RTL"] = factory.createCharArray(currentElement_MODE_PX4_RTL);
    // MODE_PX4_LAND
    auto currentElement_MODE_PX4_LAND = (msg + ctr)->MODE_PX4_LAND;
    outArray[ctr]["MODEPX4LAND"] = factory.createCharArray(currentElement_MODE_PX4_LAND);
    // MODE_PX4_RTGS
    auto currentElement_MODE_PX4_RTGS = (msg + ctr)->MODE_PX4_RTGS;
    outArray[ctr]["MODEPX4RTGS"] = factory.createCharArray(currentElement_MODE_PX4_RTGS);
    // MODE_PX4_READY
    auto currentElement_MODE_PX4_READY = (msg + ctr)->MODE_PX4_READY;
    outArray[ctr]["MODEPX4READY"] = factory.createCharArray(currentElement_MODE_PX4_READY);
    // MODE_PX4_TAKEOFF
    auto currentElement_MODE_PX4_TAKEOFF = (msg + ctr)->MODE_PX4_TAKEOFF;
    outArray[ctr]["MODEPX4TAKEOFF"] = factory.createCharArray(currentElement_MODE_PX4_TAKEOFF);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_State_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_State_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_State_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::State,mavros_msgs_msg_State_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_State_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::State,mavros_msgs::State::ConstPtr,mavros_msgs_msg_State_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_State_common, MATLABROSMsgInterface<mavros_msgs::State>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_State_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1