// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ParamValue
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
#include "mavros_msgs/ParamValue.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ParamValue_common : public MATLABROSMsgInterface<mavros_msgs::ParamValue> {
  public:
    virtual ~mavros_msgs_msg_ParamValue_common(){}
    virtual void copy_from_struct(mavros_msgs::ParamValue* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ParamValue* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ParamValue_common::copy_from_struct(mavros_msgs::ParamValue* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //integer
        const matlab::data::TypedArray<int64_t> integer_arr = arr["Integer"];
        msg->integer = integer_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Integer' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Integer' is wrong type; expected a int64.");
    }
    try {
        //real
        const matlab::data::TypedArray<double> real_arr = arr["Real"];
        msg->real = real_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Real' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Real' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ParamValue_common::get_arr(MDFactory_T& factory, const mavros_msgs::ParamValue* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Integer","Real"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ParamValue");
    // integer
    auto currentElement_integer = (msg + ctr)->integer;
    outArray[ctr]["Integer"] = factory.createScalar(currentElement_integer);
    // real
    auto currentElement_real = (msg + ctr)->real;
    outArray[ctr]["Real"] = factory.createScalar(currentElement_real);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ParamValue_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ParamValue_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ParamValue_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ParamValue,mavros_msgs_msg_ParamValue_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ParamValue_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ParamValue,mavros_msgs::ParamValue::ConstPtr,mavros_msgs_msg_ParamValue_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ParamValue_common, MATLABROSMsgInterface<mavros_msgs::ParamValue>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ParamValue_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1