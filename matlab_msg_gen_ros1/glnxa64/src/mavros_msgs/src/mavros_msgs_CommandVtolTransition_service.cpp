// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandVtolTransitionRequest
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
#include "mavros_msgs/CommandVtolTransition.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandVtolTransitionRequest_common : public MATLABROSMsgInterface<mavros_msgs::CommandVtolTransition::Request> {
  public:
    virtual ~mavros_msgs_msg_CommandVtolTransitionRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandVtolTransition::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandVtolTransition::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandVtolTransitionRequest_common::copy_from_struct(mavros_msgs::CommandVtolTransition::Request* msg, const matlab::data::Struct& arr,
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
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandVtolTransitionRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandVtolTransition::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","STATEMC","STATEFW","State"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandVtolTransitionRequest");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // STATE_MC
    auto currentElement_STATE_MC = (msg + ctr)->STATE_MC;
    outArray[ctr]["STATEMC"] = factory.createScalar(static_cast<uint8_t>(currentElement_STATE_MC));
    // STATE_FW
    auto currentElement_STATE_FW = (msg + ctr)->STATE_FW;
    outArray[ctr]["STATEFW"] = factory.createScalar(static_cast<uint8_t>(currentElement_STATE_FW));
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["State"] = factory.createScalar(currentElement_state);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandVtolTransitionResponse_common : public MATLABROSMsgInterface<mavros_msgs::CommandVtolTransition::Response> {
  public:
    virtual ~mavros_msgs_msg_CommandVtolTransitionResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandVtolTransition::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandVtolTransition::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandVtolTransitionResponse_common::copy_from_struct(mavros_msgs::CommandVtolTransition::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T mavros_msgs_msg_CommandVtolTransitionResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandVtolTransition::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandVtolTransitionResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["Result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandVtolTransition_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandVtolTransition_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandVtolTransition_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandVtolTransition::Request,mavros_msgs_msg_CommandVtolTransitionRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandVtolTransition::Response,mavros_msgs_msg_CommandVtolTransitionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_CommandVtolTransition_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandVtolTransition::Request,mavros_msgs::CommandVtolTransition::Request::ConstPtr,mavros_msgs_msg_CommandVtolTransitionRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandVtolTransition::Response,mavros_msgs::CommandVtolTransition::Response::ConstPtr,mavros_msgs_msg_CommandVtolTransitionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_CommandVtolTransition_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::CommandVtolTransition::Request,mavros_msgs::CommandVtolTransition::Response,mavros_msgs_msg_CommandVtolTransitionRequest_common,mavros_msgs_msg_CommandVtolTransitionResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_CommandVtolTransition_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::CommandVtolTransition,mavros_msgs::CommandVtolTransition::Request,mavros_msgs::CommandVtolTransition::Response,mavros_msgs_msg_CommandVtolTransitionRequest_common,mavros_msgs_msg_CommandVtolTransitionResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandVtolTransitionRequest_common, MATLABROSMsgInterface<mavros_msgs::CommandVtolTransition::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandVtolTransitionResponse_common, MATLABROSMsgInterface<mavros_msgs::CommandVtolTransition::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandVtolTransition_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
