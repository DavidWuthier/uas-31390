// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/TimesyncStatus
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
#include "mavros_msgs/TimesyncStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_TimesyncStatus_common : public MATLABROSMsgInterface<mavros_msgs::TimesyncStatus> {
  public:
    virtual ~mavros_msgs_msg_TimesyncStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::TimesyncStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::TimesyncStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_TimesyncStatus_common::copy_from_struct(mavros_msgs::TimesyncStatus* msg, const matlab::data::Struct& arr,
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
        //remote_timestamp_ns
        const matlab::data::TypedArray<uint64_t> remote_timestamp_ns_arr = arr["RemoteTimestampNs"];
        msg->remote_timestamp_ns = remote_timestamp_ns_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RemoteTimestampNs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RemoteTimestampNs' is wrong type; expected a uint64.");
    }
    try {
        //observed_offset_ns
        const matlab::data::TypedArray<int64_t> observed_offset_ns_arr = arr["ObservedOffsetNs"];
        msg->observed_offset_ns = observed_offset_ns_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ObservedOffsetNs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ObservedOffsetNs' is wrong type; expected a int64.");
    }
    try {
        //estimated_offset_ns
        const matlab::data::TypedArray<int64_t> estimated_offset_ns_arr = arr["EstimatedOffsetNs"];
        msg->estimated_offset_ns = estimated_offset_ns_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EstimatedOffsetNs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EstimatedOffsetNs' is wrong type; expected a int64.");
    }
    try {
        //round_trip_time_ms
        const matlab::data::TypedArray<float> round_trip_time_ms_arr = arr["RoundTripTimeMs"];
        msg->round_trip_time_ms = round_trip_time_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RoundTripTimeMs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RoundTripTimeMs' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_TimesyncStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::TimesyncStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","RemoteTimestampNs","ObservedOffsetNs","EstimatedOffsetNs","RoundTripTimeMs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/TimesyncStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // remote_timestamp_ns
    auto currentElement_remote_timestamp_ns = (msg + ctr)->remote_timestamp_ns;
    outArray[ctr]["RemoteTimestampNs"] = factory.createScalar(currentElement_remote_timestamp_ns);
    // observed_offset_ns
    auto currentElement_observed_offset_ns = (msg + ctr)->observed_offset_ns;
    outArray[ctr]["ObservedOffsetNs"] = factory.createScalar(currentElement_observed_offset_ns);
    // estimated_offset_ns
    auto currentElement_estimated_offset_ns = (msg + ctr)->estimated_offset_ns;
    outArray[ctr]["EstimatedOffsetNs"] = factory.createScalar(currentElement_estimated_offset_ns);
    // round_trip_time_ms
    auto currentElement_round_trip_time_ms = (msg + ctr)->round_trip_time_ms;
    outArray[ctr]["RoundTripTimeMs"] = factory.createScalar(currentElement_round_trip_time_ms);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_TimesyncStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_TimesyncStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_TimesyncStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::TimesyncStatus,mavros_msgs_msg_TimesyncStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_TimesyncStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::TimesyncStatus,mavros_msgs::TimesyncStatus::ConstPtr,mavros_msgs_msg_TimesyncStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_TimesyncStatus_common, MATLABROSMsgInterface<mavros_msgs::TimesyncStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_TimesyncStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1