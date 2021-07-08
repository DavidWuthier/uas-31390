// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ESCStatusItem
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
#include "mavros_msgs/ESCStatusItem.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ESCStatusItem_common : public MATLABROSMsgInterface<mavros_msgs::ESCStatusItem> {
  public:
    virtual ~mavros_msgs_msg_ESCStatusItem_common(){}
    virtual void copy_from_struct(mavros_msgs::ESCStatusItem* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ESCStatusItem* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ESCStatusItem_common::copy_from_struct(mavros_msgs::ESCStatusItem* msg, const matlab::data::Struct& arr,
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
        //rpm
        const matlab::data::TypedArray<int32_t> rpm_arr = arr["Rpm"];
        msg->rpm = rpm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Rpm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Rpm' is wrong type; expected a int32.");
    }
    try {
        //voltage
        const matlab::data::TypedArray<float> voltage_arr = arr["Voltage"];
        msg->voltage = voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Voltage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Voltage' is wrong type; expected a single.");
    }
    try {
        //current
        const matlab::data::TypedArray<float> current_arr = arr["Current"];
        msg->current = current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Current' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ESCStatusItem_common::get_arr(MDFactory_T& factory, const mavros_msgs::ESCStatusItem* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Rpm","Voltage","Current"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ESCStatusItem");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // rpm
    auto currentElement_rpm = (msg + ctr)->rpm;
    outArray[ctr]["Rpm"] = factory.createScalar(currentElement_rpm);
    // voltage
    auto currentElement_voltage = (msg + ctr)->voltage;
    outArray[ctr]["Voltage"] = factory.createScalar(currentElement_voltage);
    // current
    auto currentElement_current = (msg + ctr)->current;
    outArray[ctr]["Current"] = factory.createScalar(currentElement_current);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ESCStatusItem_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ESCStatusItem_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ESCStatusItem_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ESCStatusItem,mavros_msgs_msg_ESCStatusItem_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ESCStatusItem_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ESCStatusItem,mavros_msgs::ESCStatusItem::ConstPtr,mavros_msgs_msg_ESCStatusItem_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ESCStatusItem_common, MATLABROSMsgInterface<mavros_msgs::ESCStatusItem>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ESCStatusItem_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1