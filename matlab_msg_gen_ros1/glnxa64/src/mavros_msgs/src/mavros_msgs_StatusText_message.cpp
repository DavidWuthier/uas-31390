// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/StatusText
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
#include "mavros_msgs/StatusText.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_StatusText_common : public MATLABROSMsgInterface<mavros_msgs::StatusText> {
  public:
    virtual ~mavros_msgs_msg_StatusText_common(){}
    virtual void copy_from_struct(mavros_msgs::StatusText* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::StatusText* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_StatusText_common::copy_from_struct(mavros_msgs::StatusText* msg, const matlab::data::Struct& arr,
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
        //severity
        const matlab::data::TypedArray<uint8_t> severity_arr = arr["Severity"];
        msg->severity = severity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Severity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Severity' is wrong type; expected a uint8.");
    }
    try {
        //text
        const matlab::data::CharArray text_arr = arr["Text"];
        msg->text = text_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Text' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Text' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_StatusText_common::get_arr(MDFactory_T& factory, const mavros_msgs::StatusText* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","EMERGENCY","ALERT","CRITICAL","ERROR","WARNING","NOTICE","INFO","DEBUG","Header","Severity","Text"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/StatusText");
    // EMERGENCY
    auto currentElement_EMERGENCY = (msg + ctr)->EMERGENCY;
    outArray[ctr]["EMERGENCY"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMERGENCY));
    // ALERT
    auto currentElement_ALERT = (msg + ctr)->ALERT;
    outArray[ctr]["ALERT"] = factory.createScalar(static_cast<uint8_t>(currentElement_ALERT));
    // CRITICAL
    auto currentElement_CRITICAL = (msg + ctr)->CRITICAL;
    outArray[ctr]["CRITICAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_CRITICAL));
    // ERROR
    auto currentElement_ERROR = (msg + ctr)->ERROR;
    outArray[ctr]["ERROR"] = factory.createScalar(static_cast<uint8_t>(currentElement_ERROR));
    // WARNING
    auto currentElement_WARNING = (msg + ctr)->WARNING;
    outArray[ctr]["WARNING"] = factory.createScalar(static_cast<uint8_t>(currentElement_WARNING));
    // NOTICE
    auto currentElement_NOTICE = (msg + ctr)->NOTICE;
    outArray[ctr]["NOTICE"] = factory.createScalar(static_cast<uint8_t>(currentElement_NOTICE));
    // INFO
    auto currentElement_INFO = (msg + ctr)->INFO;
    outArray[ctr]["INFO"] = factory.createScalar(static_cast<uint8_t>(currentElement_INFO));
    // DEBUG
    auto currentElement_DEBUG = (msg + ctr)->DEBUG;
    outArray[ctr]["DEBUG"] = factory.createScalar(static_cast<uint8_t>(currentElement_DEBUG));
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // severity
    auto currentElement_severity = (msg + ctr)->severity;
    outArray[ctr]["Severity"] = factory.createScalar(currentElement_severity);
    // text
    auto currentElement_text = (msg + ctr)->text;
    outArray[ctr]["Text"] = factory.createCharArray(currentElement_text);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_StatusText_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_StatusText_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_StatusText_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::StatusText,mavros_msgs_msg_StatusText_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_StatusText_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::StatusText,mavros_msgs::StatusText::ConstPtr,mavros_msgs_msg_StatusText_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_StatusText_common, MATLABROSMsgInterface<mavros_msgs::StatusText>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_StatusText_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1