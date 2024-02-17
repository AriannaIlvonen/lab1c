// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice
#include "open_space_msg/msg/detail/open_space__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
open_space_msg__msg__OpenSpace__init(open_space_msg__msg__OpenSpace * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // distance
  return true;
}

void
open_space_msg__msg__OpenSpace__fini(open_space_msg__msg__OpenSpace * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // distance
}

bool
open_space_msg__msg__OpenSpace__are_equal(const open_space_msg__msg__OpenSpace * lhs, const open_space_msg__msg__OpenSpace * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
open_space_msg__msg__OpenSpace__copy(
  const open_space_msg__msg__OpenSpace * input,
  open_space_msg__msg__OpenSpace * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // distance
  output->distance = input->distance;
  return true;
}

open_space_msg__msg__OpenSpace *
open_space_msg__msg__OpenSpace__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_space_msg__msg__OpenSpace * msg = (open_space_msg__msg__OpenSpace *)allocator.allocate(sizeof(open_space_msg__msg__OpenSpace), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(open_space_msg__msg__OpenSpace));
  bool success = open_space_msg__msg__OpenSpace__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
open_space_msg__msg__OpenSpace__destroy(open_space_msg__msg__OpenSpace * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    open_space_msg__msg__OpenSpace__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
open_space_msg__msg__OpenSpace__Sequence__init(open_space_msg__msg__OpenSpace__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_space_msg__msg__OpenSpace * data = NULL;

  if (size) {
    data = (open_space_msg__msg__OpenSpace *)allocator.zero_allocate(size, sizeof(open_space_msg__msg__OpenSpace), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = open_space_msg__msg__OpenSpace__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        open_space_msg__msg__OpenSpace__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
open_space_msg__msg__OpenSpace__Sequence__fini(open_space_msg__msg__OpenSpace__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      open_space_msg__msg__OpenSpace__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

open_space_msg__msg__OpenSpace__Sequence *
open_space_msg__msg__OpenSpace__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  open_space_msg__msg__OpenSpace__Sequence * array = (open_space_msg__msg__OpenSpace__Sequence *)allocator.allocate(sizeof(open_space_msg__msg__OpenSpace__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = open_space_msg__msg__OpenSpace__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
open_space_msg__msg__OpenSpace__Sequence__destroy(open_space_msg__msg__OpenSpace__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    open_space_msg__msg__OpenSpace__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
open_space_msg__msg__OpenSpace__Sequence__are_equal(const open_space_msg__msg__OpenSpace__Sequence * lhs, const open_space_msg__msg__OpenSpace__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!open_space_msg__msg__OpenSpace__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
open_space_msg__msg__OpenSpace__Sequence__copy(
  const open_space_msg__msg__OpenSpace__Sequence * input,
  open_space_msg__msg__OpenSpace__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(open_space_msg__msg__OpenSpace);
    open_space_msg__msg__OpenSpace * data =
      (open_space_msg__msg__OpenSpace *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!open_space_msg__msg__OpenSpace__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          open_space_msg__msg__OpenSpace__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!open_space_msg__msg__OpenSpace__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
