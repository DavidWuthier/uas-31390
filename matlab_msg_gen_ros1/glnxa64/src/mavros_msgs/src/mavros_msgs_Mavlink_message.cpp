// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Mavlink
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
#include "mavros_msgs/Mavlink.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_Mavlink_common : public MATLABROSMsgInterface<mavros_msgs::Mavlink> {
  public:
    virtual ~mavros_msgs_msg_Mavlink_common(){}
    virtual void copy_from_struct(mavros_msgs::Mavlink* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::Mavlink* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_Mavlink_common::copy_from_struct(mavros_msgs::Mavlink* msg, const matlab::data::Struct& arr,
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
        //framing_status
        const matlab::data::TypedArray<uint8_t> framing_status_arr = arr["FramingStatus"];
        msg->framing_status = framing_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FramingStatus' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FramingStatus' is wrong type; expected a uint8.");
    }
    try {
        //magic
        const matlab::data::TypedArray<uint8_t> magic_arr = arr["Magic"];
        msg->magic = magic_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Magic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Magic' is wrong type; expected a uint8.");
    }
    try {
        //len
        const matlab::data::TypedArray<uint8_t> len_arr = arr["Len"];
        msg->len = len_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Len' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Len' is wrong type; expected a uint8.");
    }
    try {
        //incompat_flags
        const matlab::data::TypedArray<uint8_t> incompat_flags_arr = arr["IncompatFlags"];
        msg->incompat_flags = incompat_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IncompatFlags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IncompatFlags' is wrong type; expected a uint8.");
    }
    try {
        //compat_flags
        const matlab::data::TypedArray<uint8_t> compat_flags_arr = arr["CompatFlags"];
        msg->compat_flags = compat_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CompatFlags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CompatFlags' is wrong type; expected a uint8.");
    }
    try {
        //seq
        const matlab::data::TypedArray<uint8_t> seq_arr = arr["Seq"];
        msg->seq = seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Seq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Seq' is wrong type; expected a uint8.");
    }
    try {
        //sysid
        const matlab::data::TypedArray<uint8_t> sysid_arr = arr["Sysid"];
        msg->sysid = sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Sysid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Sysid' is wrong type; expected a uint8.");
    }
    try {
        //compid
        const matlab::data::TypedArray<uint8_t> compid_arr = arr["Compid"];
        msg->compid = compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Compid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Compid' is wrong type; expected a uint8.");
    }
    try {
        //msgid
        const matlab::data::TypedArray<uint32_t> msgid_arr = arr["Msgid"];
        msg->msgid = msgid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Msgid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Msgid' is wrong type; expected a uint32.");
    }
    try {
        //checksum
        const matlab::data::TypedArray<uint16_t> checksum_arr = arr["Checksum"];
        msg->checksum = checksum_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Checksum' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Checksum' is wrong type; expected a uint16.");
    }
    try {
        //payload64
        const matlab::data::TypedArray<uint64_t> payload64_arr = arr["Payload64"];
        size_t nelem = payload64_arr.getNumberOfElements();
        	msg->payload64.resize(nelem);
        	std::copy(payload64_arr.begin(), payload64_arr.begin()+nelem, msg->payload64.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Payload64' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Payload64' is wrong type; expected a uint64.");
    }
    try {
        //signature
        const matlab::data::TypedArray<uint8_t> signature_arr = arr["Signature"];
        size_t nelem = signature_arr.getNumberOfElements();
        	msg->signature.resize(nelem);
        	std::copy(signature_arr.begin(), signature_arr.begin()+nelem, msg->signature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Signature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Signature' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_Mavlink_common::get_arr(MDFactory_T& factory, const mavros_msgs::Mavlink* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FRAMINGOK","FRAMINGBADCRC","FRAMINGBADSIGNATURE","MAVLINKV10","MAVLINKV20","Header","FramingStatus","Magic","Len","IncompatFlags","CompatFlags","Seq","Sysid","Compid","Msgid","Checksum","Payload64","Signature"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/Mavlink");
    // FRAMING_OK
    auto currentElement_FRAMING_OK = (msg + ctr)->FRAMING_OK;
    outArray[ctr]["FRAMINGOK"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAMING_OK));
    // FRAMING_BAD_CRC
    auto currentElement_FRAMING_BAD_CRC = (msg + ctr)->FRAMING_BAD_CRC;
    outArray[ctr]["FRAMINGBADCRC"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAMING_BAD_CRC));
    // FRAMING_BAD_SIGNATURE
    auto currentElement_FRAMING_BAD_SIGNATURE = (msg + ctr)->FRAMING_BAD_SIGNATURE;
    outArray[ctr]["FRAMINGBADSIGNATURE"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAMING_BAD_SIGNATURE));
    // MAVLINK_V10
    auto currentElement_MAVLINK_V10 = (msg + ctr)->MAVLINK_V10;
    outArray[ctr]["MAVLINKV10"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAVLINK_V10));
    // MAVLINK_V20
    auto currentElement_MAVLINK_V20 = (msg + ctr)->MAVLINK_V20;
    outArray[ctr]["MAVLINKV20"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAVLINK_V20));
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // framing_status
    auto currentElement_framing_status = (msg + ctr)->framing_status;
    outArray[ctr]["FramingStatus"] = factory.createScalar(currentElement_framing_status);
    // magic
    auto currentElement_magic = (msg + ctr)->magic;
    outArray[ctr]["Magic"] = factory.createScalar(currentElement_magic);
    // len
    auto currentElement_len = (msg + ctr)->len;
    outArray[ctr]["Len"] = factory.createScalar(currentElement_len);
    // incompat_flags
    auto currentElement_incompat_flags = (msg + ctr)->incompat_flags;
    outArray[ctr]["IncompatFlags"] = factory.createScalar(currentElement_incompat_flags);
    // compat_flags
    auto currentElement_compat_flags = (msg + ctr)->compat_flags;
    outArray[ctr]["CompatFlags"] = factory.createScalar(currentElement_compat_flags);
    // seq
    auto currentElement_seq = (msg + ctr)->seq;
    outArray[ctr]["Seq"] = factory.createScalar(currentElement_seq);
    // sysid
    auto currentElement_sysid = (msg + ctr)->sysid;
    outArray[ctr]["Sysid"] = factory.createScalar(currentElement_sysid);
    // compid
    auto currentElement_compid = (msg + ctr)->compid;
    outArray[ctr]["Compid"] = factory.createScalar(currentElement_compid);
    // msgid
    auto currentElement_msgid = (msg + ctr)->msgid;
    outArray[ctr]["Msgid"] = factory.createScalar(currentElement_msgid);
    // checksum
    auto currentElement_checksum = (msg + ctr)->checksum;
    outArray[ctr]["Checksum"] = factory.createScalar(currentElement_checksum);
    // payload64
    auto currentElement_payload64 = (msg + ctr)->payload64;
    outArray[ctr]["Payload64"] = factory.createArray<mavros_msgs::Mavlink::_payload64_type::const_iterator, uint64_t>({currentElement_payload64.size(),1}, currentElement_payload64.begin(), currentElement_payload64.end());
    // signature
    auto currentElement_signature = (msg + ctr)->signature;
    outArray[ctr]["Signature"] = factory.createArray<mavros_msgs::Mavlink::_signature_type::const_iterator, uint8_t>({currentElement_signature.size(),1}, currentElement_signature.begin(), currentElement_signature.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_Mavlink_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_Mavlink_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_Mavlink_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::Mavlink,mavros_msgs_msg_Mavlink_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_Mavlink_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::Mavlink,mavros_msgs::Mavlink::ConstPtr,mavros_msgs_msg_Mavlink_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_Mavlink_common, MATLABROSMsgInterface<mavros_msgs::Mavlink>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_Mavlink_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1