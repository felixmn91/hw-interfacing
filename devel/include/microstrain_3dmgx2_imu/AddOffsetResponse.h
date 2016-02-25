// Generated by gencpp from file microstrain_3dmgx2_imu/AddOffsetResponse.msg
// DO NOT EDIT!


#ifndef MICROSTRAIN_3DMGX2_IMU_MESSAGE_ADDOFFSETRESPONSE_H
#define MICROSTRAIN_3DMGX2_IMU_MESSAGE_ADDOFFSETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace microstrain_3dmgx2_imu
{
template <class ContainerAllocator>
struct AddOffsetResponse_
{
  typedef AddOffsetResponse_<ContainerAllocator> Type;

  AddOffsetResponse_()
    : total_offset(0.0)  {
    }
  AddOffsetResponse_(const ContainerAllocator& _alloc)
    : total_offset(0.0)  {
    }



   typedef double _total_offset_type;
  _total_offset_type total_offset;




  typedef boost::shared_ptr< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddOffsetResponse_

typedef ::microstrain_3dmgx2_imu::AddOffsetResponse_<std::allocator<void> > AddOffsetResponse;

typedef boost::shared_ptr< ::microstrain_3dmgx2_imu::AddOffsetResponse > AddOffsetResponsePtr;
typedef boost::shared_ptr< ::microstrain_3dmgx2_imu::AddOffsetResponse const> AddOffsetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace microstrain_3dmgx2_imu

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5dea42ce4656fada4736ce3508b56aca";
  }

  static const char* value(const ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5dea42ce4656fadaULL;
  static const uint64_t static_value2 = 0x4736ce3508b56acaULL;
};

template<class ContainerAllocator>
struct DataType< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "microstrain_3dmgx2_imu/AddOffsetResponse";
  }

  static const char* value(const ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 total_offset\n\
\n\
";
  }

  static const char* value(const ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AddOffsetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::microstrain_3dmgx2_imu::AddOffsetResponse_<ContainerAllocator>& v)
  {
    s << indent << "total_offset: ";
    Printer<double>::stream(s, indent + "  ", v.total_offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MICROSTRAIN_3DMGX2_IMU_MESSAGE_ADDOFFSETRESPONSE_H