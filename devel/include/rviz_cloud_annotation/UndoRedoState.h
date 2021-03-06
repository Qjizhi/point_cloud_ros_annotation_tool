// Generated by gencpp from file rviz_cloud_annotation/UndoRedoState.msg
// DO NOT EDIT!


#ifndef RVIZ_CLOUD_ANNOTATION_MESSAGE_UNDOREDOSTATE_H
#define RVIZ_CLOUD_ANNOTATION_MESSAGE_UNDOREDOSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rviz_cloud_annotation
{
template <class ContainerAllocator>
struct UndoRedoState_
{
  typedef UndoRedoState_<ContainerAllocator> Type;

  UndoRedoState_()
    : redo_enabled(false)
    , redo_description()
    , undo_enabled(false)
    , undo_description()  {
    }
  UndoRedoState_(const ContainerAllocator& _alloc)
    : redo_enabled(false)
    , redo_description(_alloc)
    , undo_enabled(false)
    , undo_description(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _redo_enabled_type;
  _redo_enabled_type redo_enabled;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _redo_description_type;
  _redo_description_type redo_description;

   typedef uint8_t _undo_enabled_type;
  _undo_enabled_type undo_enabled;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _undo_description_type;
  _undo_description_type undo_description;





  typedef boost::shared_ptr< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> const> ConstPtr;

}; // struct UndoRedoState_

typedef ::rviz_cloud_annotation::UndoRedoState_<std::allocator<void> > UndoRedoState;

typedef boost::shared_ptr< ::rviz_cloud_annotation::UndoRedoState > UndoRedoStatePtr;
typedef boost::shared_ptr< ::rviz_cloud_annotation::UndoRedoState const> UndoRedoStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator1> & lhs, const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator2> & rhs)
{
  return lhs.redo_enabled == rhs.redo_enabled &&
    lhs.redo_description == rhs.redo_description &&
    lhs.undo_enabled == rhs.undo_enabled &&
    lhs.undo_description == rhs.undo_description;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator1> & lhs, const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rviz_cloud_annotation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43c106a96c078080d8c117fdd425c0a0";
  }

  static const char* value(const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43c106a96c078080ULL;
  static const uint64_t static_value2 = 0xd8c117fdd425c0a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rviz_cloud_annotation/UndoRedoState";
  }

  static const char* value(const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool redo_enabled\n"
"string redo_description\n"
"\n"
"bool undo_enabled\n"
"string undo_description\n"
;
  }

  static const char* value(const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.redo_enabled);
      stream.next(m.redo_description);
      stream.next(m.undo_enabled);
      stream.next(m.undo_description);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UndoRedoState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rviz_cloud_annotation::UndoRedoState_<ContainerAllocator>& v)
  {
    s << indent << "redo_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.redo_enabled);
    s << indent << "redo_description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.redo_description);
    s << indent << "undo_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.undo_enabled);
    s << indent << "undo_description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.undo_description);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RVIZ_CLOUD_ANNOTATION_MESSAGE_UNDOREDOSTATE_H
