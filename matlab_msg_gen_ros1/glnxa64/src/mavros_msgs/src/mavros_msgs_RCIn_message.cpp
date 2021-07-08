// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/RCIn
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
#include "mavros_msgs/RCIn.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_RCIn_common : public MATLABROSMsgInterface<mavros_msgs::RCIn> {
  public:
    virtual ~mavros_msgs_msg_RCIn_common(){}
    virtual void copy_from_struct(mavros_msgs::RCIn* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::RCIn* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_RCIn_common::copy_from_struct(mavros_msgs::RCIn* msg, const matlab::data::Struct& arr,
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
        //channels
        const matlab::data::TypedArray<uint16_t> channels_arr = arr["Channels"];
        size_t nelem = channels_arr.getNumberOfElements();
        	msg->channels.resize(nelem);
        	std::copy(channels_arr.begin(), channels_arr.begin()+nelem, msg->channels.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Channels' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Channels' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_RCIn_common::get_arr(MDFactory_T& factory, const mavros_msgs::RCIn* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Rssi","Channels"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/RCIn");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // rssi
    auto currentElement_rssi = (msg + ctr)->rssi;
    outArray[ctr]["Rssi"] = factory.createScalar(currentElement_rssi);
    // channels
    auto currentElement_channels = (msg + ctr)->channels;
    outArray[ctr]["Channels"] = factory.createArray<mavros_msgs::RCIn::_channels_type::const_iterator, uint16_t>({currentElement_channels.size(),1}, currentElement_channels.begin(), currentElement_channels.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_RCIn_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_RCIn_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_RCIn_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::RCIn,mavros_msgs_msg_RCIn_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_RCIn_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::RCIn,mavros_msgs::RCIn::ConstPtr,mavros_msgs_msg_RCIn_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_RCIn_common, MATLABROSMsgInterface<mavros_msgs::RCIn>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_RCIn_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1