// Generated by gencpp from file mavros_msgs/GPSRTK.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_GPSRTK_H
#define MAVROS_MSGS_MESSAGE_GPSRTK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct GPSRTK_
{
  typedef GPSRTK_<ContainerAllocator> Type;

  GPSRTK_()
    : header()
    , rtk_receiver_id(0)
    , wn(0)
    , tow(0)
    , rtk_health(0)
    , rtk_rate(0)
    , nsats(0)
    , baseline_a(0)
    , baseline_b(0)
    , baseline_c(0)
    , accuracy(0)
    , iar_num_hypotheses(0)  {
    }
  GPSRTK_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rtk_receiver_id(0)
    , wn(0)
    , tow(0)
    , rtk_health(0)
    , rtk_rate(0)
    , nsats(0)
    , baseline_a(0)
    , baseline_b(0)
    , baseline_c(0)
    , accuracy(0)
    , iar_num_hypotheses(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _rtk_receiver_id_type;
  _rtk_receiver_id_type rtk_receiver_id;

   typedef int16_t _wn_type;
  _wn_type wn;

   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef uint8_t _rtk_health_type;
  _rtk_health_type rtk_health;

   typedef uint8_t _rtk_rate_type;
  _rtk_rate_type rtk_rate;

   typedef uint8_t _nsats_type;
  _nsats_type nsats;

   typedef int32_t _baseline_a_type;
  _baseline_a_type baseline_a;

   typedef int32_t _baseline_b_type;
  _baseline_b_type baseline_b;

   typedef int32_t _baseline_c_type;
  _baseline_c_type baseline_c;

   typedef uint32_t _accuracy_type;
  _accuracy_type accuracy;

   typedef int32_t _iar_num_hypotheses_type;
  _iar_num_hypotheses_type iar_num_hypotheses;





  typedef boost::shared_ptr< ::mavros_msgs::GPSRTK_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::GPSRTK_<ContainerAllocator> const> ConstPtr;

}; // struct GPSRTK_

typedef ::mavros_msgs::GPSRTK_<std::allocator<void> > GPSRTK;

typedef boost::shared_ptr< ::mavros_msgs::GPSRTK > GPSRTKPtr;
typedef boost::shared_ptr< ::mavros_msgs::GPSRTK const> GPSRTKConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::GPSRTK_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::GPSRTK_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/usr/local/MATLAB/R2021a/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg'], 'actionlib': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/cftemp3/uas-31390/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg'], 'geometry_msgs': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/usr/local/MATLAB/R2021a/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg'], 'actionlib_msgs': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GPSRTK_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GPSRTK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GPSRTK_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab2651768aa6464b60b7bc8ae031e017";
  }

  static const char* value(const ::mavros_msgs::GPSRTK_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab2651768aa6464bULL;
  static const uint64_t static_value2 = 0x60b7bc8ae031e017ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/GPSRTK";
  }

  static const char* value(const ::mavros_msgs::GPSRTK_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# FCU GPS RTK message for the gps_status plugin\n"
"# A copy of <a href=\"https://mavlink.io/en/messages/common.html#GPS_RTK\">mavlink GPS_RTK message</a>\n"
"\n"
"std_msgs/Header header\n"
"\n"
"uint8 rtk_receiver_id      # Identification of connected RTK receiver.\n"
"int16 wn                   # GPS Week Number of last baseline.\n"
"uint32 tow                 # [ms] GPS Time of Week of last baseline.\n"
"uint8 rtk_health           # GPS-specific health report for RTK data.\n"
"uint8 rtk_rate             # [Hz] Rate of baseline messages being received by GPS.\n"
"uint8 nsats                # Current number of sats used for RTK calculation.\n"
"int32 baseline_a           # [mm] Current baseline in ECEF x or NED north component, depends on header.frame_id.\n"
"int32 baseline_b           # [mm] Current baseline in ECEF y or NED east component, depends on header.frame_id.\n"
"int32 baseline_c           # [mm] Current baseline in ECEF z or NED down component, depends on header.frame_id.\n"
"uint32 accuracy            # Current estimate of baseline accuracy.\n"
"int32 iar_num_hypotheses   # Current number of integer ambiguity hypotheses.\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::GPSRTK_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rtk_receiver_id);
      stream.next(m.wn);
      stream.next(m.tow);
      stream.next(m.rtk_health);
      stream.next(m.rtk_rate);
      stream.next(m.nsats);
      stream.next(m.baseline_a);
      stream.next(m.baseline_b);
      stream.next(m.baseline_c);
      stream.next(m.accuracy);
      stream.next(m.iar_num_hypotheses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GPSRTK_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::GPSRTK_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::GPSRTK_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rtk_receiver_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rtk_receiver_id);
    s << indent << "wn: ";
    Printer<int16_t>::stream(s, indent + "  ", v.wn);
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "rtk_health: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rtk_health);
    s << indent << "rtk_rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rtk_rate);
    s << indent << "nsats: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nsats);
    s << indent << "baseline_a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.baseline_a);
    s << indent << "baseline_b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.baseline_b);
    s << indent << "baseline_c: ";
    Printer<int32_t>::stream(s, indent + "  ", v.baseline_c);
    s << indent << "accuracy: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.accuracy);
    s << indent << "iar_num_hypotheses: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iar_num_hypotheses);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_GPSRTK_H
