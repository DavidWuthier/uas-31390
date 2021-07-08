// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CompanionProcessStatus
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
#include "mavros_msgs/CompanionProcessStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CompanionProcessStatus_common : public MATLABROSMsgInterface<mavros_msgs::CompanionProcessStatus> {
  public:
    virtual ~mavros_msgs_msg_CompanionProcessStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::CompanionProcessStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CompanionProcessStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CompanionProcessStatus_common::copy_from_struct(mavros_msgs::CompanionProcessStatus* msg, const matlab::data::Struct& arr,
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
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["State"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'State' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'State' is wrong type; expected a uint8.");
    }
    try {
        //component
        const matlab::data::TypedArray<uint8_t> component_arr = arr["Component"];
        msg->component = component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Component' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CompanionProcessStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::CompanionProcessStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","State","Component","MAVSTATEUNINIT","MAVSTATEBOOT","MAVSTATECALIBRATING","MAVSTATESTANDBY","MAVSTATEACTIVE","MAVSTATECRITICAL","MAVSTATEEMERGENCY","MAVSTATEPOWEROFF","MAVSTATEFLIGHTTERMINATION","MAVCOMPIDOBSTACLEAVOIDANCE","MAVCOMPIDVISUALINERTIALODOMETRY"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CompanionProcessStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["State"] = factory.createScalar(currentElement_state);
    // component
    auto currentElement_component = (msg + ctr)->component;
    outArray[ctr]["Component"] = factory.createScalar(currentElement_component);
    // MAV_STATE_UNINIT
    auto currentElement_MAV_STATE_UNINIT = (msg + ctr)->MAV_STATE_UNINIT;
    outArray[ctr]["MAVSTATEUNINIT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_UNINIT));
    // MAV_STATE_BOOT
    auto currentElement_MAV_STATE_BOOT = (msg + ctr)->MAV_STATE_BOOT;
    outArray[ctr]["MAVSTATEBOOT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_BOOT));
    // MAV_STATE_CALIBRATING
    auto currentElement_MAV_STATE_CALIBRATING = (msg + ctr)->MAV_STATE_CALIBRATING;
    outArray[ctr]["MAVSTATECALIBRATING"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_CALIBRATING));
    // MAV_STATE_STANDBY
    auto currentElement_MAV_STATE_STANDBY = (msg + ctr)->MAV_STATE_STANDBY;
    outArray[ctr]["MAVSTATESTANDBY"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_STANDBY));
    // MAV_STATE_ACTIVE
    auto currentElement_MAV_STATE_ACTIVE = (msg + ctr)->MAV_STATE_ACTIVE;
    outArray[ctr]["MAVSTATEACTIVE"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_ACTIVE));
    // MAV_STATE_CRITICAL
    auto currentElement_MAV_STATE_CRITICAL = (msg + ctr)->MAV_STATE_CRITICAL;
    outArray[ctr]["MAVSTATECRITICAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_CRITICAL));
    // MAV_STATE_EMERGENCY
    auto currentElement_MAV_STATE_EMERGENCY = (msg + ctr)->MAV_STATE_EMERGENCY;
    outArray[ctr]["MAVSTATEEMERGENCY"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_EMERGENCY));
    // MAV_STATE_POWEROFF
    auto currentElement_MAV_STATE_POWEROFF = (msg + ctr)->MAV_STATE_POWEROFF;
    outArray[ctr]["MAVSTATEPOWEROFF"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_POWEROFF));
    // MAV_STATE_FLIGHT_TERMINATION
    auto currentElement_MAV_STATE_FLIGHT_TERMINATION = (msg + ctr)->MAV_STATE_FLIGHT_TERMINATION;
    outArray[ctr]["MAVSTATEFLIGHTTERMINATION"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_STATE_FLIGHT_TERMINATION));
    // MAV_COMP_ID_OBSTACLE_AVOIDANCE
    auto currentElement_MAV_COMP_ID_OBSTACLE_AVOIDANCE = (msg + ctr)->MAV_COMP_ID_OBSTACLE_AVOIDANCE;
    outArray[ctr]["MAVCOMPIDOBSTACLEAVOIDANCE"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_COMP_ID_OBSTACLE_AVOIDANCE));
    // MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY
    auto currentElement_MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY = (msg + ctr)->MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY;
    outArray[ctr]["MAVCOMPIDVISUALINERTIALODOMETRY"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CompanionProcessStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CompanionProcessStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CompanionProcessStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::CompanionProcessStatus,mavros_msgs_msg_CompanionProcessStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_CompanionProcessStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::CompanionProcessStatus,mavros_msgs::CompanionProcessStatus::ConstPtr,mavros_msgs_msg_CompanionProcessStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CompanionProcessStatus_common, MATLABROSMsgInterface<mavros_msgs::CompanionProcessStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CompanionProcessStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1