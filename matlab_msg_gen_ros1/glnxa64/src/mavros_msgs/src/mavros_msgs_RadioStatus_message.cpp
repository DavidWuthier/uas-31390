// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/RadioStatus
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
#include "mavros_msgs/RadioStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_RadioStatus_common : public MATLABROSMsgInterface<mavros_msgs::RadioStatus> {
  public:
    virtual ~mavros_msgs_msg_RadioStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::RadioStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::RadioStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_RadioStatus_common::copy_from_struct(mavros_msgs::RadioStatus* msg, const matlab::data::Struct& arr,
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
        //rssi
        const matlab::data::TypedArray<uint8_t> rssi_arr = arr["Rssi"];
        msg->rssi = rssi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Rssi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Rssi' is wrong type; expected a uint8.");
    }
    try {
        //remrssi
        const matlab::data::TypedArray<uint8_t> remrssi_arr = arr["Remrssi"];
        msg->remrssi = remrssi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Remrssi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Remrssi' is wrong type; expected a uint8.");
    }
    try {
        //txbuf
        const matlab::data::TypedArray<uint8_t> txbuf_arr = arr["Txbuf"];
        msg->txbuf = txbuf_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Txbuf' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Txbuf' is wrong type; expected a uint8.");
    }
    try {
        //noise
        const matlab::data::TypedArray<uint8_t> noise_arr = arr["Noise"];
        msg->noise = noise_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Noise' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Noise' is wrong type; expected a uint8.");
    }
    try {
        //remnoise
        const matlab::data::TypedArray<uint8_t> remnoise_arr = arr["Remnoise"];
        msg->remnoise = remnoise_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Remnoise' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Remnoise' is wrong type; expected a uint8.");
    }
    try {
        //rxerrors
        const matlab::data::TypedArray<uint16_t> rxerrors_arr = arr["Rxerrors"];
        msg->rxerrors = rxerrors_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Rxerrors' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Rxerrors' is wrong type; expected a uint16.");
    }
    try {
        //fixed
        const matlab::data::TypedArray<uint16_t> fixed_arr = arr["Fixed"];
        msg->fixed = fixed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Fixed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Fixed' is wrong type; expected a uint16.");
    }
    try {
        //rssi_dbm
        const matlab::data::TypedArray<float> rssi_dbm_arr = arr["RssiDbm"];
        msg->rssi_dbm = rssi_dbm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RssiDbm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RssiDbm' is wrong type; expected a single.");
    }
    try {
        //remrssi_dbm
        const matlab::data::TypedArray<float> remrssi_dbm_arr = arr["RemrssiDbm"];
        msg->remrssi_dbm = remrssi_dbm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RemrssiDbm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RemrssiDbm' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_RadioStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::RadioStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Rssi","Remrssi","Txbuf","Noise","Remnoise","Rxerrors","Fixed","RssiDbm","RemrssiDbm"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/RadioStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // rssi
    auto currentElement_rssi = (msg + ctr)->rssi;
    outArray[ctr]["Rssi"] = factory.createScalar(currentElement_rssi);
    // remrssi
    auto currentElement_remrssi = (msg + ctr)->remrssi;
    outArray[ctr]["Remrssi"] = factory.createScalar(currentElement_remrssi);
    // txbuf
    auto currentElement_txbuf = (msg + ctr)->txbuf;
    outArray[ctr]["Txbuf"] = factory.createScalar(currentElement_txbuf);
    // noise
    auto currentElement_noise = (msg + ctr)->noise;
    outArray[ctr]["Noise"] = factory.createScalar(currentElement_noise);
    // remnoise
    auto currentElement_remnoise = (msg + ctr)->remnoise;
    outArray[ctr]["Remnoise"] = factory.createScalar(currentElement_remnoise);
    // rxerrors
    auto currentElement_rxerrors = (msg + ctr)->rxerrors;
    outArray[ctr]["Rxerrors"] = factory.createScalar(currentElement_rxerrors);
    // fixed
    auto currentElement_fixed = (msg + ctr)->fixed;
    outArray[ctr]["Fixed"] = factory.createScalar(currentElement_fixed);
    // rssi_dbm
    auto currentElement_rssi_dbm = (msg + ctr)->rssi_dbm;
    outArray[ctr]["RssiDbm"] = factory.createScalar(currentElement_rssi_dbm);
    // remrssi_dbm
    auto currentElement_remrssi_dbm = (msg + ctr)->remrssi_dbm;
    outArray[ctr]["RemrssiDbm"] = factory.createScalar(currentElement_remrssi_dbm);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_RadioStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_RadioStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_RadioStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::RadioStatus,mavros_msgs_msg_RadioStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_RadioStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::RadioStatus,mavros_msgs::RadioStatus::ConstPtr,mavros_msgs_msg_RadioStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_RadioStatus_common, MATLABROSMsgInterface<mavros_msgs::RadioStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_RadioStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1