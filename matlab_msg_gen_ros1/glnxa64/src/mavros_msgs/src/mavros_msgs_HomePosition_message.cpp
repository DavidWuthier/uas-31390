// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HomePosition
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
#include "mavros_msgs/HomePosition.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HomePosition_common : public MATLABROSMsgInterface<mavros_msgs::HomePosition> {
  public:
    virtual ~mavros_msgs_msg_HomePosition_common(){}
    virtual void copy_from_struct(mavros_msgs::HomePosition* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HomePosition* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HomePosition_common::copy_from_struct(mavros_msgs::HomePosition* msg, const matlab::data::Struct& arr,
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
        //geo
        const matlab::data::StructArray geo_arr = arr["Geo"];
        static auto msgClassPtr_geo = loader->createInstance<MATLABROSMsgInterface<geographic_msgs::GeoPoint>>("geographic_msgs_msg_GeoPoint_common");
        msgClassPtr_geo->copy_from_struct(&msg->geo,geo_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Geo' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Geo' is wrong type; expected a struct.");
    }
    try {
        //position
        const matlab::data::StructArray position_arr = arr["Position"];
        static auto msgClassPtr_position = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Point>>("geometry_msgs_msg_Point_common");
        msgClassPtr_position->copy_from_struct(&msg->position,position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Position' is wrong type; expected a struct.");
    }
    try {
        //orientation
        const matlab::data::StructArray orientation_arr = arr["Orientation"];
        static auto msgClassPtr_orientation = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Quaternion>>("geometry_msgs_msg_Quaternion_common");
        msgClassPtr_orientation->copy_from_struct(&msg->orientation,orientation_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Orientation' is wrong type; expected a struct.");
    }
    try {
        //approach
        const matlab::data::StructArray approach_arr = arr["Approach"];
        static auto msgClassPtr_approach = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_approach->copy_from_struct(&msg->approach,approach_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Approach' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Approach' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HomePosition_common::get_arr(MDFactory_T& factory, const mavros_msgs::HomePosition* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Geo","Position","Orientation","Approach"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HomePosition");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // geo
    auto currentElement_geo = (msg + ctr)->geo;
    static auto msgClassPtr_geo = loader->createInstance<MATLABROSMsgInterface<geographic_msgs::GeoPoint>>("geographic_msgs_msg_GeoPoint_common");
    outArray[ctr]["Geo"] = msgClassPtr_geo->get_arr(factory, &currentElement_geo, loader);
    // position
    auto currentElement_position = (msg + ctr)->position;
    static auto msgClassPtr_position = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Point>>("geometry_msgs_msg_Point_common");
    outArray[ctr]["Position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    static auto msgClassPtr_orientation = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Quaternion>>("geometry_msgs_msg_Quaternion_common");
    outArray[ctr]["Orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // approach
    auto currentElement_approach = (msg + ctr)->approach;
    static auto msgClassPtr_approach = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["Approach"] = msgClassPtr_approach->get_arr(factory, &currentElement_approach, loader);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HomePosition_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HomePosition_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HomePosition_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HomePosition,mavros_msgs_msg_HomePosition_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HomePosition_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HomePosition,mavros_msgs::HomePosition::ConstPtr,mavros_msgs_msg_HomePosition_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HomePosition_common, MATLABROSMsgInterface<mavros_msgs::HomePosition>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HomePosition_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1