// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from olympics_interfaces:action/Rings.idl
// generated code does not contain a copyright notice
#include "olympics_interfaces/action/detail/rings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
olympics_interfaces__action__Rings_Goal__init(olympics_interfaces__action__Rings_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // radius
  return true;
}

void
olympics_interfaces__action__Rings_Goal__fini(olympics_interfaces__action__Rings_Goal * msg)
{
  if (!msg) {
    return;
  }
  // radius
}

bool
olympics_interfaces__action__Rings_Goal__are_equal(const olympics_interfaces__action__Rings_Goal * lhs, const olympics_interfaces__action__Rings_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Goal__copy(
  const olympics_interfaces__action__Rings_Goal * input,
  olympics_interfaces__action__Rings_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

olympics_interfaces__action__Rings_Goal *
olympics_interfaces__action__Rings_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Goal * msg = (olympics_interfaces__action__Rings_Goal *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_Goal));
  bool success = olympics_interfaces__action__Rings_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_Goal__destroy(olympics_interfaces__action__Rings_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_Goal__Sequence__init(olympics_interfaces__action__Rings_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Goal * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_Goal *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_Goal__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_Goal__Sequence__fini(olympics_interfaces__action__Rings_Goal__Sequence * array)
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
      olympics_interfaces__action__Rings_Goal__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_Goal__Sequence *
olympics_interfaces__action__Rings_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Goal__Sequence * array = (olympics_interfaces__action__Rings_Goal__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_Goal__Sequence__destroy(olympics_interfaces__action__Rings_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_Goal__Sequence__are_equal(const olympics_interfaces__action__Rings_Goal__Sequence * lhs, const olympics_interfaces__action__Rings_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Goal__Sequence__copy(
  const olympics_interfaces__action__Rings_Goal__Sequence * input,
  olympics_interfaces__action__Rings_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_Goal);
    olympics_interfaces__action__Rings_Goal * data =
      (olympics_interfaces__action__Rings_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_Goal__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
olympics_interfaces__action__Rings_Result__init(olympics_interfaces__action__Rings_Result * msg)
{
  if (!msg) {
    return false;
  }
  // rings_completed
  return true;
}

void
olympics_interfaces__action__Rings_Result__fini(olympics_interfaces__action__Rings_Result * msg)
{
  if (!msg) {
    return;
  }
  // rings_completed
}

bool
olympics_interfaces__action__Rings_Result__are_equal(const olympics_interfaces__action__Rings_Result * lhs, const olympics_interfaces__action__Rings_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rings_completed
  if (lhs->rings_completed != rhs->rings_completed) {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Result__copy(
  const olympics_interfaces__action__Rings_Result * input,
  olympics_interfaces__action__Rings_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // rings_completed
  output->rings_completed = input->rings_completed;
  return true;
}

olympics_interfaces__action__Rings_Result *
olympics_interfaces__action__Rings_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Result * msg = (olympics_interfaces__action__Rings_Result *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_Result));
  bool success = olympics_interfaces__action__Rings_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_Result__destroy(olympics_interfaces__action__Rings_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_Result__Sequence__init(olympics_interfaces__action__Rings_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Result * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_Result *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_Result__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_Result__Sequence__fini(olympics_interfaces__action__Rings_Result__Sequence * array)
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
      olympics_interfaces__action__Rings_Result__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_Result__Sequence *
olympics_interfaces__action__Rings_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Result__Sequence * array = (olympics_interfaces__action__Rings_Result__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_Result__Sequence__destroy(olympics_interfaces__action__Rings_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_Result__Sequence__are_equal(const olympics_interfaces__action__Rings_Result__Sequence * lhs, const olympics_interfaces__action__Rings_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Result__Sequence__copy(
  const olympics_interfaces__action__Rings_Result__Sequence * input,
  olympics_interfaces__action__Rings_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_Result);
    olympics_interfaces__action__Rings_Result * data =
      (olympics_interfaces__action__Rings_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_Result__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
olympics_interfaces__action__Rings_Feedback__init(olympics_interfaces__action__Rings_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // drawing_ring
  // ring_angle
  return true;
}

void
olympics_interfaces__action__Rings_Feedback__fini(olympics_interfaces__action__Rings_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // drawing_ring
  // ring_angle
}

bool
olympics_interfaces__action__Rings_Feedback__are_equal(const olympics_interfaces__action__Rings_Feedback * lhs, const olympics_interfaces__action__Rings_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drawing_ring
  if (lhs->drawing_ring != rhs->drawing_ring) {
    return false;
  }
  // ring_angle
  if (lhs->ring_angle != rhs->ring_angle) {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Feedback__copy(
  const olympics_interfaces__action__Rings_Feedback * input,
  olympics_interfaces__action__Rings_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // drawing_ring
  output->drawing_ring = input->drawing_ring;
  // ring_angle
  output->ring_angle = input->ring_angle;
  return true;
}

olympics_interfaces__action__Rings_Feedback *
olympics_interfaces__action__Rings_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Feedback * msg = (olympics_interfaces__action__Rings_Feedback *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_Feedback));
  bool success = olympics_interfaces__action__Rings_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_Feedback__destroy(olympics_interfaces__action__Rings_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_Feedback__Sequence__init(olympics_interfaces__action__Rings_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Feedback * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_Feedback *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_Feedback__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_Feedback__Sequence__fini(olympics_interfaces__action__Rings_Feedback__Sequence * array)
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
      olympics_interfaces__action__Rings_Feedback__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_Feedback__Sequence *
olympics_interfaces__action__Rings_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_Feedback__Sequence * array = (olympics_interfaces__action__Rings_Feedback__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_Feedback__Sequence__destroy(olympics_interfaces__action__Rings_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_Feedback__Sequence__are_equal(const olympics_interfaces__action__Rings_Feedback__Sequence * lhs, const olympics_interfaces__action__Rings_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_Feedback__Sequence__copy(
  const olympics_interfaces__action__Rings_Feedback__Sequence * input,
  olympics_interfaces__action__Rings_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_Feedback);
    olympics_interfaces__action__Rings_Feedback * data =
      (olympics_interfaces__action__Rings_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_Feedback__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "olympics_interfaces/action/detail/rings__functions.h"

bool
olympics_interfaces__action__Rings_SendGoal_Request__init(olympics_interfaces__action__Rings_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    olympics_interfaces__action__Rings_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!olympics_interfaces__action__Rings_Goal__init(&msg->goal)) {
    olympics_interfaces__action__Rings_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
olympics_interfaces__action__Rings_SendGoal_Request__fini(olympics_interfaces__action__Rings_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  olympics_interfaces__action__Rings_Goal__fini(&msg->goal);
}

bool
olympics_interfaces__action__Rings_SendGoal_Request__are_equal(const olympics_interfaces__action__Rings_SendGoal_Request * lhs, const olympics_interfaces__action__Rings_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!olympics_interfaces__action__Rings_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_SendGoal_Request__copy(
  const olympics_interfaces__action__Rings_SendGoal_Request * input,
  olympics_interfaces__action__Rings_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!olympics_interfaces__action__Rings_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

olympics_interfaces__action__Rings_SendGoal_Request *
olympics_interfaces__action__Rings_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Request * msg = (olympics_interfaces__action__Rings_SendGoal_Request *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_SendGoal_Request));
  bool success = olympics_interfaces__action__Rings_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_SendGoal_Request__destroy(olympics_interfaces__action__Rings_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__init(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Request * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_SendGoal_Request *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_SendGoal_Request__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__fini(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array)
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
      olympics_interfaces__action__Rings_SendGoal_Request__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_SendGoal_Request__Sequence *
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array = (olympics_interfaces__action__Rings_SendGoal_Request__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__destroy(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__are_equal(const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * lhs, const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__copy(
  const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * input,
  olympics_interfaces__action__Rings_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_SendGoal_Request);
    olympics_interfaces__action__Rings_SendGoal_Request * data =
      (olympics_interfaces__action__Rings_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_SendGoal_Request__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
olympics_interfaces__action__Rings_SendGoal_Response__init(olympics_interfaces__action__Rings_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    olympics_interfaces__action__Rings_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
olympics_interfaces__action__Rings_SendGoal_Response__fini(olympics_interfaces__action__Rings_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
olympics_interfaces__action__Rings_SendGoal_Response__are_equal(const olympics_interfaces__action__Rings_SendGoal_Response * lhs, const olympics_interfaces__action__Rings_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_SendGoal_Response__copy(
  const olympics_interfaces__action__Rings_SendGoal_Response * input,
  olympics_interfaces__action__Rings_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

olympics_interfaces__action__Rings_SendGoal_Response *
olympics_interfaces__action__Rings_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Response * msg = (olympics_interfaces__action__Rings_SendGoal_Response *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_SendGoal_Response));
  bool success = olympics_interfaces__action__Rings_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_SendGoal_Response__destroy(olympics_interfaces__action__Rings_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__init(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Response * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_SendGoal_Response *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_SendGoal_Response__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__fini(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array)
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
      olympics_interfaces__action__Rings_SendGoal_Response__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_SendGoal_Response__Sequence *
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array = (olympics_interfaces__action__Rings_SendGoal_Response__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__destroy(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__are_equal(const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * lhs, const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__copy(
  const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * input,
  olympics_interfaces__action__Rings_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_SendGoal_Response);
    olympics_interfaces__action__Rings_SendGoal_Response * data =
      (olympics_interfaces__action__Rings_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_SendGoal_Response__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
olympics_interfaces__action__Rings_GetResult_Request__init(olympics_interfaces__action__Rings_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    olympics_interfaces__action__Rings_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
olympics_interfaces__action__Rings_GetResult_Request__fini(olympics_interfaces__action__Rings_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
olympics_interfaces__action__Rings_GetResult_Request__are_equal(const olympics_interfaces__action__Rings_GetResult_Request * lhs, const olympics_interfaces__action__Rings_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_GetResult_Request__copy(
  const olympics_interfaces__action__Rings_GetResult_Request * input,
  olympics_interfaces__action__Rings_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

olympics_interfaces__action__Rings_GetResult_Request *
olympics_interfaces__action__Rings_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Request * msg = (olympics_interfaces__action__Rings_GetResult_Request *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_GetResult_Request));
  bool success = olympics_interfaces__action__Rings_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_GetResult_Request__destroy(olympics_interfaces__action__Rings_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__init(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Request * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_GetResult_Request *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_GetResult_Request__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_GetResult_Request__Sequence__fini(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array)
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
      olympics_interfaces__action__Rings_GetResult_Request__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_GetResult_Request__Sequence *
olympics_interfaces__action__Rings_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Request__Sequence * array = (olympics_interfaces__action__Rings_GetResult_Request__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_GetResult_Request__Sequence__destroy(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__are_equal(const olympics_interfaces__action__Rings_GetResult_Request__Sequence * lhs, const olympics_interfaces__action__Rings_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__copy(
  const olympics_interfaces__action__Rings_GetResult_Request__Sequence * input,
  olympics_interfaces__action__Rings_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_GetResult_Request);
    olympics_interfaces__action__Rings_GetResult_Request * data =
      (olympics_interfaces__action__Rings_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_GetResult_Request__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "olympics_interfaces/action/detail/rings__functions.h"

bool
olympics_interfaces__action__Rings_GetResult_Response__init(olympics_interfaces__action__Rings_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!olympics_interfaces__action__Rings_Result__init(&msg->result)) {
    olympics_interfaces__action__Rings_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
olympics_interfaces__action__Rings_GetResult_Response__fini(olympics_interfaces__action__Rings_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  olympics_interfaces__action__Rings_Result__fini(&msg->result);
}

bool
olympics_interfaces__action__Rings_GetResult_Response__are_equal(const olympics_interfaces__action__Rings_GetResult_Response * lhs, const olympics_interfaces__action__Rings_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!olympics_interfaces__action__Rings_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_GetResult_Response__copy(
  const olympics_interfaces__action__Rings_GetResult_Response * input,
  olympics_interfaces__action__Rings_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!olympics_interfaces__action__Rings_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

olympics_interfaces__action__Rings_GetResult_Response *
olympics_interfaces__action__Rings_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Response * msg = (olympics_interfaces__action__Rings_GetResult_Response *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_GetResult_Response));
  bool success = olympics_interfaces__action__Rings_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_GetResult_Response__destroy(olympics_interfaces__action__Rings_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__init(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Response * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_GetResult_Response *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_GetResult_Response__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_GetResult_Response__Sequence__fini(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array)
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
      olympics_interfaces__action__Rings_GetResult_Response__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_GetResult_Response__Sequence *
olympics_interfaces__action__Rings_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_GetResult_Response__Sequence * array = (olympics_interfaces__action__Rings_GetResult_Response__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_GetResult_Response__Sequence__destroy(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__are_equal(const olympics_interfaces__action__Rings_GetResult_Response__Sequence * lhs, const olympics_interfaces__action__Rings_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__copy(
  const olympics_interfaces__action__Rings_GetResult_Response__Sequence * input,
  olympics_interfaces__action__Rings_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_GetResult_Response);
    olympics_interfaces__action__Rings_GetResult_Response * data =
      (olympics_interfaces__action__Rings_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_GetResult_Response__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "olympics_interfaces/action/detail/rings__functions.h"

bool
olympics_interfaces__action__Rings_FeedbackMessage__init(olympics_interfaces__action__Rings_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    olympics_interfaces__action__Rings_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!olympics_interfaces__action__Rings_Feedback__init(&msg->feedback)) {
    olympics_interfaces__action__Rings_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
olympics_interfaces__action__Rings_FeedbackMessage__fini(olympics_interfaces__action__Rings_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  olympics_interfaces__action__Rings_Feedback__fini(&msg->feedback);
}

bool
olympics_interfaces__action__Rings_FeedbackMessage__are_equal(const olympics_interfaces__action__Rings_FeedbackMessage * lhs, const olympics_interfaces__action__Rings_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!olympics_interfaces__action__Rings_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
olympics_interfaces__action__Rings_FeedbackMessage__copy(
  const olympics_interfaces__action__Rings_FeedbackMessage * input,
  olympics_interfaces__action__Rings_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!olympics_interfaces__action__Rings_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

olympics_interfaces__action__Rings_FeedbackMessage *
olympics_interfaces__action__Rings_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_FeedbackMessage * msg = (olympics_interfaces__action__Rings_FeedbackMessage *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(olympics_interfaces__action__Rings_FeedbackMessage));
  bool success = olympics_interfaces__action__Rings_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
olympics_interfaces__action__Rings_FeedbackMessage__destroy(olympics_interfaces__action__Rings_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    olympics_interfaces__action__Rings_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__init(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_FeedbackMessage * data = NULL;

  if (size) {
    data = (olympics_interfaces__action__Rings_FeedbackMessage *)allocator.zero_allocate(size, sizeof(olympics_interfaces__action__Rings_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = olympics_interfaces__action__Rings_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        olympics_interfaces__action__Rings_FeedbackMessage__fini(&data[i - 1]);
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
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__fini(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array)
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
      olympics_interfaces__action__Rings_FeedbackMessage__fini(&array->data[i]);
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

olympics_interfaces__action__Rings_FeedbackMessage__Sequence *
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array = (olympics_interfaces__action__Rings_FeedbackMessage__Sequence *)allocator.allocate(sizeof(olympics_interfaces__action__Rings_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = olympics_interfaces__action__Rings_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__destroy(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    olympics_interfaces__action__Rings_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__are_equal(const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * lhs, const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!olympics_interfaces__action__Rings_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__copy(
  const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * input,
  olympics_interfaces__action__Rings_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(olympics_interfaces__action__Rings_FeedbackMessage);
    olympics_interfaces__action__Rings_FeedbackMessage * data =
      (olympics_interfaces__action__Rings_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!olympics_interfaces__action__Rings_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          olympics_interfaces__action__Rings_FeedbackMessage__fini(&data[i]);
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
    if (!olympics_interfaces__action__Rings_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
