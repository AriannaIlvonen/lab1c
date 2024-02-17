// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#ifndef OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__STRUCT_H_
#define OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OpenSpace in the package open_space_msg.
typedef struct open_space_msg__msg__OpenSpace
{
  float angle;
  float distance;
} open_space_msg__msg__OpenSpace;

// Struct for a sequence of open_space_msg__msg__OpenSpace.
typedef struct open_space_msg__msg__OpenSpace__Sequence
{
  open_space_msg__msg__OpenSpace * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} open_space_msg__msg__OpenSpace__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__STRUCT_H_
