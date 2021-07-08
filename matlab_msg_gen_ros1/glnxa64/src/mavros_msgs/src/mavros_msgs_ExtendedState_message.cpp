// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ExtendedState
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
#include "mavros_msgs/ExtendedState.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ExtendedState_common : public MATLABROSMsgInterface<mavros_msgs::ExtendedState> {
  public:
    virtual ~mavros_msgs_msg_ExtendedState_common(){}
    virtual void copy_from_struct(mavros_msgs::ExtendedState* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ExtendedState* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ExtendedState_common::copy_from_struct(mavros_msgs::ExtendedState* msg, const matlab::data::Struct& arr,
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
        //vtol_state
        const matlab::data::TypedArray<uint8_t> vtol_state_arr = arr["VtolState"];
        msg->vtol_state = vtol_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VtolState' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VtolState' is wrong type; expected a uint8.");
    }
    try {
        //landed_state
        const matlab::data::TypedArray<uint8_t> landed_state_arr = arr["LandedState"];
        msg->landed_state = landed_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LandedState' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LandedState' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ExtendedState_common::get_arr(MDFactory_T& factory, const mavros_msgs::ExtendedState* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","VTOLSTATEUNDEFINED","VTOLSTATETRANSITIONTOFW","VTOLSTATETRANSITIONTOMC","VTOLSTATEMC","VTOLSTATEFW","LANDEDSTATEUNDEFINED","LANDEDSTATEONGROUND","LANDEDSTATEINAIR","LANDEDSTATETAKEOFF","LANDEDSTATELANDING","Header","VtolState","LandedState"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ExtendedState");
    // VTOL_STATE_UNDEFINED
    auto currentElement_VTOL_STATE_UNDEFINED = (msg + ctr)->VTOL_STATE_UNDEFINED;
    outArray[ctr]["VTOLSTATEUNDEFINED"] = factory.createScalar(static_cast<uint8_t>(currentElement_VTOL_STATE_UNDEFINED));
    // VTOL_STATE_TRANSITION_TO_FW
    auto currentElement_VTOL_STATE_TRANSITION_TO_FW = (msg + ctr)->VTOL_STATE_TRANSITION_TO_FW;
    outArray[ctr]["VTOLSTATETRANSITIONTOFW"] = factory.createScalar(static_cast<uint8_t>(currentElement_VTOL_STATE_TRANSITION_TO_FW));
    // VTOL_STATE_TRANSITION_TO_MC
    auto currentElement_VTOL_STATE_TRANSITION_TO_MC = (msg + ctr)->VTOL_STATE_TRANSITION_TO_MC;
    outArray[ctr]["VTOLSTATETRANSITIONTOMC"] = factory.createScalar(static_cast<uint8_t>(currentElement_VTOL_STATE_TRANSITION_TO_MC));
    // VTOL_STATE_MC
    auto currentElement_VTOL_STATE_MC = (msg + ctr)->VTOL_STATE_MC;
    outArray[ctr]["VTOLSTATEMC"] = factory.createScalar(static_cast<uint8_t>(currentElement_VTOL_STATE_MC));
    // VTOL_STATE_FW
    auto currentElement_VTOL_STATE_FW = (msg + ctr)->VTOL_STATE_FW;
    outArray[ctr]["VTOLSTATEFW"] = factory.createScalar(static_cast<uint8_t>(currentElement_VTOL_STATE_FW));
    // LANDED_STATE_UNDEFINED
    auto currentElement_LANDED_STATE_UNDEFINED = (msg + ctr)->LANDED_STATE_UNDEFINED;
    outArray[ctr]["LANDEDSTATEUNDEFINED"] = factory.createScalar(static_cast<uint8_t>(currentElement_LANDED_STATE_UNDEFINED));
    // LANDED_STATE_ON_GROUND
    auto currentElement_LANDED_STATE_ON_GROUND = (msg + ctr)->LANDED_STATE_ON_GROUND;
    outArray[ctr]["LANDEDSTATEONGROUND"] = factory.createScalar(static_cast<uint8_t>(currentElement_LANDED_STATE_ON_GROUND));
    // LANDED_STATE_IN_AIR
    auto currentElement_LANDED_STATE_IN_AIR = (msg + ctr)->LANDED_STATE_IN_AIR;
    outArray[ctr]["LANDEDSTATEINAIR"] = factory.createScalar(static_cast<uint8_t>(currentElement_LANDED_STATE_IN_AIR));
    // LANDED_STATE_TAKEOFF
    auto currentElement_LANDED_STATE_TAKEOFF = (msg + ctr)->LANDED_STATE_TAKEOFF;
    outArray[ctr]["LANDEDSTATETAKEOFF"] = factory.createScalar(static_cast<uint8_t>(currentElement_LANDED_STATE_TAKEOFF));
    // LANDED_STATE_LANDING
    auto currentElement_LANDED_STATE_LANDING = (msg + ctr)->LANDED_STATE_LANDING;
    outArray[ctr]["LANDEDSTATELANDING"] = factory.createScalar(static_cast<uint8_t>(currentElement_LANDED_STATE_LANDING));
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // vtol_state
    auto currentElement_vtol_state = (msg + ctr)->vtol_state;
    outArray[ctr]["VtolState"] = factory.createScalar(currentElement_vtol_state);
    // landed_state
    auto currentElement_landed_state = (msg + ctr)->landed_state;
    outArray[ctr]["LandedState"] = factory.createScalar(currentElement_landed_state);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ExtendedState_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ExtendedState_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ExtendedState_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ExtendedState,mavros_msgs_msg_ExtendedState_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ExtendedState_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ExtendedState,mavros_msgs::ExtendedState::ConstPtr,mavros_msgs_msg_ExtendedState_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ExtendedState_common, MATLABROSMsgInterface<mavros_msgs::ExtendedState>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ExtendedState_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1