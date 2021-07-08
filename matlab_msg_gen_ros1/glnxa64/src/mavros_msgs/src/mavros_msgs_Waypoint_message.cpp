// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Waypoint
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
#include "mavros_msgs/Waypoint.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_Waypoint_common : public MATLABROSMsgInterface<mavros_msgs::Waypoint> {
  public:
    virtual ~mavros_msgs_msg_Waypoint_common(){}
    virtual void copy_from_struct(mavros_msgs::Waypoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::Waypoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_Waypoint_common::copy_from_struct(mavros_msgs::Waypoint* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr["Frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Frame' is wrong type; expected a uint8.");
    }
    try {
        //command
        const matlab::data::TypedArray<uint16_t> command_arr = arr["Command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Command' is wrong type; expected a uint16.");
    }
    try {
        //is_current
        const matlab::data::TypedArray<bool> is_current_arr = arr["IsCurrent"];
        msg->is_current = is_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IsCurrent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IsCurrent' is wrong type; expected a logical.");
    }
    try {
        //autocontinue
        const matlab::data::TypedArray<bool> autocontinue_arr = arr["Autocontinue"];
        msg->autocontinue = autocontinue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Autocontinue' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Autocontinue' is wrong type; expected a logical.");
    }
    try {
        //param1
        const matlab::data::TypedArray<float> param1_arr = arr["Param1"];
        msg->param1 = param1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param1' is wrong type; expected a single.");
    }
    try {
        //param2
        const matlab::data::TypedArray<float> param2_arr = arr["Param2"];
        msg->param2 = param2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param2' is wrong type; expected a single.");
    }
    try {
        //param3
        const matlab::data::TypedArray<float> param3_arr = arr["Param3"];
        msg->param3 = param3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param3' is wrong type; expected a single.");
    }
    try {
        //param4
        const matlab::data::TypedArray<float> param4_arr = arr["Param4"];
        msg->param4 = param4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param4' is wrong type; expected a single.");
    }
    try {
        //x_lat
        const matlab::data::TypedArray<double> x_lat_arr = arr["XLat"];
        msg->x_lat = x_lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'XLat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'XLat' is wrong type; expected a double.");
    }
    try {
        //y_long
        const matlab::data::TypedArray<double> y_long_arr = arr["YLong"];
        msg->y_long = y_long_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'YLong' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'YLong' is wrong type; expected a double.");
    }
    try {
        //z_alt
        const matlab::data::TypedArray<double> z_alt_arr = arr["ZAlt"];
        msg->z_alt = z_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ZAlt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ZAlt' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_Waypoint_common::get_arr(MDFactory_T& factory, const mavros_msgs::Waypoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Frame","FRAMEGLOBAL","FRAMELOCALNED","FRAMEMISSION","FRAMEGLOBALRELALT","FRAMELOCALENU","Command","IsCurrent","Autocontinue","Param1","Param2","Param3","Param4","XLat","YLong","ZAlt"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/Waypoint");
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["Frame"] = factory.createScalar(currentElement_frame);
    // FRAME_GLOBAL
    auto currentElement_FRAME_GLOBAL = (msg + ctr)->FRAME_GLOBAL;
    outArray[ctr]["FRAMEGLOBAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL));
    // FRAME_LOCAL_NED
    auto currentElement_FRAME_LOCAL_NED = (msg + ctr)->FRAME_LOCAL_NED;
    outArray[ctr]["FRAMELOCALNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_NED));
    // FRAME_MISSION
    auto currentElement_FRAME_MISSION = (msg + ctr)->FRAME_MISSION;
    outArray[ctr]["FRAMEMISSION"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_MISSION));
    // FRAME_GLOBAL_REL_ALT
    auto currentElement_FRAME_GLOBAL_REL_ALT = (msg + ctr)->FRAME_GLOBAL_REL_ALT;
    outArray[ctr]["FRAMEGLOBALRELALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_REL_ALT));
    // FRAME_LOCAL_ENU
    auto currentElement_FRAME_LOCAL_ENU = (msg + ctr)->FRAME_LOCAL_ENU;
    outArray[ctr]["FRAMELOCALENU"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_ENU));
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["Command"] = factory.createScalar(currentElement_command);
    // is_current
    auto currentElement_is_current = (msg + ctr)->is_current;
    outArray[ctr]["IsCurrent"] = factory.createScalar(static_cast<bool>(currentElement_is_current));
    // autocontinue
    auto currentElement_autocontinue = (msg + ctr)->autocontinue;
    outArray[ctr]["Autocontinue"] = factory.createScalar(static_cast<bool>(currentElement_autocontinue));
    // param1
    auto currentElement_param1 = (msg + ctr)->param1;
    outArray[ctr]["Param1"] = factory.createScalar(currentElement_param1);
    // param2
    auto currentElement_param2 = (msg + ctr)->param2;
    outArray[ctr]["Param2"] = factory.createScalar(currentElement_param2);
    // param3
    auto currentElement_param3 = (msg + ctr)->param3;
    outArray[ctr]["Param3"] = factory.createScalar(currentElement_param3);
    // param4
    auto currentElement_param4 = (msg + ctr)->param4;
    outArray[ctr]["Param4"] = factory.createScalar(currentElement_param4);
    // x_lat
    auto currentElement_x_lat = (msg + ctr)->x_lat;
    outArray[ctr]["XLat"] = factory.createScalar(currentElement_x_lat);
    // y_long
    auto currentElement_y_long = (msg + ctr)->y_long;
    outArray[ctr]["YLong"] = factory.createScalar(currentElement_y_long);
    // z_alt
    auto currentElement_z_alt = (msg + ctr)->z_alt;
    outArray[ctr]["ZAlt"] = factory.createScalar(currentElement_z_alt);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_Waypoint_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_Waypoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_Waypoint_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::Waypoint,mavros_msgs_msg_Waypoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_Waypoint_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::Waypoint,mavros_msgs::Waypoint::ConstPtr,mavros_msgs_msg_Waypoint_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_Waypoint_common, MATLABROSMsgInterface<mavros_msgs::Waypoint>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_Waypoint_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1