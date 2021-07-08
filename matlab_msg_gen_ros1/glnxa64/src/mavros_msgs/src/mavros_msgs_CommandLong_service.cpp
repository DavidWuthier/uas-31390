// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandLongRequest
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
#include "mavros_msgs/CommandLong.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandLongRequest_common : public MATLABROSMsgInterface<mavros_msgs::CommandLong::Request> {
  public:
    virtual ~mavros_msgs_msg_CommandLongRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandLong::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandLong::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandLongRequest_common::copy_from_struct(mavros_msgs::CommandLong::Request* msg, const matlab::data::Struct& arr,
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
        //command
        const matlab::data::TypedArray<uint16_t> command_arr = arr["Command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Command' is wrong type; expected a uint16.");
    }
    try {
        //confirmation
        const matlab::data::TypedArray<uint8_t> confirmation_arr = arr["Confirmation"];
        msg->confirmation = confirmation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Confirmation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Confirmation' is wrong type; expected a uint8.");
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
        //param5
        const matlab::data::TypedArray<float> param5_arr = arr["Param5"];
        msg->param5 = param5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param5' is wrong type; expected a single.");
    }
    try {
        //param6
        const matlab::data::TypedArray<float> param6_arr = arr["Param6"];
        msg->param6 = param6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param6' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param6' is wrong type; expected a single.");
    }
    try {
        //param7
        const matlab::data::TypedArray<float> param7_arr = arr["Param7"];
        msg->param7 = param7_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Param7' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Param7' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandLongRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandLong::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Broadcast","Command","Confirmation","Param1","Param2","Param3","Param4","Param5","Param6","Param7"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandLongRequest");
    // broadcast
    auto currentElement_broadcast = (msg + ctr)->broadcast;
    outArray[ctr]["Broadcast"] = factory.createScalar(static_cast<bool>(currentElement_broadcast));
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["Command"] = factory.createScalar(currentElement_command);
    // confirmation
    auto currentElement_confirmation = (msg + ctr)->confirmation;
    outArray[ctr]["Confirmation"] = factory.createScalar(currentElement_confirmation);
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
    // param5
    auto currentElement_param5 = (msg + ctr)->param5;
    outArray[ctr]["Param5"] = factory.createScalar(currentElement_param5);
    // param6
    auto currentElement_param6 = (msg + ctr)->param6;
    outArray[ctr]["Param6"] = factory.createScalar(currentElement_param6);
    // param7
    auto currentElement_param7 = (msg + ctr)->param7;
    outArray[ctr]["Param7"] = factory.createScalar(currentElement_param7);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandLongResponse_common : public MATLABROSMsgInterface<mavros_msgs::CommandLong::Response> {
  public:
    virtual ~mavros_msgs_msg_CommandLongResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandLong::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandLong::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandLongResponse_common::copy_from_struct(mavros_msgs::CommandLong::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T mavros_msgs_msg_CommandLongResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandLong::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandLongResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["Result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandLong_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandLong_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandLong_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandLong::Request,mavros_msgs_msg_CommandLongRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandLong::Response,mavros_msgs_msg_CommandLongResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_CommandLong_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandLong::Request,mavros_msgs::CommandLong::Request::ConstPtr,mavros_msgs_msg_CommandLongRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandLong::Response,mavros_msgs::CommandLong::Response::ConstPtr,mavros_msgs_msg_CommandLongResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_CommandLong_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::CommandLong::Request,mavros_msgs::CommandLong::Response,mavros_msgs_msg_CommandLongRequest_common,mavros_msgs_msg_CommandLongResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_CommandLong_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::CommandLong,mavros_msgs::CommandLong::Request,mavros_msgs::CommandLong::Response,mavros_msgs_msg_CommandLongRequest_common,mavros_msgs_msg_CommandLongResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandLongRequest_common, MATLABROSMsgInterface<mavros_msgs::CommandLong::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandLongResponse_common, MATLABROSMsgInterface<mavros_msgs::CommandLong::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandLong_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
