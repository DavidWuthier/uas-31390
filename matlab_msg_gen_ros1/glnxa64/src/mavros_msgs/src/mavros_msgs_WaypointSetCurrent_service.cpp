// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/WaypointSetCurrentRequest
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
#include "mavros_msgs/WaypointSetCurrent.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WaypointSetCurrentRequest_common : public MATLABROSMsgInterface<mavros_msgs::WaypointSetCurrent::Request> {
  public:
    virtual ~mavros_msgs_msg_WaypointSetCurrentRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::WaypointSetCurrent::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WaypointSetCurrent::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WaypointSetCurrentRequest_common::copy_from_struct(mavros_msgs::WaypointSetCurrent::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //wp_seq
        const matlab::data::TypedArray<uint16_t> wp_seq_arr = arr["WpSeq"];
        msg->wp_seq = wp_seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WpSeq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WpSeq' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_WaypointSetCurrentRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::WaypointSetCurrent::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","WpSeq"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WaypointSetCurrentRequest");
    // wp_seq
    auto currentElement_wp_seq = (msg + ctr)->wp_seq;
    outArray[ctr]["WpSeq"] = factory.createScalar(currentElement_wp_seq);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WaypointSetCurrentResponse_common : public MATLABROSMsgInterface<mavros_msgs::WaypointSetCurrent::Response> {
  public:
    virtual ~mavros_msgs_msg_WaypointSetCurrentResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::WaypointSetCurrent::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WaypointSetCurrent::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WaypointSetCurrentResponse_common::copy_from_struct(mavros_msgs::WaypointSetCurrent::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T mavros_msgs_msg_WaypointSetCurrentResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::WaypointSetCurrent::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WaypointSetCurrentResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_WaypointSetCurrent_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_WaypointSetCurrent_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_WaypointSetCurrent_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::WaypointSetCurrent::Request,mavros_msgs_msg_WaypointSetCurrentRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::WaypointSetCurrent::Response,mavros_msgs_msg_WaypointSetCurrentResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_WaypointSetCurrent_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::WaypointSetCurrent::Request,mavros_msgs::WaypointSetCurrent::Request::ConstPtr,mavros_msgs_msg_WaypointSetCurrentRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::WaypointSetCurrent::Response,mavros_msgs::WaypointSetCurrent::Response::ConstPtr,mavros_msgs_msg_WaypointSetCurrentResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_WaypointSetCurrent_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::WaypointSetCurrent::Request,mavros_msgs::WaypointSetCurrent::Response,mavros_msgs_msg_WaypointSetCurrentRequest_common,mavros_msgs_msg_WaypointSetCurrentResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_WaypointSetCurrent_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::WaypointSetCurrent,mavros_msgs::WaypointSetCurrent::Request,mavros_msgs::WaypointSetCurrent::Response,mavros_msgs_msg_WaypointSetCurrentRequest_common,mavros_msgs_msg_WaypointSetCurrentResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WaypointSetCurrentRequest_common, MATLABROSMsgInterface<mavros_msgs::WaypointSetCurrent::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WaypointSetCurrentResponse_common, MATLABROSMsgInterface<mavros_msgs::WaypointSetCurrent::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_WaypointSetCurrent_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
