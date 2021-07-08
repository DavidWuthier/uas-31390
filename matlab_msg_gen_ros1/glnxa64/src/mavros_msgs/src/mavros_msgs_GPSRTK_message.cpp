// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/GPSRTK
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
#include "mavros_msgs/GPSRTK.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_GPSRTK_common : public MATLABROSMsgInterface<mavros_msgs::GPSRTK> {
  public:
    virtual ~mavros_msgs_msg_GPSRTK_common(){}
    virtual void copy_from_struct(mavros_msgs::GPSRTK* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::GPSRTK* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_GPSRTK_common::copy_from_struct(mavros_msgs::GPSRTK* msg, const matlab::data::Struct& arr,
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
        const matlab::data::TypedArray<int16_t> wn_arr = arr["Wn"];
        msg->wn = wn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Wn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Wn' is wrong type; expected a int16.");
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
        //baseline_a
        const matlab::data::TypedArray<int32_t> baseline_a_arr = arr["BaselineA"];
        msg->baseline_a = baseline_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineA' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineA' is wrong type; expected a int32.");
    }
    try {
        //baseline_b
        const matlab::data::TypedArray<int32_t> baseline_b_arr = arr["BaselineB"];
        msg->baseline_b = baseline_b_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineB' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineB' is wrong type; expected a int32.");
    }
    try {
        //baseline_c
        const matlab::data::TypedArray<int32_t> baseline_c_arr = arr["BaselineC"];
        msg->baseline_c = baseline_c_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaselineC' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaselineC' is wrong type; expected a int32.");
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
  MDArray_T mavros_msgs_msg_GPSRTK_common::get_arr(MDFactory_T& factory, const mavros_msgs::GPSRTK* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","RtkReceiverId","Wn","Tow","RtkHealth","RtkRate","Nsats","BaselineA","BaselineB","BaselineC","Accuracy","IarNumHypotheses"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/GPSRTK");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
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
    // baseline_a
    auto currentElement_baseline_a = (msg + ctr)->baseline_a;
    outArray[ctr]["BaselineA"] = factory.createScalar(currentElement_baseline_a);
    // baseline_b
    auto currentElement_baseline_b = (msg + ctr)->baseline_b;
    outArray[ctr]["BaselineB"] = factory.createScalar(currentElement_baseline_b);
    // baseline_c
    auto currentElement_baseline_c = (msg + ctr)->baseline_c;
    outArray[ctr]["BaselineC"] = factory.createScalar(currentElement_baseline_c);
    // accuracy
    auto currentElement_accuracy = (msg + ctr)->accuracy;
    outArray[ctr]["Accuracy"] = factory.createScalar(currentElement_accuracy);
    // iar_num_hypotheses
    auto currentElement_iar_num_hypotheses = (msg + ctr)->iar_num_hypotheses;
    outArray[ctr]["IarNumHypotheses"] = factory.createScalar(currentElement_iar_num_hypotheses);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_GPSRTK_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_GPSRTK_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_GPSRTK_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::GPSRTK,mavros_msgs_msg_GPSRTK_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_GPSRTK_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::GPSRTK,mavros_msgs::GPSRTK::ConstPtr,mavros_msgs_msg_GPSRTK_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_GPSRTK_common, MATLABROSMsgInterface<mavros_msgs::GPSRTK>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_GPSRTK_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1