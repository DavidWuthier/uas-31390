// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/OverrideRCIn
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
#include "mavros_msgs/OverrideRCIn.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_OverrideRCIn_common : public MATLABROSMsgInterface<mavros_msgs::OverrideRCIn> {
  public:
    virtual ~mavros_msgs_msg_OverrideRCIn_common(){}
    virtual void copy_from_struct(mavros_msgs::OverrideRCIn* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::OverrideRCIn* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_OverrideRCIn_common::copy_from_struct(mavros_msgs::OverrideRCIn* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //channels
        const matlab::data::TypedArray<uint16_t> channels_arr = arr["Channels"];
        size_t nelem = 8;
        	std::copy(channels_arr.begin(), channels_arr.begin()+nelem, msg->channels.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Channels' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Channels' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_OverrideRCIn_common::get_arr(MDFactory_T& factory, const mavros_msgs::OverrideRCIn* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CHANRELEASE","CHANNOCHANGE","Channels"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/OverrideRCIn");
    // CHAN_RELEASE
    auto currentElement_CHAN_RELEASE = (msg + ctr)->CHAN_RELEASE;
    outArray[ctr]["CHANRELEASE"] = factory.createScalar(static_cast<uint16_t>(currentElement_CHAN_RELEASE));
    // CHAN_NOCHANGE
    auto currentElement_CHAN_NOCHANGE = (msg + ctr)->CHAN_NOCHANGE;
    outArray[ctr]["CHANNOCHANGE"] = factory.createScalar(static_cast<uint16_t>(currentElement_CHAN_NOCHANGE));
    // channels
    auto currentElement_channels = (msg + ctr)->channels;
    outArray[ctr]["Channels"] = factory.createArray<mavros_msgs::OverrideRCIn::_channels_type::const_iterator, uint16_t>({currentElement_channels.size(),1}, currentElement_channels.begin(), currentElement_channels.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_OverrideRCIn_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_OverrideRCIn_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_OverrideRCIn_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::OverrideRCIn,mavros_msgs_msg_OverrideRCIn_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_OverrideRCIn_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::OverrideRCIn,mavros_msgs::OverrideRCIn::ConstPtr,mavros_msgs_msg_OverrideRCIn_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_OverrideRCIn_common, MATLABROSMsgInterface<mavros_msgs::OverrideRCIn>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_OverrideRCIn_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1