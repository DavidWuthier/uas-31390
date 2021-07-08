// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilSensor
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
#include "mavros_msgs/HilSensor.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HilSensor_common : public MATLABROSMsgInterface<mavros_msgs::HilSensor> {
  public:
    virtual ~mavros_msgs_msg_HilSensor_common(){}
    virtual void copy_from_struct(mavros_msgs::HilSensor* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HilSensor* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HilSensor_common::copy_from_struct(mavros_msgs::HilSensor* msg, const matlab::data::Struct& arr,
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
        //acc
        const matlab::data::StructArray acc_arr = arr["Acc"];
        static auto msgClassPtr_acc = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_acc->copy_from_struct(&msg->acc,acc_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Acc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Acc' is wrong type; expected a struct.");
    }
    try {
        //gyro
        const matlab::data::StructArray gyro_arr = arr["Gyro"];
        static auto msgClassPtr_gyro = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_gyro->copy_from_struct(&msg->gyro,gyro_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Gyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Gyro' is wrong type; expected a struct.");
    }
    try {
        //mag
        const matlab::data::StructArray mag_arr = arr["Mag"];
        static auto msgClassPtr_mag = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_mag->copy_from_struct(&msg->mag,mag_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mag' is wrong type; expected a struct.");
    }
    try {
        //abs_pressure
        const matlab::data::TypedArray<float> abs_pressure_arr = arr["AbsPressure"];
        msg->abs_pressure = abs_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AbsPressure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AbsPressure' is wrong type; expected a single.");
    }
    try {
        //diff_pressure
        const matlab::data::TypedArray<float> diff_pressure_arr = arr["DiffPressure"];
        msg->diff_pressure = diff_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DiffPressure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DiffPressure' is wrong type; expected a single.");
    }
    try {
        //pressure_alt
        const matlab::data::TypedArray<float> pressure_alt_arr = arr["PressureAlt"];
        msg->pressure_alt = pressure_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PressureAlt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PressureAlt' is wrong type; expected a single.");
    }
    try {
        //temperature
        const matlab::data::TypedArray<float> temperature_arr = arr["Temperature"];
        msg->temperature = temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Temperature' is wrong type; expected a single.");
    }
    try {
        //fields_updated
        const matlab::data::TypedArray<uint32_t> fields_updated_arr = arr["FieldsUpdated"];
        msg->fields_updated = fields_updated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FieldsUpdated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FieldsUpdated' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HilSensor_common::get_arr(MDFactory_T& factory, const mavros_msgs::HilSensor* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Acc","Gyro","Mag","AbsPressure","DiffPressure","PressureAlt","Temperature","FieldsUpdated"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HilSensor");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // acc
    auto currentElement_acc = (msg + ctr)->acc;
    static auto msgClassPtr_acc = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["Acc"] = msgClassPtr_acc->get_arr(factory, &currentElement_acc, loader);
    // gyro
    auto currentElement_gyro = (msg + ctr)->gyro;
    static auto msgClassPtr_gyro = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["Gyro"] = msgClassPtr_gyro->get_arr(factory, &currentElement_gyro, loader);
    // mag
    auto currentElement_mag = (msg + ctr)->mag;
    static auto msgClassPtr_mag = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["Mag"] = msgClassPtr_mag->get_arr(factory, &currentElement_mag, loader);
    // abs_pressure
    auto currentElement_abs_pressure = (msg + ctr)->abs_pressure;
    outArray[ctr]["AbsPressure"] = factory.createScalar(currentElement_abs_pressure);
    // diff_pressure
    auto currentElement_diff_pressure = (msg + ctr)->diff_pressure;
    outArray[ctr]["DiffPressure"] = factory.createScalar(currentElement_diff_pressure);
    // pressure_alt
    auto currentElement_pressure_alt = (msg + ctr)->pressure_alt;
    outArray[ctr]["PressureAlt"] = factory.createScalar(currentElement_pressure_alt);
    // temperature
    auto currentElement_temperature = (msg + ctr)->temperature;
    outArray[ctr]["Temperature"] = factory.createScalar(currentElement_temperature);
    // fields_updated
    auto currentElement_fields_updated = (msg + ctr)->fields_updated;
    outArray[ctr]["FieldsUpdated"] = factory.createScalar(currentElement_fields_updated);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HilSensor_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HilSensor_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HilSensor_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HilSensor,mavros_msgs_msg_HilSensor_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HilSensor_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HilSensor,mavros_msgs::HilSensor::ConstPtr,mavros_msgs_msg_HilSensor_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HilSensor_common, MATLABROSMsgInterface<mavros_msgs::HilSensor>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HilSensor_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1