// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/OnboardComputerStatus
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
#include "mavros_msgs/OnboardComputerStatus.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_OnboardComputerStatus_common : public MATLABROSMsgInterface<mavros_msgs::OnboardComputerStatus> {
  public:
    virtual ~mavros_msgs_msg_OnboardComputerStatus_common(){}
    virtual void copy_from_struct(mavros_msgs::OnboardComputerStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::OnboardComputerStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_OnboardComputerStatus_common::copy_from_struct(mavros_msgs::OnboardComputerStatus* msg, const matlab::data::Struct& arr,
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
        //component
        const matlab::data::TypedArray<uint8_t> component_arr = arr["Component"];
        msg->component = component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Component' is wrong type; expected a uint8.");
    }
    try {
        //uptime
        const matlab::data::TypedArray<uint32_t> uptime_arr = arr["Uptime"];
        msg->uptime = uptime_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Uptime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Uptime' is wrong type; expected a uint32.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["Type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Type' is wrong type; expected a uint8.");
    }
    try {
        //cpu_cores
        const matlab::data::TypedArray<uint8_t> cpu_cores_arr = arr["CpuCores"];
        size_t nelem = 8;
        	std::copy(cpu_cores_arr.begin(), cpu_cores_arr.begin()+nelem, msg->cpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CpuCores' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CpuCores' is wrong type; expected a uint8.");
    }
    try {
        //cpu_combined
        const matlab::data::TypedArray<uint8_t> cpu_combined_arr = arr["CpuCombined"];
        size_t nelem = 10;
        	std::copy(cpu_combined_arr.begin(), cpu_combined_arr.begin()+nelem, msg->cpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CpuCombined' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CpuCombined' is wrong type; expected a uint8.");
    }
    try {
        //gpu_cores
        const matlab::data::TypedArray<uint8_t> gpu_cores_arr = arr["GpuCores"];
        size_t nelem = 4;
        	std::copy(gpu_cores_arr.begin(), gpu_cores_arr.begin()+nelem, msg->gpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GpuCores' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GpuCores' is wrong type; expected a uint8.");
    }
    try {
        //gpu_combined
        const matlab::data::TypedArray<uint8_t> gpu_combined_arr = arr["GpuCombined"];
        size_t nelem = 10;
        	std::copy(gpu_combined_arr.begin(), gpu_combined_arr.begin()+nelem, msg->gpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GpuCombined' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GpuCombined' is wrong type; expected a uint8.");
    }
    try {
        //temperature_board
        const matlab::data::TypedArray<int8_t> temperature_board_arr = arr["TemperatureBoard"];
        msg->temperature_board = temperature_board_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TemperatureBoard' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TemperatureBoard' is wrong type; expected a int8.");
    }
    try {
        //temperature_core
        const matlab::data::TypedArray<int8_t> temperature_core_arr = arr["TemperatureCore"];
        size_t nelem = 8;
        	std::copy(temperature_core_arr.begin(), temperature_core_arr.begin()+nelem, msg->temperature_core.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TemperatureCore' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TemperatureCore' is wrong type; expected a int8.");
    }
    try {
        //fan_speed
        const matlab::data::TypedArray<int16_t> fan_speed_arr = arr["FanSpeed"];
        size_t nelem = 4;
        	std::copy(fan_speed_arr.begin(), fan_speed_arr.begin()+nelem, msg->fan_speed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FanSpeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FanSpeed' is wrong type; expected a int16.");
    }
    try {
        //ram_usage
        const matlab::data::TypedArray<uint32_t> ram_usage_arr = arr["RamUsage"];
        msg->ram_usage = ram_usage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RamUsage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RamUsage' is wrong type; expected a uint32.");
    }
    try {
        //ram_total
        const matlab::data::TypedArray<uint32_t> ram_total_arr = arr["RamTotal"];
        msg->ram_total = ram_total_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RamTotal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RamTotal' is wrong type; expected a uint32.");
    }
    try {
        //storage_type
        const matlab::data::TypedArray<uint32_t> storage_type_arr = arr["StorageType"];
        size_t nelem = 4;
        	std::copy(storage_type_arr.begin(), storage_type_arr.begin()+nelem, msg->storage_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StorageType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StorageType' is wrong type; expected a uint32.");
    }
    try {
        //storage_usage
        const matlab::data::TypedArray<uint32_t> storage_usage_arr = arr["StorageUsage"];
        size_t nelem = 4;
        	std::copy(storage_usage_arr.begin(), storage_usage_arr.begin()+nelem, msg->storage_usage.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StorageUsage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StorageUsage' is wrong type; expected a uint32.");
    }
    try {
        //storage_total
        const matlab::data::TypedArray<uint32_t> storage_total_arr = arr["StorageTotal"];
        size_t nelem = 4;
        	std::copy(storage_total_arr.begin(), storage_total_arr.begin()+nelem, msg->storage_total.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StorageTotal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StorageTotal' is wrong type; expected a uint32.");
    }
    try {
        //link_type
        const matlab::data::TypedArray<uint32_t> link_type_arr = arr["LinkType"];
        size_t nelem = 6;
        	std::copy(link_type_arr.begin(), link_type_arr.begin()+nelem, msg->link_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinkType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinkType' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_rate
        const matlab::data::TypedArray<uint32_t> link_tx_rate_arr = arr["LinkTxRate"];
        size_t nelem = 6;
        	std::copy(link_tx_rate_arr.begin(), link_tx_rate_arr.begin()+nelem, msg->link_tx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinkTxRate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinkTxRate' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_rate
        const matlab::data::TypedArray<uint32_t> link_rx_rate_arr = arr["LinkRxRate"];
        size_t nelem = 6;
        	std::copy(link_rx_rate_arr.begin(), link_rx_rate_arr.begin()+nelem, msg->link_rx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinkRxRate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinkRxRate' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_max
        const matlab::data::TypedArray<uint32_t> link_tx_max_arr = arr["LinkTxMax"];
        size_t nelem = 6;
        	std::copy(link_tx_max_arr.begin(), link_tx_max_arr.begin()+nelem, msg->link_tx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinkTxMax' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinkTxMax' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_max
        const matlab::data::TypedArray<uint32_t> link_rx_max_arr = arr["LinkRxMax"];
        size_t nelem = 6;
        	std::copy(link_rx_max_arr.begin(), link_rx_max_arr.begin()+nelem, msg->link_rx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinkRxMax' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinkRxMax' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_OnboardComputerStatus_common::get_arr(MDFactory_T& factory, const mavros_msgs::OnboardComputerStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Component","Uptime","Type","CpuCores","CpuCombined","GpuCores","GpuCombined","TemperatureBoard","TemperatureCore","FanSpeed","RamUsage","RamTotal","StorageType","StorageUsage","StorageTotal","LinkType","LinkTxRate","LinkRxRate","LinkTxMax","LinkRxMax"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/OnboardComputerStatus");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // component
    auto currentElement_component = (msg + ctr)->component;
    outArray[ctr]["Component"] = factory.createScalar(currentElement_component);
    // uptime
    auto currentElement_uptime = (msg + ctr)->uptime;
    outArray[ctr]["Uptime"] = factory.createScalar(currentElement_uptime);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // cpu_cores
    auto currentElement_cpu_cores = (msg + ctr)->cpu_cores;
    outArray[ctr]["CpuCores"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_cpu_cores_type::const_iterator, uint8_t>({currentElement_cpu_cores.size(),1}, currentElement_cpu_cores.begin(), currentElement_cpu_cores.end());
    // cpu_combined
    auto currentElement_cpu_combined = (msg + ctr)->cpu_combined;
    outArray[ctr]["CpuCombined"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_cpu_combined_type::const_iterator, uint8_t>({currentElement_cpu_combined.size(),1}, currentElement_cpu_combined.begin(), currentElement_cpu_combined.end());
    // gpu_cores
    auto currentElement_gpu_cores = (msg + ctr)->gpu_cores;
    outArray[ctr]["GpuCores"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_gpu_cores_type::const_iterator, uint8_t>({currentElement_gpu_cores.size(),1}, currentElement_gpu_cores.begin(), currentElement_gpu_cores.end());
    // gpu_combined
    auto currentElement_gpu_combined = (msg + ctr)->gpu_combined;
    outArray[ctr]["GpuCombined"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_gpu_combined_type::const_iterator, uint8_t>({currentElement_gpu_combined.size(),1}, currentElement_gpu_combined.begin(), currentElement_gpu_combined.end());
    // temperature_board
    auto currentElement_temperature_board = (msg + ctr)->temperature_board;
    outArray[ctr]["TemperatureBoard"] = factory.createScalar(currentElement_temperature_board);
    // temperature_core
    auto currentElement_temperature_core = (msg + ctr)->temperature_core;
    outArray[ctr]["TemperatureCore"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_temperature_core_type::const_iterator, int8_t>({currentElement_temperature_core.size(),1}, currentElement_temperature_core.begin(), currentElement_temperature_core.end());
    // fan_speed
    auto currentElement_fan_speed = (msg + ctr)->fan_speed;
    outArray[ctr]["FanSpeed"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_fan_speed_type::const_iterator, int16_t>({currentElement_fan_speed.size(),1}, currentElement_fan_speed.begin(), currentElement_fan_speed.end());
    // ram_usage
    auto currentElement_ram_usage = (msg + ctr)->ram_usage;
    outArray[ctr]["RamUsage"] = factory.createScalar(currentElement_ram_usage);
    // ram_total
    auto currentElement_ram_total = (msg + ctr)->ram_total;
    outArray[ctr]["RamTotal"] = factory.createScalar(currentElement_ram_total);
    // storage_type
    auto currentElement_storage_type = (msg + ctr)->storage_type;
    outArray[ctr]["StorageType"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_type_type::const_iterator, uint32_t>({currentElement_storage_type.size(),1}, currentElement_storage_type.begin(), currentElement_storage_type.end());
    // storage_usage
    auto currentElement_storage_usage = (msg + ctr)->storage_usage;
    outArray[ctr]["StorageUsage"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_usage_type::const_iterator, uint32_t>({currentElement_storage_usage.size(),1}, currentElement_storage_usage.begin(), currentElement_storage_usage.end());
    // storage_total
    auto currentElement_storage_total = (msg + ctr)->storage_total;
    outArray[ctr]["StorageTotal"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_total_type::const_iterator, uint32_t>({currentElement_storage_total.size(),1}, currentElement_storage_total.begin(), currentElement_storage_total.end());
    // link_type
    auto currentElement_link_type = (msg + ctr)->link_type;
    outArray[ctr]["LinkType"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_type_type::const_iterator, uint32_t>({currentElement_link_type.size(),1}, currentElement_link_type.begin(), currentElement_link_type.end());
    // link_tx_rate
    auto currentElement_link_tx_rate = (msg + ctr)->link_tx_rate;
    outArray[ctr]["LinkTxRate"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_tx_rate_type::const_iterator, uint32_t>({currentElement_link_tx_rate.size(),1}, currentElement_link_tx_rate.begin(), currentElement_link_tx_rate.end());
    // link_rx_rate
    auto currentElement_link_rx_rate = (msg + ctr)->link_rx_rate;
    outArray[ctr]["LinkRxRate"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_rx_rate_type::const_iterator, uint32_t>({currentElement_link_rx_rate.size(),1}, currentElement_link_rx_rate.begin(), currentElement_link_rx_rate.end());
    // link_tx_max
    auto currentElement_link_tx_max = (msg + ctr)->link_tx_max;
    outArray[ctr]["LinkTxMax"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_tx_max_type::const_iterator, uint32_t>({currentElement_link_tx_max.size(),1}, currentElement_link_tx_max.begin(), currentElement_link_tx_max.end());
    // link_rx_max
    auto currentElement_link_rx_max = (msg + ctr)->link_rx_max;
    outArray[ctr]["LinkRxMax"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_rx_max_type::const_iterator, uint32_t>({currentElement_link_rx_max.size(),1}, currentElement_link_rx_max.begin(), currentElement_link_rx_max.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_OnboardComputerStatus_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_OnboardComputerStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_OnboardComputerStatus_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::OnboardComputerStatus,mavros_msgs_msg_OnboardComputerStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_OnboardComputerStatus_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::OnboardComputerStatus,mavros_msgs::OnboardComputerStatus::ConstPtr,mavros_msgs_msg_OnboardComputerStatus_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_OnboardComputerStatus_common, MATLABROSMsgInterface<mavros_msgs::OnboardComputerStatus>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_OnboardComputerStatus_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1