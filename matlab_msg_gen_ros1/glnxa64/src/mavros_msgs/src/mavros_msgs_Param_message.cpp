// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Param
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
#include "mavros_msgs/Param.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_ParamValue_common, mavros_msgs::ParamValue)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_Param_common : public MATLABROSMsgInterface<mavros_msgs::Param> {
  public:
    virtual ~mavros_msgs_msg_Param_common(){}
    virtual void copy_from_struct(mavros_msgs::Param* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::Param* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_Param_common::copy_from_struct(mavros_msgs::Param* msg, const matlab::data::Struct& arr,
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
        //param_id
        const matlab::data::CharArray param_id_arr = arr["ParamId"];
        msg->param_id = param_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ParamId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ParamId' is wrong type; expected a string.");
    }
    try {
        //value
        const matlab::data::StructArray value_arr = arr["Value"];
        static mavros_msgs_msg_ParamValue_common obj_value;
        obj_value.copy_from_struct(&msg->value,value_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Value' is wrong type; expected a struct.");
    }
    try {
        //param_index
        const matlab::data::TypedArray<uint16_t> param_index_arr = arr["ParamIndex"];
        msg->param_index = param_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ParamIndex' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ParamIndex' is wrong type; expected a uint16.");
    }
    try {
        //param_count
        const matlab::data::TypedArray<uint16_t> param_count_arr = arr["ParamCount"];
        msg->param_count = param_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ParamCount' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ParamCount' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_Param_common::get_arr(MDFactory_T& factory, const mavros_msgs::Param* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","ParamId","Value","ParamIndex","ParamCount"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/Param");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // param_id
    auto currentElement_param_id = (msg + ctr)->param_id;
    outArray[ctr]["ParamId"] = factory.createCharArray(currentElement_param_id);
    // value
    auto currentElement_value = (msg + ctr)->value;
    static mavros_msgs_msg_ParamValue_common obj_value;
    outArray[ctr]["Value"] = obj_value.get_arr(factory, &currentElement_value, loader);
    // param_index
    auto currentElement_param_index = (msg + ctr)->param_index;
    outArray[ctr]["ParamIndex"] = factory.createScalar(currentElement_param_index);
    // param_count
    auto currentElement_param_count = (msg + ctr)->param_count;
    outArray[ctr]["ParamCount"] = factory.createScalar(currentElement_param_count);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_Param_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_Param_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_Param_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::Param,mavros_msgs_msg_Param_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_Param_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::Param,mavros_msgs::Param::ConstPtr,mavros_msgs_msg_Param_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_Param_common, MATLABROSMsgInterface<mavros_msgs::Param>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_Param_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1