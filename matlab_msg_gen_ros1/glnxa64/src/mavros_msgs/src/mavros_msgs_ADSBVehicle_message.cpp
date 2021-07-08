// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ADSBVehicle
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
#include "mavros_msgs/ADSBVehicle.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_ADSBVehicle_common : public MATLABROSMsgInterface<mavros_msgs::ADSBVehicle> {
  public:
    virtual ~mavros_msgs_msg_ADSBVehicle_common(){}
    virtual void copy_from_struct(mavros_msgs::ADSBVehicle* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ADSBVehicle* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_ADSBVehicle_common::copy_from_struct(mavros_msgs::ADSBVehicle* msg, const matlab::data::Struct& arr,
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
        //ICAO_address
        const matlab::data::TypedArray<uint32_t> ICAO_address_arr = arr["ICAOAddress"];
        msg->ICAO_address = ICAO_address_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ICAOAddress' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ICAOAddress' is wrong type; expected a uint32.");
    }
    try {
        //callsign
        const matlab::data::CharArray callsign_arr = arr["Callsign"];
        msg->callsign = callsign_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Callsign' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Callsign' is wrong type; expected a string.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<double> latitude_arr = arr["Latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Latitude' is wrong type; expected a double.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<double> longitude_arr = arr["Longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Longitude' is wrong type; expected a double.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["Altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Altitude' is wrong type; expected a single.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["Heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Heading' is wrong type; expected a single.");
    }
    try {
        //hor_velocity
        const matlab::data::TypedArray<float> hor_velocity_arr = arr["HorVelocity"];
        msg->hor_velocity = hor_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'HorVelocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'HorVelocity' is wrong type; expected a single.");
    }
    try {
        //ver_velocity
        const matlab::data::TypedArray<float> ver_velocity_arr = arr["VerVelocity"];
        msg->ver_velocity = ver_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VerVelocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VerVelocity' is wrong type; expected a single.");
    }
    try {
        //altitude_type
        const matlab::data::TypedArray<uint8_t> altitude_type_arr = arr["AltitudeType"];
        msg->altitude_type = altitude_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AltitudeType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AltitudeType' is wrong type; expected a uint8.");
    }
    try {
        //emitter_type
        const matlab::data::TypedArray<uint8_t> emitter_type_arr = arr["EmitterType"];
        msg->emitter_type = emitter_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'EmitterType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'EmitterType' is wrong type; expected a uint8.");
    }
    try {
        //tslc
        const matlab::data::StructArray tslc_arr = arr["Tslc"];
        static auto msgClassPtr_tslc = loader->createInstance<MATLABROSMsgInterface<ros::Duration>>("ros_msg_Duration_common");
        msgClassPtr_tslc->copy_from_struct(&msg->tslc,tslc_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Tslc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Tslc' is wrong type; expected a struct.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint16_t> flags_arr = arr["Flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Flags' is wrong type; expected a uint16.");
    }
    try {
        //squawk
        const matlab::data::TypedArray<uint16_t> squawk_arr = arr["Squawk"];
        msg->squawk = squawk_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Squawk' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Squawk' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_ADSBVehicle_common::get_arr(MDFactory_T& factory, const mavros_msgs::ADSBVehicle* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","ALTPRESSUREQNH","ALTGEOMETRIC","EMITTERNOINFO","EMITTERLIGHT","EMITTERSMALL","EMITTERLARGE","EMITTERHIGHVORTEXLARGE","EMITTERHEAVY","EMITTERHIGHLYMANUV","EMITTERROTOCRAFT","EMITTERUNASSIGNED","EMITTERGLIDER","EMITTERLIGHTERAIR","EMITTERPARACHUTE","EMITTERULTRALIGHT","EMITTERUNASSIGNED2","EMITTERUAV","EMITTERSPACE","EMITTERUNASSGINED3","EMITTEREMERGENCYSURFACE","EMITTERSERVICESURFACE","EMITTERPOINTOBSTACLE","FLAGVALIDCOORDS","FLAGVALIDALTITUDE","FLAGVALIDHEADING","FLAGVALIDVELOCITY","FLAGVALIDCALLSIGN","FLAGVALIDSQUAWK","FLAGSIMULATED","FLAGVERTICALVELOCITYVALID","FLAGBAROVALID","FLAGSOURCEUAT","Header","ICAOAddress","Callsign","Latitude","Longitude","Altitude","Heading","HorVelocity","VerVelocity","AltitudeType","EmitterType","Tslc","Flags","Squawk"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/ADSBVehicle");
    // ALT_PRESSURE_QNH
    auto currentElement_ALT_PRESSURE_QNH = (msg + ctr)->ALT_PRESSURE_QNH;
    outArray[ctr]["ALTPRESSUREQNH"] = factory.createScalar(static_cast<uint8_t>(currentElement_ALT_PRESSURE_QNH));
    // ALT_GEOMETRIC
    auto currentElement_ALT_GEOMETRIC = (msg + ctr)->ALT_GEOMETRIC;
    outArray[ctr]["ALTGEOMETRIC"] = factory.createScalar(static_cast<uint8_t>(currentElement_ALT_GEOMETRIC));
    // EMITTER_NO_INFO
    auto currentElement_EMITTER_NO_INFO = (msg + ctr)->EMITTER_NO_INFO;
    outArray[ctr]["EMITTERNOINFO"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_NO_INFO));
    // EMITTER_LIGHT
    auto currentElement_EMITTER_LIGHT = (msg + ctr)->EMITTER_LIGHT;
    outArray[ctr]["EMITTERLIGHT"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_LIGHT));
    // EMITTER_SMALL
    auto currentElement_EMITTER_SMALL = (msg + ctr)->EMITTER_SMALL;
    outArray[ctr]["EMITTERSMALL"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_SMALL));
    // EMITTER_LARGE
    auto currentElement_EMITTER_LARGE = (msg + ctr)->EMITTER_LARGE;
    outArray[ctr]["EMITTERLARGE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_LARGE));
    // EMITTER_HIGH_VORTEX_LARGE
    auto currentElement_EMITTER_HIGH_VORTEX_LARGE = (msg + ctr)->EMITTER_HIGH_VORTEX_LARGE;
    outArray[ctr]["EMITTERHIGHVORTEXLARGE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_HIGH_VORTEX_LARGE));
    // EMITTER_HEAVY
    auto currentElement_EMITTER_HEAVY = (msg + ctr)->EMITTER_HEAVY;
    outArray[ctr]["EMITTERHEAVY"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_HEAVY));
    // EMITTER_HIGHLY_MANUV
    auto currentElement_EMITTER_HIGHLY_MANUV = (msg + ctr)->EMITTER_HIGHLY_MANUV;
    outArray[ctr]["EMITTERHIGHLYMANUV"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_HIGHLY_MANUV));
    // EMITTER_ROTOCRAFT
    auto currentElement_EMITTER_ROTOCRAFT = (msg + ctr)->EMITTER_ROTOCRAFT;
    outArray[ctr]["EMITTERROTOCRAFT"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_ROTOCRAFT));
    // EMITTER_UNASSIGNED
    auto currentElement_EMITTER_UNASSIGNED = (msg + ctr)->EMITTER_UNASSIGNED;
    outArray[ctr]["EMITTERUNASSIGNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_UNASSIGNED));
    // EMITTER_GLIDER
    auto currentElement_EMITTER_GLIDER = (msg + ctr)->EMITTER_GLIDER;
    outArray[ctr]["EMITTERGLIDER"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_GLIDER));
    // EMITTER_LIGHTER_AIR
    auto currentElement_EMITTER_LIGHTER_AIR = (msg + ctr)->EMITTER_LIGHTER_AIR;
    outArray[ctr]["EMITTERLIGHTERAIR"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_LIGHTER_AIR));
    // EMITTER_PARACHUTE
    auto currentElement_EMITTER_PARACHUTE = (msg + ctr)->EMITTER_PARACHUTE;
    outArray[ctr]["EMITTERPARACHUTE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_PARACHUTE));
    // EMITTER_ULTRA_LIGHT
    auto currentElement_EMITTER_ULTRA_LIGHT = (msg + ctr)->EMITTER_ULTRA_LIGHT;
    outArray[ctr]["EMITTERULTRALIGHT"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_ULTRA_LIGHT));
    // EMITTER_UNASSIGNED2
    auto currentElement_EMITTER_UNASSIGNED2 = (msg + ctr)->EMITTER_UNASSIGNED2;
    outArray[ctr]["EMITTERUNASSIGNED2"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_UNASSIGNED2));
    // EMITTER_UAV
    auto currentElement_EMITTER_UAV = (msg + ctr)->EMITTER_UAV;
    outArray[ctr]["EMITTERUAV"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_UAV));
    // EMITTER_SPACE
    auto currentElement_EMITTER_SPACE = (msg + ctr)->EMITTER_SPACE;
    outArray[ctr]["EMITTERSPACE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_SPACE));
    // EMITTER_UNASSGINED3
    auto currentElement_EMITTER_UNASSGINED3 = (msg + ctr)->EMITTER_UNASSGINED3;
    outArray[ctr]["EMITTERUNASSGINED3"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_UNASSGINED3));
    // EMITTER_EMERGENCY_SURFACE
    auto currentElement_EMITTER_EMERGENCY_SURFACE = (msg + ctr)->EMITTER_EMERGENCY_SURFACE;
    outArray[ctr]["EMITTEREMERGENCYSURFACE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_EMERGENCY_SURFACE));
    // EMITTER_SERVICE_SURFACE
    auto currentElement_EMITTER_SERVICE_SURFACE = (msg + ctr)->EMITTER_SERVICE_SURFACE;
    outArray[ctr]["EMITTERSERVICESURFACE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_SERVICE_SURFACE));
    // EMITTER_POINT_OBSTACLE
    auto currentElement_EMITTER_POINT_OBSTACLE = (msg + ctr)->EMITTER_POINT_OBSTACLE;
    outArray[ctr]["EMITTERPOINTOBSTACLE"] = factory.createScalar(static_cast<uint8_t>(currentElement_EMITTER_POINT_OBSTACLE));
    // FLAG_VALID_COORDS
    auto currentElement_FLAG_VALID_COORDS = (msg + ctr)->FLAG_VALID_COORDS;
    outArray[ctr]["FLAGVALIDCOORDS"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_COORDS));
    // FLAG_VALID_ALTITUDE
    auto currentElement_FLAG_VALID_ALTITUDE = (msg + ctr)->FLAG_VALID_ALTITUDE;
    outArray[ctr]["FLAGVALIDALTITUDE"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_ALTITUDE));
    // FLAG_VALID_HEADING
    auto currentElement_FLAG_VALID_HEADING = (msg + ctr)->FLAG_VALID_HEADING;
    outArray[ctr]["FLAGVALIDHEADING"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_HEADING));
    // FLAG_VALID_VELOCITY
    auto currentElement_FLAG_VALID_VELOCITY = (msg + ctr)->FLAG_VALID_VELOCITY;
    outArray[ctr]["FLAGVALIDVELOCITY"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_VELOCITY));
    // FLAG_VALID_CALLSIGN
    auto currentElement_FLAG_VALID_CALLSIGN = (msg + ctr)->FLAG_VALID_CALLSIGN;
    outArray[ctr]["FLAGVALIDCALLSIGN"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_CALLSIGN));
    // FLAG_VALID_SQUAWK
    auto currentElement_FLAG_VALID_SQUAWK = (msg + ctr)->FLAG_VALID_SQUAWK;
    outArray[ctr]["FLAGVALIDSQUAWK"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VALID_SQUAWK));
    // FLAG_SIMULATED
    auto currentElement_FLAG_SIMULATED = (msg + ctr)->FLAG_SIMULATED;
    outArray[ctr]["FLAGSIMULATED"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_SIMULATED));
    // FLAG_VERTICAL_VELOCITY_VALID
    auto currentElement_FLAG_VERTICAL_VELOCITY_VALID = (msg + ctr)->FLAG_VERTICAL_VELOCITY_VALID;
    outArray[ctr]["FLAGVERTICALVELOCITYVALID"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_VERTICAL_VELOCITY_VALID));
    // FLAG_BARO_VALID
    auto currentElement_FLAG_BARO_VALID = (msg + ctr)->FLAG_BARO_VALID;
    outArray[ctr]["FLAGBAROVALID"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_BARO_VALID));
    // FLAG_SOURCE_UAT
    auto currentElement_FLAG_SOURCE_UAT = (msg + ctr)->FLAG_SOURCE_UAT;
    outArray[ctr]["FLAGSOURCEUAT"] = factory.createScalar(static_cast<uint16_t>(currentElement_FLAG_SOURCE_UAT));
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // ICAO_address
    auto currentElement_ICAO_address = (msg + ctr)->ICAO_address;
    outArray[ctr]["ICAOAddress"] = factory.createScalar(currentElement_ICAO_address);
    // callsign
    auto currentElement_callsign = (msg + ctr)->callsign;
    outArray[ctr]["Callsign"] = factory.createCharArray(currentElement_callsign);
    // latitude
    auto currentElement_latitude = (msg + ctr)->latitude;
    outArray[ctr]["Latitude"] = factory.createScalar(currentElement_latitude);
    // longitude
    auto currentElement_longitude = (msg + ctr)->longitude;
    outArray[ctr]["Longitude"] = factory.createScalar(currentElement_longitude);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["Altitude"] = factory.createScalar(currentElement_altitude);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["Heading"] = factory.createScalar(currentElement_heading);
    // hor_velocity
    auto currentElement_hor_velocity = (msg + ctr)->hor_velocity;
    outArray[ctr]["HorVelocity"] = factory.createScalar(currentElement_hor_velocity);
    // ver_velocity
    auto currentElement_ver_velocity = (msg + ctr)->ver_velocity;
    outArray[ctr]["VerVelocity"] = factory.createScalar(currentElement_ver_velocity);
    // altitude_type
    auto currentElement_altitude_type = (msg + ctr)->altitude_type;
    outArray[ctr]["AltitudeType"] = factory.createScalar(currentElement_altitude_type);
    // emitter_type
    auto currentElement_emitter_type = (msg + ctr)->emitter_type;
    outArray[ctr]["EmitterType"] = factory.createScalar(currentElement_emitter_type);
    // tslc
    auto currentElement_tslc = (msg + ctr)->tslc;
    static auto msgClassPtr_tslc = loader->createInstance<MATLABROSMsgInterface<ros::Duration>>("ros_msg_Duration_common");
    outArray[ctr]["Tslc"] = msgClassPtr_tslc->get_arr(factory, &currentElement_tslc, loader);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["Flags"] = factory.createScalar(currentElement_flags);
    // squawk
    auto currentElement_squawk = (msg + ctr)->squawk;
    outArray[ctr]["Squawk"] = factory.createScalar(currentElement_squawk);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_ADSBVehicle_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_ADSBVehicle_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_ADSBVehicle_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::ADSBVehicle,mavros_msgs_msg_ADSBVehicle_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_ADSBVehicle_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::ADSBVehicle,mavros_msgs::ADSBVehicle::ConstPtr,mavros_msgs_msg_ADSBVehicle_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_ADSBVehicle_common, MATLABROSMsgInterface<mavros_msgs::ADSBVehicle>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_ADSBVehicle_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1