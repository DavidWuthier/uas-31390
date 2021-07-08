// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileEntry
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
#include "mavros_msgs/FileEntry.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileEntry_common : public MATLABROSMsgInterface<mavros_msgs::FileEntry> {
  public:
    virtual ~mavros_msgs_msg_FileEntry_common(){}
    virtual void copy_from_struct(mavros_msgs::FileEntry* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileEntry* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileEntry_common::copy_from_struct(mavros_msgs::FileEntry* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //name
        const matlab::data::CharArray name_arr = arr["Name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Name' is wrong type; expected a string.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["Type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Type' is wrong type; expected a uint8.");
    }
    try {
        //size
        const matlab::data::TypedArray<uint64_t> size_arr = arr["Size"];
        msg->size = size_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Size' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Size' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_FileEntry_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileEntry* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","TYPEFILE","TYPEDIRECTORY","Name","Type","Size"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileEntry");
    // TYPE_FILE
    auto currentElement_TYPE_FILE = (msg + ctr)->TYPE_FILE;
    outArray[ctr]["TYPEFILE"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_FILE));
    // TYPE_DIRECTORY
    auto currentElement_TYPE_DIRECTORY = (msg + ctr)->TYPE_DIRECTORY;
    outArray[ctr]["TYPEDIRECTORY"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_DIRECTORY));
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // size
    auto currentElement_size = (msg + ctr)->size;
    outArray[ctr]["Size"] = factory.createScalar(currentElement_size);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_FileEntry_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_FileEntry_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_FileEntry_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::FileEntry,mavros_msgs_msg_FileEntry_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_FileEntry_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::FileEntry,mavros_msgs::FileEntry::ConstPtr,mavros_msgs_msg_FileEntry_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileEntry_common, MATLABROSMsgInterface<mavros_msgs::FileEntry>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_FileEntry_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1