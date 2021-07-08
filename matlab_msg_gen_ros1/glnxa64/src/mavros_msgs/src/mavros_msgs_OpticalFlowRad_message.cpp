// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/OpticalFlowRad
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
#include "mavros_msgs/OpticalFlowRad.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_OpticalFlowRad_common : public MATLABROSMsgInterface<mavros_msgs::OpticalFlowRad> {
  public:
    virtual ~mavros_msgs_msg_OpticalFlowRad_common(){}
    virtual void copy_from_struct(mavros_msgs::OpticalFlowRad* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::OpticalFlowRad* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_OpticalFlowRad_common::copy_from_struct(mavros_msgs::OpticalFlowRad* msg, const matlab::data::Struct& arr,
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
        //integration_time_us
        const matlab::data::TypedArray<uint32_t> integration_time_us_arr = arr["IntegrationTimeUs"];
        msg->integration_time_us = integration_time_us_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegrationTimeUs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegrationTimeUs' is wrong type; expected a uint32.");
    }
    try {
        //integrated_x
        const matlab::data::TypedArray<float> integrated_x_arr = arr["IntegratedX"];
        msg->integrated_x = integrated_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegratedX' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegratedX' is wrong type; expected a single.");
    }
    try {
        //integrated_y
        const matlab::data::TypedArray<float> integrated_y_arr = arr["IntegratedY"];
        msg->integrated_y = integrated_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegratedY' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegratedY' is wrong type; expected a single.");
    }
    try {
        //integrated_xgyro
        const matlab::data::TypedArray<float> integrated_xgyro_arr = arr["IntegratedXgyro"];
        msg->integrated_xgyro = integrated_xgyro_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegratedXgyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegratedXgyro' is wrong type; expected a single.");
    }
    try {
        //integrated_ygyro
        const matlab::data::TypedArray<float> integrated_ygyro_arr = arr["IntegratedYgyro"];
        msg->integrated_ygyro = integrated_ygyro_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegratedYgyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegratedYgyro' is wrong type; expected a single.");
    }
    try {
        //integrated_zgyro
        const matlab::data::TypedArray<float> integrated_zgyro_arr = arr["IntegratedZgyro"];
        msg->integrated_zgyro = integrated_zgyro_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IntegratedZgyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IntegratedZgyro' is wrong type; expected a single.");
    }
    try {
        //temperature
        const matlab::data::TypedArray<int16_t> temperature_arr = arr["Temperature"];
        msg->temperature = temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Temperature' is wrong type; expected a int16.");
    }
    try {
        //quality
        const matlab::data::TypedArray<uint8_t> quality_arr = arr["Quality"];
        msg->quality = quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Quality' is wrong type; expected a uint8.");
    }
    try {
        //time_delta_distance_us
        const matlab::data::TypedArray<uint32_t> time_delta_distance_us_arr = arr["TimeDeltaDistanceUs"];
        msg->time_delta_distance_us = time_delta_distance_us_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TimeDeltaDistanceUs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TimeDeltaDistanceUs' is wrong type; expected a uint32.");
    }
    try {
        //distance
        const matlab::data::TypedArray<float> distance_arr = arr["Distance"];
        msg->distance = distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Distance' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_OpticalFlowRad_common::get_arr(MDFactory_T& factory, const mavros_msgs::OpticalFlowRad* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","IntegrationTimeUs","IntegratedX","IntegratedY","IntegratedXgyro","IntegratedYgyro","IntegratedZgyro","Temperature","Quality","TimeDeltaDistanceUs","Distance"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/OpticalFlowRad");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // integration_time_us
    auto currentElement_integration_time_us = (msg + ctr)->integration_time_us;
    outArray[ctr]["IntegrationTimeUs"] = factory.createScalar(currentElement_integration_time_us);
    // integrated_x
    auto currentElement_integrated_x = (msg + ctr)->integrated_x;
    outArray[ctr]["IntegratedX"] = factory.createScalar(currentElement_integrated_x);
    // integrated_y
    auto currentElement_integrated_y = (msg + ctr)->integrated_y;
    outArray[ctr]["IntegratedY"] = factory.createScalar(currentElement_integrated_y);
    // integrated_xgyro
    auto currentElement_integrated_xgyro = (msg + ctr)->integrated_xgyro;
    outArray[ctr]["IntegratedXgyro"] = factory.createScalar(currentElement_integrated_xgyro);
    // integrated_ygyro
    auto currentElement_integrated_ygyro = (msg + ctr)->integrated_ygyro;
    outArray[ctr]["IntegratedYgyro"] = factory.createScalar(currentElement_integrated_ygyro);
    // integrated_zgyro
    auto currentElement_integrated_zgyro = (msg + ctr)->integrated_zgyro;
    outArray[ctr]["IntegratedZgyro"] = factory.createScalar(currentElement_integrated_zgyro);
    // temperature
    auto currentElement_temperature = (msg + ctr)->temperature;
    outArray[ctr]["Temperature"] = factory.createScalar(currentElement_temperature);
    // quality
    auto currentElement_quality = (msg + ctr)->quality;
    outArray[ctr]["Quality"] = factory.createScalar(currentElement_quality);
    // time_delta_distance_us
    auto currentElement_time_delta_distance_us = (msg + ctr)->time_delta_distance_us;
    outArray[ctr]["TimeDeltaDistanceUs"] = factory.createScalar(currentElement_time_delta_distance_us);
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["Distance"] = factory.createScalar(currentElement_distance);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_OpticalFlowRad_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_OpticalFlowRad_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_OpticalFlowRad_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::OpticalFlowRad,mavros_msgs_msg_OpticalFlowRad_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_OpticalFlowRad_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::OpticalFlowRad,mavros_msgs::OpticalFlowRad::ConstPtr,mavros_msgs_msg_OpticalFlowRad_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_OpticalFlowRad_common, MATLABROSMsgInterface<mavros_msgs::OpticalFlowRad>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_OpticalFlowRad_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1