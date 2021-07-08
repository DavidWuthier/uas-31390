// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilActuatorControls
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
#include "mavros_msgs/HilActuatorControls.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HilActuatorControls_common : public MATLABROSMsgInterface<mavros_msgs::HilActuatorControls> {
  public:
    virtual ~mavros_msgs_msg_HilActuatorControls_common(){}
    virtual void copy_from_struct(mavros_msgs::HilActuatorControls* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HilActuatorControls* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HilActuatorControls_common::copy_from_struct(mavros_msgs::HilActuatorControls* msg, const matlab::data::Struct& arr,
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
        //controls
        const matlab::data::TypedArray<float> controls_arr = arr["Controls"];
        size_t nelem = 16;
        	std::copy(controls_arr.begin(), controls_arr.begin()+nelem, msg->controls.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Controls' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Controls' is wrong type; expected a single.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["Mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mode' is wrong type; expected a uint8.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint64_t> flags_arr = arr["Flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Flags' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HilActuatorControls_common::get_arr(MDFactory_T& factory, const mavros_msgs::HilActuatorControls* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Controls","Mode","Flags"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HilActuatorControls");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // controls
    auto currentElement_controls = (msg + ctr)->controls;
    outArray[ctr]["Controls"] = factory.createArray<mavros_msgs::HilActuatorControls::_controls_type::const_iterator, float>({currentElement_controls.size(),1}, currentElement_controls.begin(), currentElement_controls.end());
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createScalar(currentElement_mode);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["Flags"] = factory.createScalar(currentElement_flags);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HilActuatorControls_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HilActuatorControls_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HilActuatorControls_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HilActuatorControls,mavros_msgs_msg_HilActuatorControls_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HilActuatorControls_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HilActuatorControls,mavros_msgs::HilActuatorControls::ConstPtr,mavros_msgs_msg_HilActuatorControls_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HilActuatorControls_common, MATLABROSMsgInterface<mavros_msgs::HilActuatorControls>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HilActuatorControls_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1