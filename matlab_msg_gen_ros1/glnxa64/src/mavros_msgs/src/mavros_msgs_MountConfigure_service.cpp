// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/MountConfigureRequest
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
#include "mavros_msgs/MountConfigure.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_MountConfigureRequest_common : public MATLABROSMsgInterface<mavros_msgs::MountConfigure::Request> {
  public:
    virtual ~mavros_msgs_msg_MountConfigureRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::MountConfigure::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::MountConfigure::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_MountConfigureRequest_common::copy_from_struct(mavros_msgs::MountConfigure::Request* msg, const matlab::data::Struct& arr,
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
        //stabilize_roll
        const matlab::data::TypedArray<bool> stabilize_roll_arr = arr["StabilizeRoll"];
        msg->stabilize_roll = stabilize_roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StabilizeRoll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StabilizeRoll' is wrong type; expected a logical.");
    }
    try {
        //stabilize_pitch
        const matlab::data::TypedArray<bool> stabilize_pitch_arr = arr["StabilizePitch"];
        msg->stabilize_pitch = stabilize_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StabilizePitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StabilizePitch' is wrong type; expected a logical.");
    }
    try {
        //stabilize_yaw
        const matlab::data::TypedArray<bool> stabilize_yaw_arr = arr["StabilizeYaw"];
        msg->stabilize_yaw = stabilize_yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StabilizeYaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StabilizeYaw' is wrong type; expected a logical.");
    }
    try {
        //roll_input
        const matlab::data::TypedArray<uint8_t> roll_input_arr = arr["RollInput"];
        msg->roll_input = roll_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RollInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RollInput' is wrong type; expected a uint8.");
    }
    try {
        //pitch_input
        const matlab::data::TypedArray<uint8_t> pitch_input_arr = arr["PitchInput"];
        msg->pitch_input = pitch_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PitchInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PitchInput' is wrong type; expected a uint8.");
    }
    try {
        //yaw_input
        const matlab::data::TypedArray<uint8_t> yaw_input_arr = arr["YawInput"];
        msg->yaw_input = yaw_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'YawInput' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'YawInput' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_MountConfigureRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::MountConfigure::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Mode","MODERETRACT","MODENEUTRAL","MODEMAVLINKTARGETING","MODERCTARGETING","MODEGPSPOINT","StabilizeRoll","StabilizePitch","StabilizeYaw","RollInput","PitchInput","YawInput","INPUTANGLEBODYFRAME","INPUTANGULARRATE","INPUTANGLEABSOLUTEFRAME"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/MountConfigureRequest");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createScalar(currentElement_mode);
    // MODE_RETRACT
    auto currentElement_MODE_RETRACT = (msg + ctr)->MODE_RETRACT;
    outArray[ctr]["MODERETRACT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MODE_RETRACT));
    // MODE_NEUTRAL
    auto currentElement_MODE_NEUTRAL = (msg + ctr)->MODE_NEUTRAL;
    outArray[ctr]["MODENEUTRAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_MODE_NEUTRAL));
    // MODE_MAVLINK_TARGETING
    auto currentElement_MODE_MAVLINK_TARGETING = (msg + ctr)->MODE_MAVLINK_TARGETING;
    outArray[ctr]["MODEMAVLINKTARGETING"] = factory.createScalar(static_cast<uint8_t>(currentElement_MODE_MAVLINK_TARGETING));
    // MODE_RC_TARGETING
    auto currentElement_MODE_RC_TARGETING = (msg + ctr)->MODE_RC_TARGETING;
    outArray[ctr]["MODERCTARGETING"] = factory.createScalar(static_cast<uint8_t>(currentElement_MODE_RC_TARGETING));
    // MODE_GPS_POINT
    auto currentElement_MODE_GPS_POINT = (msg + ctr)->MODE_GPS_POINT;
    outArray[ctr]["MODEGPSPOINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_MODE_GPS_POINT));
    // stabilize_roll
    auto currentElement_stabilize_roll = (msg + ctr)->stabilize_roll;
    outArray[ctr]["StabilizeRoll"] = factory.createScalar(static_cast<bool>(currentElement_stabilize_roll));
    // stabilize_pitch
    auto currentElement_stabilize_pitch = (msg + ctr)->stabilize_pitch;
    outArray[ctr]["StabilizePitch"] = factory.createScalar(static_cast<bool>(currentElement_stabilize_pitch));
    // stabilize_yaw
    auto currentElement_stabilize_yaw = (msg + ctr)->stabilize_yaw;
    outArray[ctr]["StabilizeYaw"] = factory.createScalar(static_cast<bool>(currentElement_stabilize_yaw));
    // roll_input
    auto currentElement_roll_input = (msg + ctr)->roll_input;
    outArray[ctr]["RollInput"] = factory.createScalar(currentElement_roll_input);
    // pitch_input
    auto currentElement_pitch_input = (msg + ctr)->pitch_input;
    outArray[ctr]["PitchInput"] = factory.createScalar(currentElement_pitch_input);
    // yaw_input
    auto currentElement_yaw_input = (msg + ctr)->yaw_input;
    outArray[ctr]["YawInput"] = factory.createScalar(currentElement_yaw_input);
    // INPUT_ANGLE_BODY_FRAME
    auto currentElement_INPUT_ANGLE_BODY_FRAME = (msg + ctr)->INPUT_ANGLE_BODY_FRAME;
    outArray[ctr]["INPUTANGLEBODYFRAME"] = factory.createScalar(static_cast<uint8_t>(currentElement_INPUT_ANGLE_BODY_FRAME));
    // INPUT_ANGULAR_RATE
    auto currentElement_INPUT_ANGULAR_RATE = (msg + ctr)->INPUT_ANGULAR_RATE;
    outArray[ctr]["INPUTANGULARRATE"] = factory.createScalar(static_cast<uint8_t>(currentElement_INPUT_ANGULAR_RATE));
    // INPUT_ANGLE_ABSOLUTE_FRAME
    auto currentElement_INPUT_ANGLE_ABSOLUTE_FRAME = (msg + ctr)->INPUT_ANGLE_ABSOLUTE_FRAME;
    outArray[ctr]["INPUTANGLEABSOLUTEFRAME"] = factory.createScalar(static_cast<uint8_t>(currentElement_INPUT_ANGLE_ABSOLUTE_FRAME));
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_MountConfigureResponse_common : public MATLABROSMsgInterface<mavros_msgs::MountConfigure::Response> {
  public:
    virtual ~mavros_msgs_msg_MountConfigureResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::MountConfigure::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::MountConfigure::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_MountConfigureResponse_common::copy_from_struct(mavros_msgs::MountConfigure::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["Success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Success' is wrong type; expected a logical.");
    }
    try {
        //result
        const matlab::data::TypedArray<uint8_t> result_arr = arr["Result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Result' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_MountConfigureResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::MountConfigure::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/MountConfigureResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["Result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_MountConfigure_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_MountConfigure_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_MountConfigure_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::MountConfigure::Request,mavros_msgs_msg_MountConfigureRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::MountConfigure::Response,mavros_msgs_msg_MountConfigureResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_MountConfigure_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::MountConfigure::Request,mavros_msgs::MountConfigure::Request::ConstPtr,mavros_msgs_msg_MountConfigureRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::MountConfigure::Response,mavros_msgs::MountConfigure::Response::ConstPtr,mavros_msgs_msg_MountConfigureResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_MountConfigure_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::MountConfigure::Request,mavros_msgs::MountConfigure::Response,mavros_msgs_msg_MountConfigureRequest_common,mavros_msgs_msg_MountConfigureResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_MountConfigure_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::MountConfigure,mavros_msgs::MountConfigure::Request,mavros_msgs::MountConfigure::Response,mavros_msgs_msg_MountConfigureRequest_common,mavros_msgs_msg_MountConfigureResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_MountConfigureRequest_common, MATLABROSMsgInterface<mavros_msgs::MountConfigure::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_MountConfigureResponse_common, MATLABROSMsgInterface<mavros_msgs::MountConfigure::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_MountConfigure_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
