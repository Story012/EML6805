// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_dashboard_msgs:srv/IsProgramSaved.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/srv/detail/is_program_saved__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__init(ur_dashboard_msgs__srv__IsProgramSaved_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Request__fini(ur_dashboard_msgs__srv__IsProgramSaved_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__are_equal(const ur_dashboard_msgs__srv__IsProgramSaved_Request * lhs, const ur_dashboard_msgs__srv__IsProgramSaved_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__copy(
  const ur_dashboard_msgs__srv__IsProgramSaved_Request * input,
  ur_dashboard_msgs__srv__IsProgramSaved_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ur_dashboard_msgs__srv__IsProgramSaved_Request *
ur_dashboard_msgs__srv__IsProgramSaved_Request__create()
{
  ur_dashboard_msgs__srv__IsProgramSaved_Request * msg = (ur_dashboard_msgs__srv__IsProgramSaved_Request *)malloc(sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Request));
  bool success = ur_dashboard_msgs__srv__IsProgramSaved_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Request__destroy(ur_dashboard_msgs__srv__IsProgramSaved_Request * msg)
{
  if (msg) {
    ur_dashboard_msgs__srv__IsProgramSaved_Request__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__init(ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__srv__IsProgramSaved_Request * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__srv__IsProgramSaved_Request *)calloc(size, sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__srv__IsProgramSaved_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__srv__IsProgramSaved_Request__fini(&data[i - 1]);
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
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__fini(ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__srv__IsProgramSaved_Request__fini(&array->data[i]);
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

ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence *
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__create(size_t size)
{
  ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * array = (ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence *)malloc(sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__destroy(ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__are_equal(const ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * lhs, const ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__srv__IsProgramSaved_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence__copy(
  const ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * input,
  ur_dashboard_msgs__srv__IsProgramSaved_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Request);
    ur_dashboard_msgs__srv__IsProgramSaved_Request * data =
      (ur_dashboard_msgs__srv__IsProgramSaved_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__srv__IsProgramSaved_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__srv__IsProgramSaved_Request__fini(&data[i]);
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
    if (!ur_dashboard_msgs__srv__IsProgramSaved_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `answer`
// Member `program_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__init(ur_dashboard_msgs__srv__IsProgramSaved_Response * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(msg);
    return false;
  }
  // program_name
  if (!rosidl_runtime_c__String__init(&msg->program_name)) {
    ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(msg);
    return false;
  }
  // program_saved
  // success
  return true;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(ur_dashboard_msgs__srv__IsProgramSaved_Response * msg)
{
  if (!msg) {
    return;
  }
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
  // program_name
  rosidl_runtime_c__String__fini(&msg->program_name);
  // program_saved
  // success
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__are_equal(const ur_dashboard_msgs__srv__IsProgramSaved_Response * lhs, const ur_dashboard_msgs__srv__IsProgramSaved_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer), &(rhs->answer)))
  {
    return false;
  }
  // program_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->program_name), &(rhs->program_name)))
  {
    return false;
  }
  // program_saved
  if (lhs->program_saved != rhs->program_saved) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__copy(
  const ur_dashboard_msgs__srv__IsProgramSaved_Response * input,
  ur_dashboard_msgs__srv__IsProgramSaved_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__copy(
      &(input->answer), &(output->answer)))
  {
    return false;
  }
  // program_name
  if (!rosidl_runtime_c__String__copy(
      &(input->program_name), &(output->program_name)))
  {
    return false;
  }
  // program_saved
  output->program_saved = input->program_saved;
  // success
  output->success = input->success;
  return true;
}

ur_dashboard_msgs__srv__IsProgramSaved_Response *
ur_dashboard_msgs__srv__IsProgramSaved_Response__create()
{
  ur_dashboard_msgs__srv__IsProgramSaved_Response * msg = (ur_dashboard_msgs__srv__IsProgramSaved_Response *)malloc(sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Response));
  bool success = ur_dashboard_msgs__srv__IsProgramSaved_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Response__destroy(ur_dashboard_msgs__srv__IsProgramSaved_Response * msg)
{
  if (msg) {
    ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__init(ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__srv__IsProgramSaved_Response * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__srv__IsProgramSaved_Response *)calloc(size, sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__srv__IsProgramSaved_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(&data[i - 1]);
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
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__fini(ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(&array->data[i]);
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

ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence *
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__create(size_t size)
{
  ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * array = (ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence *)malloc(sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__destroy(ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__are_equal(const ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * lhs, const ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__srv__IsProgramSaved_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence__copy(
  const ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * input,
  ur_dashboard_msgs__srv__IsProgramSaved_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__srv__IsProgramSaved_Response);
    ur_dashboard_msgs__srv__IsProgramSaved_Response * data =
      (ur_dashboard_msgs__srv__IsProgramSaved_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__srv__IsProgramSaved_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__srv__IsProgramSaved_Response__fini(&data[i]);
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
    if (!ur_dashboard_msgs__srv__IsProgramSaved_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
