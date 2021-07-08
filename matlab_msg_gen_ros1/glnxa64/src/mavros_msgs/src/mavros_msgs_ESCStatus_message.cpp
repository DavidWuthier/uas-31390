// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ESCStatus
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
#include "mavros_msgs/ESCStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_ESCStatusItem_common, mavros_msgs::ESCStatusItem)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ESCStatus_common : public MATLABROSMsgInterface<mavros_msgs::ESCStatus> {
  public:
    virtual ~mavros_msgs_msg_ESCStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::ESCStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ESCStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ESCStatus_common::copy_from_struct(mavros_msgs::ESCStatus* msg, const matlab::data::Struct& arr,
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
        //esc_status
        const matlab::data::StructArray esc_status_arr = arr["EscStatus"];
        for (auto _esc_statusarr : esc_status_arr) {
        	mavros_msgs::ESCStatusItem _val;
        static mavros_msgs_msg_ESCStatusItem_common obj_esc_status;
        	obj_esc_status.copy_from_struct(&_val,_esc_statusarr,loader);
        	msg->esc_status.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EscStatus' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EscStatus' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ESCStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::ESCStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","EscStatus"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ESCStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // esc_status
    auto currentElement_esc_status = (msg + ctr)->esc_status;
    static mavros_msgs_msg_ESCStatusItem_common obj_esc_status;
    	outArray[ctr]["EscStatus"] = obj_esc_status.get_arr(factory,&currentElement_esc_status[0],loader,currentElement_esc_status.size());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ESCStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ESCStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ESCStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ESCStatus,mavros_msgs_msg_ESCStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ESCStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ESCStatus,mavros_msgs::ESCStatus::ConstPtr,mavros_msgs_msg_ESCStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ESCStatus_common, MATLABROSMsgInterface<mavros_msgs::ESCStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ESCStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1