// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_dashboard_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/msg/detail/robot_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ur_dashboard_msgs__msg__RobotMode__init(ur_dashboard_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
ur_dashboard_msgs__msg__RobotMode__fini(ur_dashboard_msgs__msg__RobotMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
ur_dashboard_msgs__msg__RobotMode__are_equal(const ur_dashboard_msgs__msg__RobotMode * lhs, const ur_dashboard_msgs__msg__RobotMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__msg__RobotMode__copy(
  const ur_dashboard_msgs__msg__RobotMode * input,
  ur_dashboard_msgs__msg__RobotMode * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

ur_dashboard_msgs__msg__RobotMode *
ur_dashboard_msgs__msg__RobotMode__create()
{
  ur_dashboard_msgs__msg__RobotMode * msg = (ur_dashboard_msgs__msg__RobotMode *)malloc(sizeof(ur_dashboard_msgs__msg__RobotMode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__msg__RobotMode));
  bool success = ur_dashboard_msgs__msg__RobotMode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__msg__RobotMode__destroy(ur_dashboard_msgs__msg__RobotMode * msg)
{
  if (msg) {
    ur_dashboard_msgs__msg__RobotMode__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__msg__RobotMode__Sequence__init(ur_dashboard_msgs__msg__RobotMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__msg__RobotMode * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__msg__RobotMode *)calloc(size, sizeof(ur_dashboard_msgs__msg__RobotMode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__msg__RobotMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__msg__RobotMode__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__msg__RobotMode__Sequence__fini(ur_dashboard_msgs__msg__RobotMode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__msg__RobotMode__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__msg__RobotMode__Sequence *
ur_dashboard_msgs__msg__RobotMode__Sequence__create(size_t size)
{
  ur_dashboard_msgs__msg__RobotMode__Sequence * array = (ur_dashboard_msgs__msg__RobotMode__Sequence *)malloc(sizeof(ur_dashboard_msgs__msg__RobotMode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__msg__RobotMode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__msg__RobotMode__Sequence__destroy(ur_dashboard_msgs__msg__RobotMode__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__msg__RobotMode__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__msg__RobotMode__Sequence__are_equal(const ur_dashboard_msgs__msg__RobotMode__Sequence * lhs, const ur_dashboard_msgs__msg__RobotMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__msg__RobotMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__msg__RobotMode__Sequence__copy(
  const ur_dashboard_msgs__msg__RobotMode__Sequence * input,
  ur_dashboard_msgs__msg__RobotMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__msg__RobotMode);
    ur_dashboard_msgs__msg__RobotMode * data =
      (ur_dashboard_msgs__msg__RobotMode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__msg__RobotMode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__msg__RobotMode__fini(&data[i]);
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
    if (!ur_dashboard_msgs__msg__RobotMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
