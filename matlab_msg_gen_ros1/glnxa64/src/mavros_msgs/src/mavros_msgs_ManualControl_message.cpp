// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ManualControl
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
#include "mavros_msgs/ManualControl.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ManualControl_common : public MATLABROSMsgInterface<mavros_msgs::ManualControl> {
  public:
    virtual ~mavros_msgs_msg_ManualControl_common(){}
    virtual void copy_from_struct(mavros_msgs::ManualControl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ManualControl* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ManualControl_common::copy_from_struct(mavros_msgs::ManualControl* msg, const matlab::data::Struct& arr,
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
        //x
        const matlab::data::TypedArray<float> x_arr = arr["X"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'X' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'X' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["Y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Y' is wrong type; expected a single.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["Z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Z' is wrong type; expected a single.");
    }
    try {
        //r
        const matlab::data::TypedArray<float> r_arr = arr["R"];
        msg->r = r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'R' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'R' is wrong type; expected a single.");
    }
    try {
        //buttons
        const matlab::data::TypedArray<uint16_t> buttons_arr = arr["Buttons"];
        msg->buttons = buttons_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Buttons' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Buttons' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ManualControl_common::get_arr(MDFactory_T& factory, const mavros_msgs::ManualControl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","X","Y","Z","R","Buttons"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ManualControl");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["X"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["Y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["Z"] = factory.createScalar(currentElement_z);
    // r
    auto currentElement_r = (msg + ctr)->r;
    outArray[ctr]["R"] = factory.createScalar(currentElement_r);
    // buttons
    auto currentElement_buttons = (msg + ctr)->buttons;
    outArray[ctr]["Buttons"] = factory.createScalar(currentElement_buttons);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ManualControl_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ManualControl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ManualControl_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ManualControl,mavros_msgs_msg_ManualControl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ManualControl_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ManualControl,mavros_msgs::ManualControl::ConstPtr,mavros_msgs_msg_ManualControl_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ManualControl_common, MATLABROSMsgInterface<mavros_msgs::ManualControl>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ManualControl_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1