// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/LogEntry
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
#include "mavros_msgs/LogEntry.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_LogEntry_common : public MATLABROSMsgInterface<mavros_msgs::LogEntry> {
  public:
    virtual ~mavros_msgs_msg_LogEntry_common(){}
    virtual void copy_from_struct(mavros_msgs::LogEntry* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::LogEntry* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_LogEntry_common::copy_from_struct(mavros_msgs::LogEntry* msg, const matlab::data::Struct& arr,
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
        //id
        const matlab::data::TypedArray<uint16_t> id_arr = arr["Id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Id' is wrong type; expected a uint16.");
    }
    try {
        //num_logs
        const matlab::data::TypedArray<uint16_t> num_logs_arr = arr["NumLogs"];
        msg->num_logs = num_logs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'NumLogs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'NumLogs' is wrong type; expected a uint16.");
    }
    try {
        //last_log_num
        const matlab::data::TypedArray<uint16_t> last_log_num_arr = arr["LastLogNum"];
        msg->last_log_num = last_log_num_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LastLogNum' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LastLogNum' is wrong type; expected a uint16.");
    }
    try {
        //time_utc
        const matlab::data::StructArray time_utc_arr = arr["TimeUtc"];
        static auto msgClassPtr_time_utc = loader->createInstance<MATLABROSMsgInterface<ros::Time>>("ros_msg_Time_common");
        msgClassPtr_time_utc->copy_from_struct(&msg->time_utc,time_utc_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TimeUtc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TimeUtc' is wrong type; expected a struct.");
    }
    try {
        //size
        const matlab::data::TypedArray<uint32_t> size_arr = arr["Size"];
        msg->size = size_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Size' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Size' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_LogEntry_common::get_arr(MDFactory_T& factory, const mavros_msgs::LogEntry* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Id","NumLogs","LastLogNum","TimeUtc","Size"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/LogEntry");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["Id"] = factory.createScalar(currentElement_id);
    // num_logs
    auto currentElement_num_logs = (msg + ctr)->num_logs;
    outArray[ctr]["NumLogs"] = factory.createScalar(currentElement_num_logs);
    // last_log_num
    auto currentElement_last_log_num = (msg + ctr)->last_log_num;
    outArray[ctr]["LastLogNum"] = factory.createScalar(currentElement_last_log_num);
    // time_utc
    auto currentElement_time_utc = (msg + ctr)->time_utc;
    static auto msgClassPtr_time_utc = loader->createInstance<MATLABROSMsgInterface<ros::Time>>("ros_msg_Time_common");
    outArray[ctr]["TimeUtc"] = msgClassPtr_time_utc->get_arr(factory, &currentElement_time_utc, loader);
    // size
    auto currentElement_size = (msg + ctr)->size;
    outArray[ctr]["Size"] = factory.createScalar(currentElement_size);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_LogEntry_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_LogEntry_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_LogEntry_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::LogEntry,mavros_msgs_msg_LogEntry_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_LogEntry_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::LogEntry,mavros_msgs::LogEntry::ConstPtr,mavros_msgs_msg_LogEntry_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_LogEntry_common, MATLABROSMsgInterface<mavros_msgs::LogEntry>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_LogEntry_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1