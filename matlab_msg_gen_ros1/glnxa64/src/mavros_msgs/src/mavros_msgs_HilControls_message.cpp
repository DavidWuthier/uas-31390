// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilControls
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
#include "mavros_msgs/HilControls.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HilControls_common : public MATLABROSMsgInterface<mavros_msgs::HilControls> {
  public:
    virtual ~mavros_msgs_msg_HilControls_common(){}
    virtual void copy_from_struct(mavros_msgs::HilControls* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HilControls* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HilControls_common::copy_from_struct(mavros_msgs::HilControls* msg, const matlab::data::Struct& arr,
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
        //roll_ailerons
        const matlab::data::TypedArray<float> roll_ailerons_arr = arr["RollAilerons"];
        msg->roll_ailerons = roll_ailerons_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RollAilerons' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RollAilerons' is wrong type; expected a single.");
    }
    try {
        //pitch_elevator
        const matlab::data::TypedArray<float> pitch_elevator_arr = arr["PitchElevator"];
        msg->pitch_elevator = pitch_elevator_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PitchElevator' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PitchElevator' is wrong type; expected a single.");
    }
    try {
        //yaw_rudder
        const matlab::data::TypedArray<float> yaw_rudder_arr = arr["YawRudder"];
        msg->yaw_rudder = yaw_rudder_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'YawRudder' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'YawRudder' is wrong type; expected a single.");
    }
    try {
        //throttle
        const matlab::data::TypedArray<float> throttle_arr = arr["Throttle"];
        msg->throttle = throttle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Throttle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Throttle' is wrong type; expected a single.");
    }
    try {
        //aux1
        const matlab::data::TypedArray<float> aux1_arr = arr["Aux1"];
        msg->aux1 = aux1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Aux1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Aux1' is wrong type; expected a single.");
    }
    try {
        //aux2
        const matlab::data::TypedArray<float> aux2_arr = arr["Aux2"];
        msg->aux2 = aux2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Aux2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Aux2' is wrong type; expected a single.");
    }
    try {
        //aux3
        const matlab::data::TypedArray<float> aux3_arr = arr["Aux3"];
        msg->aux3 = aux3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Aux3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Aux3' is wrong type; expected a single.");
    }
    try {
        //aux4
        const matlab::data::TypedArray<float> aux4_arr = arr["Aux4"];
        msg->aux4 = aux4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Aux4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Aux4' is wrong type; expected a single.");
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
        //nav_mode
        const matlab::data::TypedArray<uint8_t> nav_mode_arr = arr["NavMode"];
        msg->nav_mode = nav_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'NavMode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'NavMode' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HilControls_common::get_arr(MDFactory_T& factory, const mavros_msgs::HilControls* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","RollAilerons","PitchElevator","YawRudder","Throttle","Aux1","Aux2","Aux3","Aux4","Mode","NavMode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HilControls");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // roll_ailerons
    auto currentElement_roll_ailerons = (msg + ctr)->roll_ailerons;
    outArray[ctr]["RollAilerons"] = factory.createScalar(currentElement_roll_ailerons);
    // pitch_elevator
    auto currentElement_pitch_elevator = (msg + ctr)->pitch_elevator;
    outArray[ctr]["PitchElevator"] = factory.createScalar(currentElement_pitch_elevator);
    // yaw_rudder
    auto currentElement_yaw_rudder = (msg + ctr)->yaw_rudder;
    outArray[ctr]["YawRudder"] = factory.createScalar(currentElement_yaw_rudder);
    // throttle
    auto currentElement_throttle = (msg + ctr)->throttle;
    outArray[ctr]["Throttle"] = factory.createScalar(currentElement_throttle);
    // aux1
    auto currentElement_aux1 = (msg + ctr)->aux1;
    outArray[ctr]["Aux1"] = factory.createScalar(currentElement_aux1);
    // aux2
    auto currentElement_aux2 = (msg + ctr)->aux2;
    outArray[ctr]["Aux2"] = factory.createScalar(currentElement_aux2);
    // aux3
    auto currentElement_aux3 = (msg + ctr)->aux3;
    outArray[ctr]["Aux3"] = factory.createScalar(currentElement_aux3);
    // aux4
    auto currentElement_aux4 = (msg + ctr)->aux4;
    outArray[ctr]["Aux4"] = factory.createScalar(currentElement_aux4);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createScalar(currentElement_mode);
    // nav_mode
    auto currentElement_nav_mode = (msg + ctr)->nav_mode;
    outArray[ctr]["NavMode"] = factory.createScalar(currentElement_nav_mode);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HilControls_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HilControls_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HilControls_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HilControls,mavros_msgs_msg_HilControls_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HilControls_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HilControls,mavros_msgs::HilControls::ConstPtr,mavros_msgs_msg_HilControls_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HilControls_common, MATLABROSMsgInterface<mavros_msgs::HilControls>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HilControls_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1