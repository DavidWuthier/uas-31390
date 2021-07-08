// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Altitude
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
#include "mavros_msgs/Altitude.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_Altitude_common : public MATLABROSMsgInterface<mavros_msgs::Altitude> {
  public:
    virtual ~mavros_msgs_msg_Altitude_common(){}
    virtual void copy_from_struct(mavros_msgs::Altitude* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::Altitude* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_Altitude_common::copy_from_struct(mavros_msgs::Altitude* msg, const matlab::data::Struct& arr,
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
        //monotonic
        const matlab::data::TypedArray<float> monotonic_arr = arr["Monotonic"];
        msg->monotonic = monotonic_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Monotonic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Monotonic' is wrong type; expected a single.");
    }
    try {
        //amsl
        const matlab::data::TypedArray<float> amsl_arr = arr["Amsl"];
        msg->amsl = amsl_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Amsl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Amsl' is wrong type; expected a single.");
    }
    try {
        //local
        const matlab::data::TypedArray<float> local_arr = arr["Local"];
        msg->local = local_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Local' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Local' is wrong type; expected a single.");
    }
    try {
        //relative
        const matlab::data::TypedArray<float> relative_arr = arr["Relative"];
        msg->relative = relative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Relative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Relative' is wrong type; expected a single.");
    }
    try {
        //terrain
        const matlab::data::TypedArray<float> terrain_arr = arr["Terrain"];
        msg->terrain = terrain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Terrain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Terrain' is wrong type; expected a single.");
    }
    try {
        //bottom_clearance
        const matlab::data::TypedArray<float> bottom_clearance_arr = arr["BottomClearance"];
        msg->bottom_clearance = bottom_clearance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BottomClearance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BottomClearance' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_Altitude_common::get_arr(MDFactory_T& factory, const mavros_msgs::Altitude* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Monotonic","Amsl","Local","Relative","Terrain","BottomClearance"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/Altitude");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // monotonic
    auto currentElement_monotonic = (msg + ctr)->monotonic;
    outArray[ctr]["Monotonic"] = factory.createScalar(currentElement_monotonic);
    // amsl
    auto currentElement_amsl = (msg + ctr)->amsl;
    outArray[ctr]["Amsl"] = factory.createScalar(currentElement_amsl);
    // local
    auto currentElement_local = (msg + ctr)->local;
    outArray[ctr]["Local"] = factory.createScalar(currentElement_local);
    // relative
    auto currentElement_relative = (msg + ctr)->relative;
    outArray[ctr]["Relative"] = factory.createScalar(currentElement_relative);
    // terrain
    auto currentElement_terrain = (msg + ctr)->terrain;
    outArray[ctr]["Terrain"] = factory.createScalar(currentElement_terrain);
    // bottom_clearance
    auto currentElement_bottom_clearance = (msg + ctr)->bottom_clearance;
    outArray[ctr]["BottomClearance"] = factory.createScalar(currentElement_bottom_clearance);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_Altitude_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_Altitude_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_Altitude_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::Altitude,mavros_msgs_msg_Altitude_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_Altitude_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::Altitude,mavros_msgs::Altitude::ConstPtr,mavros_msgs_msg_Altitude_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_Altitude_common, MATLABROSMsgInterface<mavros_msgs::Altitude>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_Altitude_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1