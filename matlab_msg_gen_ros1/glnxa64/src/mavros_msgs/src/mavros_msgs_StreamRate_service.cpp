// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/StreamRateRequest
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
#include "mavros_msgs/StreamRate.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_StreamRateRequest_common : public MATLABROSMsgInterface<mavros_msgs::StreamRate::Request> {
  public:
    virtual ~mavros_msgs_msg_StreamRateRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::StreamRate::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::StreamRate::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_StreamRateRequest_common::copy_from_struct(mavros_msgs::StreamRate::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //stream_id
        const matlab::data::TypedArray<uint8_t> stream_id_arr = arr["StreamId"];
        msg->stream_id = stream_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StreamId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StreamId' is wrong type; expected a uint8.");
    }
    try {
        //message_rate
        const matlab::data::TypedArray<uint16_t> message_rate_arr = arr["MessageRate"];
        msg->message_rate = message_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MessageRate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MessageRate' is wrong type; expected a uint16.");
    }
    try {
        //on_off
        const matlab::data::TypedArray<bool> on_off_arr = arr["OnOff"];
        msg->on_off = on_off_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'OnOff' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'OnOff' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_StreamRateRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::StreamRate::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","STREAMALL","STREAMRAWSENSORS","STREAMEXTENDEDSTATUS","STREAMRCCHANNELS","STREAMRAWCONTROLLER","STREAMPOSITION","STREAMEXTRA1","STREAMEXTRA2","STREAMEXTRA3","StreamId","MessageRate","OnOff"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/StreamRateRequest");
    // STREAM_ALL
    auto currentElement_STREAM_ALL = (msg + ctr)->STREAM_ALL;
    outArray[ctr]["STREAMALL"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_ALL));
    // STREAM_RAW_SENSORS
    auto currentElement_STREAM_RAW_SENSORS = (msg + ctr)->STREAM_RAW_SENSORS;
    outArray[ctr]["STREAMRAWSENSORS"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_RAW_SENSORS));
    // STREAM_EXTENDED_STATUS
    auto currentElement_STREAM_EXTENDED_STATUS = (msg + ctr)->STREAM_EXTENDED_STATUS;
    outArray[ctr]["STREAMEXTENDEDSTATUS"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_EXTENDED_STATUS));
    // STREAM_RC_CHANNELS
    auto currentElement_STREAM_RC_CHANNELS = (msg + ctr)->STREAM_RC_CHANNELS;
    outArray[ctr]["STREAMRCCHANNELS"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_RC_CHANNELS));
    // STREAM_RAW_CONTROLLER
    auto currentElement_STREAM_RAW_CONTROLLER = (msg + ctr)->STREAM_RAW_CONTROLLER;
    outArray[ctr]["STREAMRAWCONTROLLER"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_RAW_CONTROLLER));
    // STREAM_POSITION
    auto currentElement_STREAM_POSITION = (msg + ctr)->STREAM_POSITION;
    outArray[ctr]["STREAMPOSITION"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_POSITION));
    // STREAM_EXTRA1
    auto currentElement_STREAM_EXTRA1 = (msg + ctr)->STREAM_EXTRA1;
    outArray[ctr]["STREAMEXTRA1"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_EXTRA1));
    // STREAM_EXTRA2
    auto currentElement_STREAM_EXTRA2 = (msg + ctr)->STREAM_EXTRA2;
    outArray[ctr]["STREAMEXTRA2"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_EXTRA2));
    // STREAM_EXTRA3
    auto currentElement_STREAM_EXTRA3 = (msg + ctr)->STREAM_EXTRA3;
    outArray[ctr]["STREAMEXTRA3"] = factory.createScalar(static_cast<uint8_t>(currentElement_STREAM_EXTRA3));
    // stream_id
    auto currentElement_stream_id = (msg + ctr)->stream_id;
    outArray[ctr]["StreamId"] = factory.createScalar(currentElement_stream_id);
    // message_rate
    auto currentElement_message_rate = (msg + ctr)->message_rate;
    outArray[ctr]["MessageRate"] = factory.createScalar(currentElement_message_rate);
    // on_off
    auto currentElement_on_off = (msg + ctr)->on_off;
    outArray[ctr]["OnOff"] = factory.createScalar(static_cast<bool>(currentElement_on_off));
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_StreamRateResponse_common : public MATLABROSMsgInterface<mavros_msgs::StreamRate::Response> {
  public:
    virtual ~mavros_msgs_msg_StreamRateResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::StreamRate::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::StreamRate::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_StreamRateResponse_common::copy_from_struct(mavros_msgs::StreamRate::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_StreamRateResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::StreamRate::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/StreamRateResponse");
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_StreamRate_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_StreamRate_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_StreamRate_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::StreamRate::Request,mavros_msgs_msg_StreamRateRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::StreamRate::Response,mavros_msgs_msg_StreamRateResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_StreamRate_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::StreamRate::Request,mavros_msgs::StreamRate::Request::ConstPtr,mavros_msgs_msg_StreamRateRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::StreamRate::Response,mavros_msgs::StreamRate::Response::ConstPtr,mavros_msgs_msg_StreamRateResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_StreamRate_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::StreamRate::Request,mavros_msgs::StreamRate::Response,mavros_msgs_msg_StreamRateRequest_common,mavros_msgs_msg_StreamRateResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_StreamRate_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::StreamRate,mavros_msgs::StreamRate::Request,mavros_msgs::StreamRate::Response,mavros_msgs_msg_StreamRateRequest_common,mavros_msgs_msg_StreamRateResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_StreamRateRequest_common, MATLABROSMsgInterface<mavros_msgs::StreamRate::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_StreamRateResponse_common, MATLABROSMsgInterface<mavros_msgs::StreamRate::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_StreamRate_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
