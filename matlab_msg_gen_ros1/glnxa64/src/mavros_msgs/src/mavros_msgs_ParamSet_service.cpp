// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ParamSetRequest
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
#include "mavros_msgs/ParamSet.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_ParamValue_common, mavros_msgs::ParamValue)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ParamSetRequest_common : public MATLABROSMsgInterface<mavros_msgs::ParamSet::Request> {
  public:
    virtual ~mavros_msgs_msg_ParamSetRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::ParamSet::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ParamSet::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ParamSetRequest_common::copy_from_struct(mavros_msgs::ParamSet::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //param_id
        const matlab::data::CharArray param_id_arr = arr["ParamId"];
        msg->param_id = param_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ParamId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ParamId' is wrong type; expected a string.");
    }
    try {
        //value
        const matlab::data::StructArray value_arr = arr["Value"];
        static mavros_msgs_msg_ParamValue_common obj_value;
        obj_value.copy_from_struct(&msg->value,value_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Value' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ParamSetRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::ParamSet::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","ParamId","Value"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ParamSetRequest");
    // param_id
    auto currentElement_param_id = (msg + ctr)->param_id;
    outArray[ctr]["ParamId"] = factory.createCharArray(currentElement_param_id);
    // value
    auto currentElement_value = (msg + ctr)->value;
    static mavros_msgs_msg_ParamValue_common obj_value;
    outArray[ctr]["Value"] = obj_value.get_arr(factory, &currentElement_value, loader);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ParamSetResponse_common : public MATLABROSMsgInterface<mavros_msgs::ParamSet::Response> {
  public:
    virtual ~mavros_msgs_msg_ParamSetResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::ParamSet::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ParamSet::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ParamSetResponse_common::copy_from_struct(mavros_msgs::ParamSet::Response* msg, const matlab::data::Struct& arr,
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
        //value
        const matlab::data::StructArray value_arr = arr["Value"];
        static mavros_msgs_msg_ParamValue_common obj_value;
        obj_value.copy_from_struct(&msg->value,value_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Value' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ParamSetResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::ParamSet::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Value"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ParamSetResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // value
    auto currentElement_value = (msg + ctr)->value;
    static mavros_msgs_msg_ParamValue_common obj_value;
    outArray[ctr]["Value"] = obj_value.get_arr(factory, &currentElement_value, loader);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ParamSet_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ParamSet_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ParamSet_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::ParamSet::Request,mavros_msgs_msg_ParamSetRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::ParamSet::Response,mavros_msgs_msg_ParamSetResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_ParamSet_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::ParamSet::Request,mavros_msgs::ParamSet::Request::ConstPtr,mavros_msgs_msg_ParamSetRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::ParamSet::Response,mavros_msgs::ParamSet::Response::ConstPtr,mavros_msgs_msg_ParamSetResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_ParamSet_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::ParamSet::Request,mavros_msgs::ParamSet::Response,mavros_msgs_msg_ParamSetRequest_common,mavros_msgs_msg_ParamSetResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_ParamSet_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::ParamSet,mavros_msgs::ParamSet::Request,mavros_msgs::ParamSet::Response,mavros_msgs_msg_ParamSetRequest_common,mavros_msgs_msg_ParamSetResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ParamSetRequest_common, MATLABROSMsgInterface<mavros_msgs::ParamSet::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ParamSetResponse_common, MATLABROSMsgInterface<mavros_msgs::ParamSet::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ParamSet_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
