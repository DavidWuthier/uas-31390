// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandIntRequest
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
#include "mavros_msgs/CommandInt.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandIntRequest_common : public MATLABROSMsgInterface<mavros_msgs::CommandInt::Request> {
  public:
    virtual ~mavros_msgs_msg_CommandIntRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandInt::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandInt::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandIntRequest_common::copy_from_struct(mavros_msgs::CommandInt::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //broadcast
        const matlab::data::TypedArray<bool> broadcast_arr = arr["Broadcast"];
        msg->broadcast = broadcast_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Broadcast' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Broadcast' is wrong type; expected a logical.");
    }
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
        //current
        const matlab::data::TypedArray<uint8_t> current_arr = arr["Current"];
        msg->current = current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Current' is wrong type; expected a uint8.");
    }
    try {
        //autocontinue
        const matlab::data::TypedArray<uint8_t> autocontinue_arr = arr["Autocontinue"];
        msg->autocontinue = autocontinue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Autocontinue' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Autocontinue' is wrong type; expected a uint8.");
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
        //x
        const matlab::data::TypedArray<int32_t> x_arr = arr["X"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'X' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'X' is wrong type; expected a int32.");
    }
    try {
        //y
        const matlab::data::TypedArray<int32_t> y_arr = arr["Y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Y' is wrong type; expected a int32.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["Z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandIntRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandInt::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Broadcast","Frame","Command","Current","Autocontinue","Param1","Param2","Param3","Param4","X","Y","Z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandIntRequest");
    // broadcast
    auto currentElement_broadcast = (msg + ctr)->broadcast;
    outArray[ctr]["Broadcast"] = factory.createScalar(static_cast<bool>(currentElement_broadcast));
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["Frame"] = factory.createScalar(currentElement_frame);
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["Command"] = factory.createScalar(currentElement_command);
    // current
    auto currentElement_current = (msg + ctr)->current;
    outArray[ctr]["Current"] = factory.createScalar(currentElement_current);
    // autocontinue
    auto currentElement_autocontinue = (msg + ctr)->autocontinue;
    outArray[ctr]["Autocontinue"] = factory.createScalar(currentElement_autocontinue);
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
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["X"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["Y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["Z"] = factory.createScalar(currentElement_z);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandIntResponse_common : public MATLABROSMsgInterface<mavros_msgs::CommandInt::Response> {
  public:
    virtual ~mavros_msgs_msg_CommandIntResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandInt::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandInt::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandIntResponse_common::copy_from_struct(mavros_msgs::CommandInt::Response* msg, const matlab::data::Struct& arr,
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
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandIntResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandInt::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandIntResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandInt_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandInt_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandInt_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandInt::Request,mavros_msgs_msg_CommandIntRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandInt::Response,mavros_msgs_msg_CommandIntResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_CommandInt_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandInt::Request,mavros_msgs::CommandInt::Request::ConstPtr,mavros_msgs_msg_CommandIntRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandInt::Response,mavros_msgs::CommandInt::Response::ConstPtr,mavros_msgs_msg_CommandIntResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_CommandInt_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::CommandInt::Request,mavros_msgs::CommandInt::Response,mavros_msgs_msg_CommandIntRequest_common,mavros_msgs_msg_CommandIntResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_CommandInt_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::CommandInt,mavros_msgs::CommandInt::Request,mavros_msgs::CommandInt::Response,mavros_msgs_msg_CommandIntRequest_common,mavros_msgs_msg_CommandIntResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandIntRequest_common, MATLABROSMsgInterface<mavros_msgs::CommandInt::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandIntResponse_common, MATLABROSMsgInterface<mavros_msgs::CommandInt::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandInt_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
