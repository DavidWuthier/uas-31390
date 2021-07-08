// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/MountControl
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
#include "mavros_msgs/MountControl.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_MountControl_common : public MATLABROSMsgInterface<mavros_msgs::MountControl> {
  public:
    virtual ~mavros_msgs_msg_MountControl_common(){}
    virtual void copy_from_struct(mavros_msgs::MountControl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::MountControl* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_MountControl_common::copy_from_struct(mavros_msgs::MountControl* msg, const matlab::data::Struct& arr,
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
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["Mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mode' is wrong type; expected a uint8.");
    }
    try {
        //pitch
        const matlab::data::TypedArray<float> pitch_arr = arr["Pitch"];
        msg->pitch = pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Pitch' is wrong type; expected a single.");
    }
    try {
        //roll
        const matlab::data::TypedArray<float> roll_arr = arr["Roll"];
        msg->roll = roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Roll' is wrong type; expected a single.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["Yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Yaw' is wrong type; expected a single.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["Altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Altitude' is wrong type; expected a single.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<float> latitude_arr = arr["Latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Latitude' is wrong type; expected a single.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<float> longitude_arr = arr["Longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Longitude' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_MountControl_common::get_arr(MDFactory_T& factory, const mavros_msgs::MountControl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Mode","MAVMOUNTMODERETRACT","MAVMOUNTMODENEUTRAL","MAVMOUNTMODEMAVLINKTARGETING","MAVMOUNTMODERCTARGETING","MAVMOUNTMODEGPSPOINT","Pitch","Roll","Yaw","Altitude","Latitude","Longitude"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/MountControl");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createScalar(currentElement_mode);
    // MAV_MOUNT_MODE_RETRACT
    auto currentElement_MAV_MOUNT_MODE_RETRACT = (msg + ctr)->MAV_MOUNT_MODE_RETRACT;
    outArray[ctr]["MAVMOUNTMODERETRACT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_MOUNT_MODE_RETRACT));
    // MAV_MOUNT_MODE_NEUTRAL
    auto currentElement_MAV_MOUNT_MODE_NEUTRAL = (msg + ctr)->MAV_MOUNT_MODE_NEUTRAL;
    outArray[ctr]["MAVMOUNTMODENEUTRAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_MOUNT_MODE_NEUTRAL));
    // MAV_MOUNT_MODE_MAVLINK_TARGETING
    auto currentElement_MAV_MOUNT_MODE_MAVLINK_TARGETING = (msg + ctr)->MAV_MOUNT_MODE_MAVLINK_TARGETING;
    outArray[ctr]["MAVMOUNTMODEMAVLINKTARGETING"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_MOUNT_MODE_MAVLINK_TARGETING));
    // MAV_MOUNT_MODE_RC_TARGETING
    auto currentElement_MAV_MOUNT_MODE_RC_TARGETING = (msg + ctr)->MAV_MOUNT_MODE_RC_TARGETING;
    outArray[ctr]["MAVMOUNTMODERCTARGETING"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_MOUNT_MODE_RC_TARGETING));
    // MAV_MOUNT_MODE_GPS_POINT
    auto currentElement_MAV_MOUNT_MODE_GPS_POINT = (msg + ctr)->MAV_MOUNT_MODE_GPS_POINT;
    outArray[ctr]["MAVMOUNTMODEGPSPOINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_MOUNT_MODE_GPS_POINT));
    // pitch
    auto currentElement_pitch = (msg + ctr)->pitch;
    outArray[ctr]["Pitch"] = factory.createScalar(currentElement_pitch);
    // roll
    auto currentElement_roll = (msg + ctr)->roll;
    outArray[ctr]["Roll"] = factory.createScalar(currentElement_roll);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["Yaw"] = factory.createScalar(currentElement_yaw);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["Altitude"] = factory.createScalar(currentElement_altitude);
    // latitude
    auto currentElement_latitude = (msg + ctr)->latitude;
    outArray[ctr]["Latitude"] = factory.createScalar(currentElement_latitude);
    // longitude
    auto currentElement_longitude = (msg + ctr)->longitude;
    outArray[ctr]["Longitude"] = factory.createScalar(currentElement_longitude);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_MountControl_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_MountControl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_MountControl_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::MountControl,mavros_msgs_msg_MountControl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_MountControl_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::MountControl,mavros_msgs::MountControl::ConstPtr,mavros_msgs_msg_MountControl_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_MountControl_common, MATLABROSMsgInterface<mavros_msgs::MountControl>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_MountControl_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1