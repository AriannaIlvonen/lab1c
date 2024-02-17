// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice
#include "open_space_msg/msg/detail/open_space__rosidl_typesupport_fastrtps_cpp.hpp"
#include "open_space_msg/msg/detail/open_space__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: angle
  cdr << ros_message.angle;
  // Member: distance
  cdr << ros_message.distance;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  open_space_msg::msg::OpenSpace & ros_message)
{
  // Member: angle
  cdr >> ros_message.angle;

  // Member: distance
  cdr >> ros_message.distance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
get_serialized_size(
  const open_space_msg::msg::OpenSpace & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_open_space_msg
max_serialized_size_OpenSpace(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _OpenSpace__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const open_space_msg::msg::OpenSpace *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenSpace__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<open_space_msg::msg::OpenSpace *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenSpace__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const open_space_msg::msg::OpenSpace *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenSpace__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpenSpace(full_bounded, 0);
}

static message_type_support_callbacks_t _OpenSpace__callbacks = {
  "open_space_msg::msg",
  "OpenSpace",
  _OpenSpace__cdr_serialize,
  _OpenSpace__cdr_deserialize,
  _OpenSpace__get_serialized_size,
  _OpenSpace__max_serialized_size
};

static rosidl_message_type_support_t _OpenSpace__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenSpace__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace open_space_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_open_space_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<open_space_msg::msg::OpenSpace>()
{
  return &open_space_msg::msg::typesupport_fastrtps_cpp::_OpenSpace__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, open_space_msg, msg, OpenSpace)() {
  return &open_space_msg::msg::typesupport_fastrtps_cpp::_OpenSpace__handle;
}

#ifdef __cplusplus
}
#endif
