// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/GlobalPositionTarget
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
#include "mavros_msgs/GlobalPositionTarget.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_GlobalPositionTarget_common : public MATLABROSMsgInterface<mavros_msgs::GlobalPositionTarget> {
  public:
    virtual ~mavros_msgs_msg_GlobalPositionTarget_common(){}
    virtual void copy_from_struct(mavros_msgs::GlobalPositionTarget* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::GlobalPositionTarget* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_GlobalPositionTarget_common::copy_from_struct(mavros_msgs::GlobalPositionTarget* msg, const matlab::data::Struct& arr,
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
        //coordinate_frame
        const matlab::data::TypedArray<uint8_t> coordinate_frame_arr = arr["CoordinateFrame"];
        msg->coordinate_frame = coordinate_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CoordinateFrame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CoordinateFrame' is wrong type; expected a uint8.");
    }
    try {
        //type_mask
        const matlab::data::TypedArray<uint16_t> type_mask_arr = arr["TypeMask"];
        msg->type_mask = type_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TypeMask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TypeMask' is wrong type; expected a uint16.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<double> latitude_arr = arr["Latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Latitude' is wrong type; expected a double.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<double> longitude_arr = arr["Longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Longitude' is wrong type; expected a double.");
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
        //velocity
        const matlab::data::StructArray velocity_arr = arr["Velocity"];
        static auto msgClassPtr_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_velocity->copy_from_struct(&msg->velocity,velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Velocity' is wrong type; expected a struct.");
    }
    try {
        //acceleration_or_force
        const matlab::data::StructArray acceleration_or_force_arr = arr["AccelerationOrForce"];
        static auto msgClassPtr_acceleration_or_force = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_acceleration_or_force->copy_from_struct(&msg->acceleration_or_force,acceleration_or_force_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AccelerationOrForce' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AccelerationOrForce' is wrong type; expected a struct.");
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
        //yaw_rate
        const matlab::data::TypedArray<float> yaw_rate_arr = arr["YawRate"];
        msg->yaw_rate = yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'YawRate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'YawRate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_GlobalPositionTarget_common::get_arr(MDFactory_T& factory, const mavros_msgs::GlobalPositionTarget* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","CoordinateFrame","FRAMEGLOBALINT","FRAMEGLOBALRELALT","FRAMEGLOBALTERRAINALT","TypeMask","IGNORELATITUDE","IGNORELONGITUDE","IGNOREALTITUDE","IGNOREVX","IGNOREVY","IGNOREVZ","IGNOREAFX","IGNOREAFY","IGNOREAFZ","FORCE","IGNOREYAW","IGNOREYAWRATE","Latitude","Longitude","Altitude","Velocity","AccelerationOrForce","Yaw","YawRate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/GlobalPositionTarget");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // coordinate_frame
    auto currentElement_coordinate_frame = (msg + ctr)->coordinate_frame;
    outArray[ctr]["CoordinateFrame"] = factory.createScalar(currentElement_coordinate_frame);
    // FRAME_GLOBAL_INT
    auto currentElement_FRAME_GLOBAL_INT = (msg + ctr)->FRAME_GLOBAL_INT;
    outArray[ctr]["FRAMEGLOBALINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_INT));
    // FRAME_GLOBAL_REL_ALT
    auto currentElement_FRAME_GLOBAL_REL_ALT = (msg + ctr)->FRAME_GLOBAL_REL_ALT;
    outArray[ctr]["FRAMEGLOBALRELALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_REL_ALT));
    // FRAME_GLOBAL_TERRAIN_ALT
    auto currentElement_FRAME_GLOBAL_TERRAIN_ALT = (msg + ctr)->FRAME_GLOBAL_TERRAIN_ALT;
    outArray[ctr]["FRAMEGLOBALTERRAINALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_TERRAIN_ALT));
    // type_mask
    auto currentElement_type_mask = (msg + ctr)->type_mask;
    outArray[ctr]["TypeMask"] = factory.createScalar(currentElement_type_mask);
    // IGNORE_LATITUDE
    auto currentElement_IGNORE_LATITUDE = (msg + ctr)->IGNORE_LATITUDE;
    outArray[ctr]["IGNORELATITUDE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_LATITUDE));
    // IGNORE_LONGITUDE
    auto currentElement_IGNORE_LONGITUDE = (msg + ctr)->IGNORE_LONGITUDE;
    outArray[ctr]["IGNORELONGITUDE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_LONGITUDE));
    // IGNORE_ALTITUDE
    auto currentElement_IGNORE_ALTITUDE = (msg + ctr)->IGNORE_ALTITUDE;
    outArray[ctr]["IGNOREALTITUDE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_ALTITUDE));
    // IGNORE_VX
    auto currentElement_IGNORE_VX = (msg + ctr)->IGNORE_VX;
    outArray[ctr]["IGNOREVX"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_VX));
    // IGNORE_VY
    auto currentElement_IGNORE_VY = (msg + ctr)->IGNORE_VY;
    outArray[ctr]["IGNOREVY"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_VY));
    // IGNORE_VZ
    auto currentElement_IGNORE_VZ = (msg + ctr)->IGNORE_VZ;
    outArray[ctr]["IGNOREVZ"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_VZ));
    // IGNORE_AFX
    auto currentElement_IGNORE_AFX = (msg + ctr)->IGNORE_AFX;
    outArray[ctr]["IGNOREAFX"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_AFX));
    // IGNORE_AFY
    auto currentElement_IGNORE_AFY = (msg + ctr)->IGNORE_AFY;
    outArray[ctr]["IGNOREAFY"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_AFY));
    // IGNORE_AFZ
    auto currentElement_IGNORE_AFZ = (msg + ctr)->IGNORE_AFZ;
    outArray[ctr]["IGNOREAFZ"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_AFZ));
    // FORCE
    auto currentElement_FORCE = (msg + ctr)->FORCE;
    outArray[ctr]["FORCE"] = factory.createScalar(static_cast<uint16_t>(currentElement_FORCE));
    // IGNORE_YAW
    auto currentElement_IGNORE_YAW = (msg + ctr)->IGNORE_YAW;
    outArray[ctr]["IGNOREYAW"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_YAW));
    // IGNORE_YAW_RATE
    auto currentElement_IGNORE_YAW_RATE = (msg + ctr)->IGNORE_YAW_RATE;
    outArray[ctr]["IGNOREYAWRATE"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_YAW_RATE));
    // latitude
    auto currentElement_latitude = (msg + ctr)->latitude;
    outArray[ctr]["Latitude"] = factory.createScalar(currentElement_latitude);
    // longitude
    auto currentElement_longitude = (msg + ctr)->longitude;
    outArray[ctr]["Longitude"] = factory.createScalar(currentElement_longitude);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["Altitude"] = factory.createScalar(currentElement_altitude);
    // velocity
    auto currentElement_velocity = (msg + ctr)->velocity;
    static auto msgClassPtr_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["Velocity"] = msgClassPtr_velocity->get_arr(factory, &currentElement_velocity, loader);
    // acceleration_or_force
    auto currentElement_acceleration_or_force = (msg + ctr)->acceleration_or_force;
    static auto msgClassPtr_acceleration_or_force = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["AccelerationOrForce"] = msgClassPtr_acceleration_or_force->get_arr(factory, &currentElement_acceleration_or_force, loader);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["Yaw"] = factory.createScalar(currentElement_yaw);
    // yaw_rate
    auto currentElement_yaw_rate = (msg + ctr)->yaw_rate;
    outArray[ctr]["YawRate"] = factory.createScalar(currentElement_yaw_rate);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_GlobalPositionTarget_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_GlobalPositionTarget_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_GlobalPositionTarget_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::GlobalPositionTarget,mavros_msgs_msg_GlobalPositionTarget_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_GlobalPositionTarget_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::GlobalPositionTarget,mavros_msgs::GlobalPositionTarget::ConstPtr,mavros_msgs_msg_GlobalPositionTarget_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_GlobalPositionTarget_common, MATLABROSMsgInterface<mavros_msgs::GlobalPositionTarget>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_GlobalPositionTarget_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1