// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ESCInfo
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
#include "mavros_msgs/ESCInfo.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_ESCInfoItem_common, mavros_msgs::ESCInfoItem)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ESCInfo_common : public MATLABROSMsgInterface<mavros_msgs::ESCInfo> {
  public:
    virtual ~mavros_msgs_msg_ESCInfo_common(){}
    virtual void copy_from_struct(mavros_msgs::ESCInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ESCInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ESCInfo_common::copy_from_struct(mavros_msgs::ESCInfo* msg, const matlab::data::Struct& arr,
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
        //counter
        const matlab::data::TypedArray<uint16_t> counter_arr = arr["Counter"];
        msg->counter = counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Counter' is wrong type; expected a uint16.");
    }
    try {
        //count
        const matlab::data::TypedArray<uint8_t> count_arr = arr["Count"];
        msg->count = count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Count' is wrong type; expected a uint8.");
    }
    try {
        //connection_type
        const matlab::data::TypedArray<uint8_t> connection_type_arr = arr["ConnectionType"];
        msg->connection_type = connection_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ConnectionType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ConnectionType' is wrong type; expected a uint8.");
    }
    try {
        //info
        const matlab::data::TypedArray<uint8_t> info_arr = arr["Info"];
        msg->info = info_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Info' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Info' is wrong type; expected a uint8.");
    }
    try {
        //esc_info
        const matlab::data::StructArray esc_info_arr = arr["EscInfo"];
        for (auto _esc_infoarr : esc_info_arr) {
        	mavros_msgs::ESCInfoItem _val;
        static mavros_msgs_msg_ESCInfoItem_common obj_esc_info;
        	obj_esc_info.copy_from_struct(&_val,_esc_infoarr,loader);
        	msg->esc_info.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EscInfo' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EscInfo' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ESCInfo_common::get_arr(MDFactory_T& factory, const mavros_msgs::ESCInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Counter","Count","ConnectionType","Info","EscInfo"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ESCInfo");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // counter
    auto currentElement_counter = (msg + ctr)->counter;
    outArray[ctr]["Counter"] = factory.createScalar(currentElement_counter);
    // count
    auto currentElement_count = (msg + ctr)->count;
    outArray[ctr]["Count"] = factory.createScalar(currentElement_count);
    // connection_type
    auto currentElement_connection_type = (msg + ctr)->connection_type;
    outArray[ctr]["ConnectionType"] = factory.createScalar(currentElement_connection_type);
    // info
    auto currentElement_info = (msg + ctr)->info;
    outArray[ctr]["Info"] = factory.createScalar(currentElement_info);
    // esc_info
    auto currentElement_esc_info = (msg + ctr)->esc_info;
    static mavros_msgs_msg_ESCInfoItem_common obj_esc_info;
    	outArray[ctr]["EscInfo"] = obj_esc_info.get_arr(factory,&currentElement_esc_info[0],loader,currentElement_esc_info.size());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ESCInfo_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ESCInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ESCInfo_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ESCInfo,mavros_msgs_msg_ESCInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ESCInfo_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ESCInfo,mavros_msgs::ESCInfo::ConstPtr,mavros_msgs_msg_ESCInfo_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ESCInfo_common, MATLABROSMsgInterface<mavros_msgs::ESCInfo>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ESCInfo_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1