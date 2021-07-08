// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandTriggerIntervalRequest
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
#include "mavros_msgs/CommandTriggerInterval.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandTriggerIntervalRequest_common : public MATLABROSMsgInterface<mavros_msgs::CommandTriggerInterval::Request> {
  public:
    virtual ~mavros_msgs_msg_CommandTriggerIntervalRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandTriggerInterval::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandTriggerInterval::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandTriggerIntervalRequest_common::copy_from_struct(mavros_msgs::CommandTriggerInterval::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //cycle_time
        const matlab::data::TypedArray<float> cycle_time_arr = arr["CycleTime"];
        msg->cycle_time = cycle_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CycleTime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CycleTime' is wrong type; expected a single.");
    }
    try {
        //integration_time
        const matlab::data::TypedArray<float> integration_time_arr = arr["IntegrationTime"];
        msg->integration_time = integration_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegrationTime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegrationTime' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandTriggerIntervalRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandTriggerInterval::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CycleTime","IntegrationTime"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandTriggerIntervalRequest");
    // cycle_time
    auto currentElement_cycle_time = (msg + ctr)->cycle_time;
    outArray[ctr]["CycleTime"] = factory.createScalar(currentElement_cycle_time);
    // integration_time
    auto currentElement_integration_time = (msg + ctr)->integration_time;
    outArray[ctr]["IntegrationTime"] = factory.createScalar(currentElement_integration_time);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandTriggerIntervalResponse_common : public MATLABROSMsgInterface<mavros_msgs::CommandTriggerInterval::Response> {
  public:
    virtual ~mavros_msgs_msg_CommandTriggerIntervalResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandTriggerInterval::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandTriggerInterval::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandTriggerIntervalResponse_common::copy_from_struct(mavros_msgs::CommandTriggerInterval::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T mavros_msgs_msg_CommandTriggerIntervalResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandTriggerInterval::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandTriggerIntervalResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["Result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandTriggerInterval_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandTriggerInterval_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandTriggerInterval_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandTriggerInterval::Request,mavros_msgs_msg_CommandTriggerIntervalRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandTriggerInterval::Response,mavros_msgs_msg_CommandTriggerIntervalResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_CommandTriggerInterval_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandTriggerInterval::Request,mavros_msgs::CommandTriggerInterval::Request::ConstPtr,mavros_msgs_msg_CommandTriggerIntervalRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandTriggerInterval::Response,mavros_msgs::CommandTriggerInterval::Response::ConstPtr,mavros_msgs_msg_CommandTriggerIntervalResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_CommandTriggerInterval_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::CommandTriggerInterval::Request,mavros_msgs::CommandTriggerInterval::Response,mavros_msgs_msg_CommandTriggerIntervalRequest_common,mavros_msgs_msg_CommandTriggerIntervalResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_CommandTriggerInterval_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::CommandTriggerInterval,mavros_msgs::CommandTriggerInterval::Request,mavros_msgs::CommandTriggerInterval::Response,mavros_msgs_msg_CommandTriggerIntervalRequest_common,mavros_msgs_msg_CommandTriggerIntervalResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandTriggerIntervalRequest_common, MATLABROSMsgInterface<mavros_msgs::CommandTriggerInterval::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandTriggerIntervalResponse_common, MATLABROSMsgInterface<mavros_msgs::CommandTriggerInterval::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandTriggerInterval_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
