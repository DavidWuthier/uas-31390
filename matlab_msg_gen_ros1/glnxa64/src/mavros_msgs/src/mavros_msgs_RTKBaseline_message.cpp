// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/RTKBaseline
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
#include "mavros_msgs/RTKBaseline.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_RTKBaseline_common : public MATLABROSMsgInterface<mavros_msgs::RTKBaseline> {
  public:
    virtual ~mavros_msgs_msg_RTKBaseline_common(){}
    virtual void copy_from_struct(mavros_msgs::RTKBaseline* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::RTKBaseline* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_RTKBaseline_common::copy_from_struct(mavros_msgs::RTKBaseline* msg, const matlab::data::Struct& arr,
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
        //time_last_baseline_ms
        const matlab::data::TypedArray<uint32_t> time_last_baseline_ms_arr = arr["TimeLastBaselineMs"];
        msg->time_last_baseline_ms = time_last_baseline_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TimeLastBaselineMs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TimeLastBaselineMs' is wrong type; expected a uint32.");
    }
    try {
        //rtk_receiver_id
        const matlab::data::TypedArray<uint8_t> rtk_receiver_id_arr = arr["RtkReceiverId"];
        msg->rtk_receiver_id = rtk_receiver_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RtkReceiverId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RtkReceiverId' is wrong type; expected a uint8.");
    }
    try {
        //wn
        const matlab::data::TypedArray<uint16_t> wn_arr = arr["Wn"];
        msg->wn = wn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Wn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Wn' is wrong type; expected a uint16.");
    }
    try {
        //tow
        const matlab::data::TypedArray<uint32_t> tow_arr = arr["Tow"];
        msg->tow = tow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Tow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Tow' is wrong type; expected a uint32.");
    }
    try {
        //rtk_health
        const matlab::data::TypedArray<uint8_t> rtk_health_arr = arr["RtkHealth"];
        msg->rtk_health = rtk_health_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RtkHealth' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RtkHealth' is wrong type; expected a uint8.");
    }
    try {
        //rtk_rate
        const matlab::data::TypedArray<uint8_t> rtk_rate_arr = arr["RtkRate"];
        msg->rtk_rate = rtk_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RtkRate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RtkRate' is wrong type; expected a uint8.");
    }
    try {
        //nsats
        const matlab::data::TypedArray<uint8_t> nsats_arr = arr["Nsats"];
        msg->nsats = nsats_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Nsats' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Nsats' is wrong type; expected a uint8.");
    }
    try {
        //baseline_coords_type
        const matlab::data::TypedArray<uint8_t> baseline_coords_type_arr = arr["BaselineCoordsType"];
        msg->baseline_coords_type = baseline_coords_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineCoordsType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineCoordsType' is wrong type; expected a uint8.");
    }
    try {
        //baseline_a_mm
        const matlab::data::TypedArray<int32_t> baseline_a_mm_arr = arr["BaselineAMm"];
        msg->baseline_a_mm = baseline_a_mm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineAMm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineAMm' is wrong type; expected a int32.");
    }
    try {
        //baseline_b_mm
        const matlab::data::TypedArray<int32_t> baseline_b_mm_arr = arr["BaselineBMm"];
        msg->baseline_b_mm = baseline_b_mm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineBMm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineBMm' is wrong type; expected a int32.");
    }
    try {
        //baseline_c_mm
        const matlab::data::TypedArray<int32_t> baseline_c_mm_arr = arr["BaselineCMm"];
        msg->baseline_c_mm = baseline_c_mm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineCMm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineCMm' is wrong type; expected a int32.");
    }
    try {
        //accuracy
        const matlab::data::TypedArray<uint32_t> accuracy_arr = arr["Accuracy"];
        msg->accuracy = accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Accuracy' is wrong type; expected a uint32.");
    }
    try {
        //iar_num_hypotheses
        const matlab::data::TypedArray<int32_t> iar_num_hypotheses_arr = arr["IarNumHypotheses"];
        msg->iar_num_hypotheses = iar_num_hypotheses_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IarNumHypotheses' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IarNumHypotheses' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_RTKBaseline_common::get_arr(MDFactory_T& factory, const mavros_msgs::RTKBaseline* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","TimeLastBaselineMs","RtkReceiverId","Wn","Tow","RtkHealth","RtkRate","Nsats","BaselineCoordsType","RTKBASELINECOORDINATESYSTEMECEF","RTKBASELINECOORDINATESYSTEMNED","BaselineAMm","BaselineBMm","BaselineCMm","Accuracy","IarNumHypotheses"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/RTKBaseline");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // time_last_baseline_ms
    auto currentElement_time_last_baseline_ms = (msg + ctr)->time_last_baseline_ms;
    outArray[ctr]["TimeLastBaselineMs"] = factory.createScalar(currentElement_time_last_baseline_ms);
    // rtk_receiver_id
    auto currentElement_rtk_receiver_id = (msg + ctr)->rtk_receiver_id;
    outArray[ctr]["RtkReceiverId"] = factory.createScalar(currentElement_rtk_receiver_id);
    // wn
    auto currentElement_wn = (msg + ctr)->wn;
    outArray[ctr]["Wn"] = factory.createScalar(currentElement_wn);
    // tow
    auto currentElement_tow = (msg + ctr)->tow;
    outArray[ctr]["Tow"] = factory.createScalar(currentElement_tow);
    // rtk_health
    auto currentElement_rtk_health = (msg + ctr)->rtk_health;
    outArray[ctr]["RtkHealth"] = factory.createScalar(currentElement_rtk_health);
    // rtk_rate
    auto currentElement_rtk_rate = (msg + ctr)->rtk_rate;
    outArray[ctr]["RtkRate"] = factory.createScalar(currentElement_rtk_rate);
    // nsats
    auto currentElement_nsats = (msg + ctr)->nsats;
    outArray[ctr]["Nsats"] = factory.createScalar(currentElement_nsats);
    // baseline_coords_type
    auto currentElement_baseline_coords_type = (msg + ctr)->baseline_coords_type;
    outArray[ctr]["BaselineCoordsType"] = factory.createScalar(currentElement_baseline_coords_type);
    // RTK_BASELINE_COORDINATE_SYSTEM_ECEF
    auto currentElement_RTK_BASELINE_COORDINATE_SYSTEM_ECEF = (msg + ctr)->RTK_BASELINE_COORDINATE_SYSTEM_ECEF;
    outArray[ctr]["RTKBASELINECOORDINATESYSTEMECEF"] = factory.createScalar(static_cast<uint8_t>(currentElement_RTK_BASELINE_COORDINATE_SYSTEM_ECEF));
    // RTK_BASELINE_COORDINATE_SYSTEM_NED
    auto currentElement_RTK_BASELINE_COORDINATE_SYSTEM_NED = (msg + ctr)->RTK_BASELINE_COORDINATE_SYSTEM_NED;
    outArray[ctr]["RTKBASELINECOORDINATESYSTEMNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_RTK_BASELINE_COORDINATE_SYSTEM_NED));
    // baseline_a_mm
    auto currentElement_baseline_a_mm = (msg + ctr)->baseline_a_mm;
    outArray[ctr]["BaselineAMm"] = factory.createScalar(currentElement_baseline_a_mm);
    // baseline_b_mm
    auto currentElement_baseline_b_mm = (msg + ctr)->baseline_b_mm;
    outArray[ctr]["BaselineBMm"] = factory.createScalar(currentElement_baseline_b_mm);
    // baseline_c_mm
    auto currentElement_baseline_c_mm = (msg + ctr)->baseline_c_mm;
    outArray[ctr]["BaselineCMm"] = factory.createScalar(currentElement_baseline_c_mm);
    // accuracy
    auto currentElement_accuracy = (msg + ctr)->accuracy;
    outArray[ctr]["Accuracy"] = factory.createScalar(currentElement_accuracy);
    // iar_num_hypotheses
    auto currentElement_iar_num_hypotheses = (msg + ctr)->iar_num_hypotheses;
    outArray[ctr]["IarNumHypotheses"] = factory.createScalar(currentElement_iar_num_hypotheses);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_RTKBaseline_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_RTKBaseline_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_RTKBaseline_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::RTKBaseline,mavros_msgs_msg_RTKBaseline_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_RTKBaseline_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::RTKBaseline,mavros_msgs::RTKBaseline::ConstPtr,mavros_msgs_msg_RTKBaseline_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_RTKBaseline_common, MATLABROSMsgInterface<mavros_msgs::RTKBaseline>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_RTKBaseline_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1