// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "open_space_msg/msg/detail/open_space__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace open_space_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OpenSpace_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) open_space_msg::msg::OpenSpace(_init);
}

void OpenSpace_fini_function(void * message_memory)
{
  auto typed_message = static_cast<open_space_msg::msg::OpenSpace *>(message_memory);
  typed_message->~OpenSpace();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OpenSpace_message_member_array[2] = {
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_space_msg::msg::OpenSpace, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(open_space_msg::msg::OpenSpace, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OpenSpace_message_members = {
  "open_space_msg::msg",  // message namespace
  "OpenSpace",  // message name
  2,  // number of fields
  sizeof(open_space_msg::msg::OpenSpace),
  OpenSpace_message_member_array,  // message members
  OpenSpace_init_function,  // function to initialize message memory (memory has to be allocated)
  OpenSpace_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OpenSpace_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OpenSpace_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace open_space_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<open_space_msg::msg::OpenSpace>()
{
  return &::open_space_msg::msg::rosidl_typesupport_introspection_cpp::OpenSpace_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, open_space_msg, msg, OpenSpace)() {
  return &::open_space_msg::msg::rosidl_typesupport_introspection_cpp::OpenSpace_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
