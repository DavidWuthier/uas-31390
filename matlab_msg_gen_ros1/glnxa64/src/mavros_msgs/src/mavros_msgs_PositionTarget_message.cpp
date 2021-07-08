// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/PositionTarget
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
#include "mavros_msgs/PositionTarget.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_PositionTarget_common : public MATLABROSMsgInterface<mavros_msgs::PositionTarget> {
  public:
    virtual ~mavros_msgs_msg_PositionTarget_common(){}
    virtual void copy_from_struct(mavros_msgs::PositionTarget* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::PositionTarget* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_PositionTarget_common::copy_from_struct(mavros_msgs::PositionTarget* msg, const matlab::data::Struct& arr,
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
        //position
        const matlab::data::StructArray position_arr = arr["Position"];
        static auto msgClassPtr_position = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Point>>("geometry_msgs_msg_Point_common");
        msgClassPtr_position->copy_from_struct(&msg->position,position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Position' is wrong type; expected a struct.");
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
  MDArray_T mavros_msgs_msg_PositionTarget_common::get_arr(MDFactory_T& factory, const mavros_msgs::PositionTarget* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","CoordinateFrame","FRAMELOCALNED","FRAMELOCALOFFSETNED","FRAMEBODYNED","FRAMEBODYOFFSETNED","TypeMask","IGNOREPX","IGNOREPY","IGNOREPZ","IGNOREVX","IGNOREVY","IGNOREVZ","IGNOREAFX","IGNOREAFY","IGNOREAFZ","FORCE","IGNOREYAW","IGNOREYAWRATE","Position","Velocity","AccelerationOrForce","Yaw","YawRate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/PositionTarget");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // coordinate_frame
    auto currentElement_coordinate_frame = (msg + ctr)->coordinate_frame;
    outArray[ctr]["CoordinateFrame"] = factory.createScalar(currentElement_coordinate_frame);
    // FRAME_LOCAL_NED
    auto currentElement_FRAME_LOCAL_NED = (msg + ctr)->FRAME_LOCAL_NED;
    outArray[ctr]["FRAMELOCALNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_NED));
    // FRAME_LOCAL_OFFSET_NED
    auto currentElement_FRAME_LOCAL_OFFSET_NED = (msg + ctr)->FRAME_LOCAL_OFFSET_NED;
    outArray[ctr]["FRAMELOCALOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_OFFSET_NED));
    // FRAME_BODY_NED
    auto currentElement_FRAME_BODY_NED = (msg + ctr)->FRAME_BODY_NED;
    outArray[ctr]["FRAMEBODYNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_BODY_NED));
    // FRAME_BODY_OFFSET_NED
    auto currentElement_FRAME_BODY_OFFSET_NED = (msg + ctr)->FRAME_BODY_OFFSET_NED;
    outArray[ctr]["FRAMEBODYOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_BODY_OFFSET_NED));
    // type_mask
    auto currentElement_type_mask = (msg + ctr)->type_mask;
    outArray[ctr]["TypeMask"] = factory.createScalar(currentElement_type_mask);
    // IGNORE_PX
    auto currentElement_IGNORE_PX = (msg + ctr)->IGNORE_PX;
    outArray[ctr]["IGNOREPX"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_PX));
    // IGNORE_PY
    auto currentElement_IGNORE_PY = (msg + ctr)->IGNORE_PY;
    outArray[ctr]["IGNOREPY"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_PY));
    // IGNORE_PZ
    auto currentElement_IGNORE_PZ = (msg + ctr)->IGNORE_PZ;
    outArray[ctr]["IGNOREPZ"] = factory.createScalar(static_cast<uint16_t>(currentElement_IGNORE_PZ));
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
    // position
    auto currentElement_position = (msg + ctr)->position;
    static auto msgClassPtr_position = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Point>>("geometry_msgs_msg_Point_common");
    outArray[ctr]["Position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
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
class MAVROS_MSGS_EXPORT mavros_msgs_PositionTarget_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_PositionTarget_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_PositionTarget_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::PositionTarget,mavros_msgs_msg_PositionTarget_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_PositionTarget_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::PositionTarget,mavros_msgs::PositionTarget::ConstPtr,mavros_msgs_msg_PositionTarget_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_PositionTarget_common, MATLABROSMsgInterface<mavros_msgs::PositionTarget>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_PositionTarget_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1