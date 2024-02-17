// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#ifndef OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "open_space_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "open_space_msg/msg/detail/open_space__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace open_space_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
cdr_serialize(
  const open_space_msg::msg::OpenSpace & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_space_msg::msg::OpenSpace & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
get_serialized_size(
  const open_space_msg::msg::OpenSpace & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
max_serialized_size_OpenSpace(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace open_space_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_space_msg, msg, OpenSpace)();

#ifdef __cplusplus
}
#endif

#endif  // OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
