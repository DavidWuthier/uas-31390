// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/EstimatorStatus
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
#include "mavros_msgs/EstimatorStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_EstimatorStatus_common : public MATLABROSMsgInterface<mavros_msgs::EstimatorStatus> {
  public:
    virtual ~mavros_msgs_msg_EstimatorStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::EstimatorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::EstimatorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_EstimatorStatus_common::copy_from_struct(mavros_msgs::EstimatorStatus* msg, const matlab::data::Struct& arr,
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
        //attitude_status_flag
        const matlab::data::TypedArray<bool> attitude_status_flag_arr = arr["AttitudeStatusFlag"];
        msg->attitude_status_flag = attitude_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AttitudeStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AttitudeStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //velocity_horiz_status_flag
        const matlab::data::TypedArray<bool> velocity_horiz_status_flag_arr = arr["VelocityHorizStatusFlag"];
        msg->velocity_horiz_status_flag = velocity_horiz_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VelocityHorizStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VelocityHorizStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //velocity_vert_status_flag
        const matlab::data::TypedArray<bool> velocity_vert_status_flag_arr = arr["VelocityVertStatusFlag"];
        msg->velocity_vert_status_flag = velocity_vert_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VelocityVertStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VelocityVertStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pos_horiz_rel_status_flag
        const matlab::data::TypedArray<bool> pos_horiz_rel_status_flag_arr = arr["PosHorizRelStatusFlag"];
        msg->pos_horiz_rel_status_flag = pos_horiz_rel_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PosHorizRelStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PosHorizRelStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pos_horiz_abs_status_flag
        const matlab::data::TypedArray<bool> pos_horiz_abs_status_flag_arr = arr["PosHorizAbsStatusFlag"];
        msg->pos_horiz_abs_status_flag = pos_horiz_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PosHorizAbsStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PosHorizAbsStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pos_vert_abs_status_flag
        const matlab::data::TypedArray<bool> pos_vert_abs_status_flag_arr = arr["PosVertAbsStatusFlag"];
        msg->pos_vert_abs_status_flag = pos_vert_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PosVertAbsStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PosVertAbsStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pos_vert_agl_status_flag
        const matlab::data::TypedArray<bool> pos_vert_agl_status_flag_arr = arr["PosVertAglStatusFlag"];
        msg->pos_vert_agl_status_flag = pos_vert_agl_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PosVertAglStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PosVertAglStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //const_pos_mode_status_flag
        const matlab::data::TypedArray<bool> const_pos_mode_status_flag_arr = arr["ConstPosModeStatusFlag"];
        msg->const_pos_mode_status_flag = const_pos_mode_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ConstPosModeStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ConstPosModeStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pred_pos_horiz_rel_status_flag
        const matlab::data::TypedArray<bool> pred_pos_horiz_rel_status_flag_arr = arr["PredPosHorizRelStatusFlag"];
        msg->pred_pos_horiz_rel_status_flag = pred_pos_horiz_rel_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PredPosHorizRelStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PredPosHorizRelStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //pred_pos_horiz_abs_status_flag
        const matlab::data::TypedArray<bool> pred_pos_horiz_abs_status_flag_arr = arr["PredPosHorizAbsStatusFlag"];
        msg->pred_pos_horiz_abs_status_flag = pred_pos_horiz_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PredPosHorizAbsStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PredPosHorizAbsStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //gps_glitch_status_flag
        const matlab::data::TypedArray<bool> gps_glitch_status_flag_arr = arr["GpsGlitchStatusFlag"];
        msg->gps_glitch_status_flag = gps_glitch_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GpsGlitchStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GpsGlitchStatusFlag' is wrong type; expected a logical.");
    }
    try {
        //accel_error_status_flag
        const matlab::data::TypedArray<bool> accel_error_status_flag_arr = arr["AccelErrorStatusFlag"];
        msg->accel_error_status_flag = accel_error_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AccelErrorStatusFlag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AccelErrorStatusFlag' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_EstimatorStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::EstimatorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","AttitudeStatusFlag","VelocityHorizStatusFlag","VelocityVertStatusFlag","PosHorizRelStatusFlag","PosHorizAbsStatusFlag","PosVertAbsStatusFlag","PosVertAglStatusFlag","ConstPosModeStatusFlag","PredPosHorizRelStatusFlag","PredPosHorizAbsStatusFlag","GpsGlitchStatusFlag","AccelErrorStatusFlag"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/EstimatorStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // attitude_status_flag
    auto currentElement_attitude_status_flag = (msg + ctr)->attitude_status_flag;
    outArray[ctr]["AttitudeStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_attitude_status_flag));
    // velocity_horiz_status_flag
    auto currentElement_velocity_horiz_status_flag = (msg + ctr)->velocity_horiz_status_flag;
    outArray[ctr]["VelocityHorizStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_velocity_horiz_status_flag));
    // velocity_vert_status_flag
    auto currentElement_velocity_vert_status_flag = (msg + ctr)->velocity_vert_status_flag;
    outArray[ctr]["VelocityVertStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_velocity_vert_status_flag));
    // pos_horiz_rel_status_flag
    auto currentElement_pos_horiz_rel_status_flag = (msg + ctr)->pos_horiz_rel_status_flag;
    outArray[ctr]["PosHorizRelStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pos_horiz_rel_status_flag));
    // pos_horiz_abs_status_flag
    auto currentElement_pos_horiz_abs_status_flag = (msg + ctr)->pos_horiz_abs_status_flag;
    outArray[ctr]["PosHorizAbsStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pos_horiz_abs_status_flag));
    // pos_vert_abs_status_flag
    auto currentElement_pos_vert_abs_status_flag = (msg + ctr)->pos_vert_abs_status_flag;
    outArray[ctr]["PosVertAbsStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pos_vert_abs_status_flag));
    // pos_vert_agl_status_flag
    auto currentElement_pos_vert_agl_status_flag = (msg + ctr)->pos_vert_agl_status_flag;
    outArray[ctr]["PosVertAglStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pos_vert_agl_status_flag));
    // const_pos_mode_status_flag
    auto currentElement_const_pos_mode_status_flag = (msg + ctr)->const_pos_mode_status_flag;
    outArray[ctr]["ConstPosModeStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_const_pos_mode_status_flag));
    // pred_pos_horiz_rel_status_flag
    auto currentElement_pred_pos_horiz_rel_status_flag = (msg + ctr)->pred_pos_horiz_rel_status_flag;
    outArray[ctr]["PredPosHorizRelStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pred_pos_horiz_rel_status_flag));
    // pred_pos_horiz_abs_status_flag
    auto currentElement_pred_pos_horiz_abs_status_flag = (msg + ctr)->pred_pos_horiz_abs_status_flag;
    outArray[ctr]["PredPosHorizAbsStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_pred_pos_horiz_abs_status_flag));
    // gps_glitch_status_flag
    auto currentElement_gps_glitch_status_flag = (msg + ctr)->gps_glitch_status_flag;
    outArray[ctr]["GpsGlitchStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_gps_glitch_status_flag));
    // accel_error_status_flag
    auto currentElement_accel_error_status_flag = (msg + ctr)->accel_error_status_flag;
    outArray[ctr]["AccelErrorStatusFlag"] = factory.createScalar(static_cast<bool>(currentElement_accel_error_status_flag));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_EstimatorStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_EstimatorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_EstimatorStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::EstimatorStatus,mavros_msgs_msg_EstimatorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_EstimatorStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::EstimatorStatus,mavros_msgs::EstimatorStatus::ConstPtr,mavros_msgs_msg_EstimatorStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_EstimatorStatus_common, MATLABROSMsgInterface<mavros_msgs::EstimatorStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_EstimatorStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1