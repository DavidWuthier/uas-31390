// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/DebugValue
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
#include "mavros_msgs/DebugValue.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_DebugValue_common : public MATLABROSMsgInterface<mavros_msgs::DebugValue> {
  public:
    virtual ~mavros_msgs_msg_DebugValue_common(){}
    virtual void copy_from_struct(mavros_msgs::DebugValue* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::DebugValue* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_DebugValue_common::copy_from_struct(mavros_msgs::DebugValue* msg, const matlab::data::Struct& arr,
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
        //index
        const matlab::data::TypedArray<int32_t> index_arr = arr["Index"];
        msg->index = index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Index' is wrong type; expected a int32.");
    }
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
        //value_float
        const matlab::data::TypedArray<float> value_float_arr = arr["ValueFloat"];
        msg->value_float = value_float_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ValueFloat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ValueFloat' is wrong type; expected a single.");
    }
    try {
        //value_int
        const matlab::data::TypedArray<int32_t> value_int_arr = arr["ValueInt"];
        msg->value_int = value_int_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ValueInt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ValueInt' is wrong type; expected a int32.");
    }
    try {
        //data
        const matlab::data::TypedArray<float> data_arr = arr["Data"];
        size_t nelem = data_arr.getNumberOfElements();
        	msg->data.resize(nelem);
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Data' is wrong type; expected a single.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_DebugValue_common::get_arr(MDFactory_T& factory, const mavros_msgs::DebugValue* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Index","Name","ValueFloat","ValueInt","Data","Type","TYPEDEBUG","TYPEDEBUGVECT","TYPEDEBUGARRAY","TYPENAMEDVALUEFLOAT","TYPENAMEDVALUEINT"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/DebugValue");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // index
    auto currentElement_index = (msg + ctr)->index;
    outArray[ctr]["Index"] = factory.createScalar(currentElement_index);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["Name"] = factory.createCharArray(currentElement_name);
    // value_float
    auto currentElement_value_float = (msg + ctr)->value_float;
    outArray[ctr]["ValueFloat"] = factory.createScalar(currentElement_value_float);
    // value_int
    auto currentElement_value_int = (msg + ctr)->value_int;
    outArray[ctr]["ValueInt"] = factory.createScalar(currentElement_value_int);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["Data"] = factory.createArray<mavros_msgs::DebugValue::_data_type::const_iterator, float>({currentElement_data.size(),1}, currentElement_data.begin(), currentElement_data.end());
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // TYPE_DEBUG
    auto currentElement_TYPE_DEBUG = (msg + ctr)->TYPE_DEBUG;
    outArray[ctr]["TYPEDEBUG"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_DEBUG));
    // TYPE_DEBUG_VECT
    auto currentElement_TYPE_DEBUG_VECT = (msg + ctr)->TYPE_DEBUG_VECT;
    outArray[ctr]["TYPEDEBUGVECT"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_DEBUG_VECT));
    // TYPE_DEBUG_ARRAY
    auto currentElement_TYPE_DEBUG_ARRAY = (msg + ctr)->TYPE_DEBUG_ARRAY;
    outArray[ctr]["TYPEDEBUGARRAY"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_DEBUG_ARRAY));
    // TYPE_NAMED_VALUE_FLOAT
    auto currentElement_TYPE_NAMED_VALUE_FLOAT = (msg + ctr)->TYPE_NAMED_VALUE_FLOAT;
    outArray[ctr]["TYPENAMEDVALUEFLOAT"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_NAMED_VALUE_FLOAT));
    // TYPE_NAMED_VALUE_INT
    auto currentElement_TYPE_NAMED_VALUE_INT = (msg + ctr)->TYPE_NAMED_VALUE_INT;
    outArray[ctr]["TYPENAMEDVALUEINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_TYPE_NAMED_VALUE_INT));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_DebugValue_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_DebugValue_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_DebugValue_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::DebugValue,mavros_msgs_msg_DebugValue_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_DebugValue_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::DebugValue,mavros_msgs::DebugValue::ConstPtr,mavros_msgs_msg_DebugValue_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_DebugValue_common, MATLABROSMsgInterface<mavros_msgs::DebugValue>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_DebugValue_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1