// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#ifndef OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__FUNCTIONS_H_
#define OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "open_space_msg/msg/rosidl_generator_c__visibility_control.h"

#include "open_space_msg/msg/detail/open_space__struct.h"

/// Initialize msg/OpenSpace message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * open_space_msg__msg__OpenSpace
 * )) before or use
 * open_space_msg__msg__OpenSpace__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__init(open_space_msg__msg__OpenSpace * msg);

/// Finalize msg/OpenSpace message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
void
open_space_msg__msg__OpenSpace__fini(open_space_msg__msg__OpenSpace * msg);

/// Create msg/OpenSpace message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * open_space_msg__msg__OpenSpace__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
open_space_msg__msg__OpenSpace *
open_space_msg__msg__OpenSpace__create();

/// Destroy msg/OpenSpace message.
/**
 * It calls
 * open_space_msg__msg__OpenSpace__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
void
open_space_msg__msg__OpenSpace__destroy(open_space_msg__msg__OpenSpace * msg);

/// Check for msg/OpenSpace message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__are_equal(const open_space_msg__msg__OpenSpace * lhs, const open_space_msg__msg__OpenSpace * rhs);

/// Copy a msg/OpenSpace message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__copy(
  const open_space_msg__msg__OpenSpace * input,
  open_space_msg__msg__OpenSpace * output);

/// Initialize array of msg/OpenSpace messages.
/**
 * It allocates the memory for the number of elements and calls
 * open_space_msg__msg__OpenSpace__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__Sequence__init(open_space_msg__msg__OpenSpace__Sequence * array, size_t size);

/// Finalize array of msg/OpenSpace messages.
/**
 * It calls
 * open_space_msg__msg__OpenSpace__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
void
open_space_msg__msg__OpenSpace__Sequence__fini(open_space_msg__msg__OpenSpace__Sequence * array);

/// Create array of msg/OpenSpace messages.
/**
 * It allocates the memory for the array and calls
 * open_space_msg__msg__OpenSpace__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
open_space_msg__msg__OpenSpace__Sequence *
open_space_msg__msg__OpenSpace__Sequence__create(size_t size);

/// Destroy array of msg/OpenSpace messages.
/**
 * It calls
 * open_space_msg__msg__OpenSpace__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
void
open_space_msg__msg__OpenSpace__Sequence__destroy(open_space_msg__msg__OpenSpace__Sequence * array);

/// Check for msg/OpenSpace message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__Sequence__are_equal(const open_space_msg__msg__OpenSpace__Sequence * lhs, const open_space_msg__msg__OpenSpace__Sequence * rhs);

/// Copy an array of msg/OpenSpace messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_open_space_msg
bool
open_space_msg__msg__OpenSpace__Sequence__copy(
  const open_space_msg__msg__OpenSpace__Sequence * input,
  open_space_msg__msg__OpenSpace__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__FUNCTIONS_H_
