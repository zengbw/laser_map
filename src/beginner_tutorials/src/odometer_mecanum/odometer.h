// Generated by gencpp from file odometer_mecanum/odometer.msg
// DO NOT EDIT!


#ifndef ODOMETER_MECANUM_MESSAGE_ODOMETER_H
#define ODOMETER_MECANUM_MESSAGE_ODOMETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include "wheels_posi.h"
#include "wheels_vel.h"
#include "wheels_vel.h"

namespace odometer_mecanum
{
template <class ContainerAllocator>
struct odometer_
{
  typedef odometer_<ContainerAllocator> Type;

  odometer_()
    : header()
    , cycle(0)
    , x(0.0)
    , y(0.0)
    , angle(0.0)
    , wheels()
    , lv()
    , gv()  {
    }
  odometer_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cycle(0)
    , x(0.0)
    , y(0.0)
    , angle(0.0)
    , wheels(_alloc)
    , lv(_alloc)
    , gv(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _cycle_type;
  _cycle_type cycle;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _angle_type;
  _angle_type angle;

   typedef  ::odometer_mecanum::wheels_posi_<ContainerAllocator>  _wheels_type;
  _wheels_type wheels;

   typedef  ::odometer_mecanum::wheels_vel_<ContainerAllocator>  _lv_type;
  _lv_type lv;

   typedef  ::odometer_mecanum::wheels_vel_<ContainerAllocator>  _gv_type;
  _gv_type gv;




  typedef boost::shared_ptr< ::odometer_mecanum::odometer_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::odometer_mecanum::odometer_<ContainerAllocator> const> ConstPtr;

}; // struct odometer_

typedef ::odometer_mecanum::odometer_<std::allocator<void> > odometer;

typedef boost::shared_ptr< ::odometer_mecanum::odometer > odometerPtr;
typedef boost::shared_ptr< ::odometer_mecanum::odometer const> odometerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::odometer_mecanum::odometer_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::odometer_mecanum::odometer_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace odometer_mecanum

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'odometer_mecanum': ['/home/home/csc_home_prj/src/odometer_mecanum/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::odometer_mecanum::odometer_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::odometer_mecanum::odometer_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometer_mecanum::odometer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::odometer_mecanum::odometer_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometer_mecanum::odometer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::odometer_mecanum::odometer_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::odometer_mecanum::odometer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea45eb09534f2451dbda8617c697d178";
  }

  static const char* value(const ::odometer_mecanum::odometer_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea45eb09534f2451ULL;
  static const uint64_t static_value2 = 0xdbda8617c697d178ULL;
};

template<class ContainerAllocator>
struct DataType< ::odometer_mecanum::odometer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "odometer_mecanum/odometer";
  }

  static const char* value(const ::odometer_mecanum::odometer_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::odometer_mecanum::odometer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint32 cycle\n\
float64 x\n\
float64 y\n\
float64 angle\n\
odometer_mecanum/wheels_posi wheels\n\
odometer_mecanum/wheels_vel lv\n\
odometer_mecanum/wheels_vel gv\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: odometer_mecanum/wheels_posi\n\
Header header\n\
float64 w1\n\
float64 w2\n\
float64 w3\n\
float64 w4\n\
\n\
================================================================================\n\
MSG: odometer_mecanum/wheels_vel\n\
float64 vx\n\
float64 vy\n\
float64 w\n\
";
  }

  static const char* value(const ::odometer_mecanum::odometer_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::odometer_mecanum::odometer_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cycle);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.angle);
      stream.next(m.wheels);
      stream.next(m.lv);
      stream.next(m.gv);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct odometer_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::odometer_mecanum::odometer_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::odometer_mecanum::odometer_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cycle: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cycle);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "wheels: ";
    s << std::endl;
    Printer< ::odometer_mecanum::wheels_posi_<ContainerAllocator> >::stream(s, indent + "  ", v.wheels);
    s << indent << "lv: ";
    s << std::endl;
    Printer< ::odometer_mecanum::wheels_vel_<ContainerAllocator> >::stream(s, indent + "  ", v.lv);
    s << indent << "gv: ";
    s << std::endl;
    Printer< ::odometer_mecanum::wheels_vel_<ContainerAllocator> >::stream(s, indent + "  ", v.gv);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ODOMETER_MECANUM_MESSAGE_ODOMETER_H
