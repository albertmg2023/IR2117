// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from olympics_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#ifndef OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__FUNCTIONS_H_
#define OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "olympics_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "olympics_interfaces/action/detail/rings__struct.h"

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_Goal
 * )) before or use
 * olympics_interfaces__action__Rings_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__init(olympics_interfaces__action__Rings_Goal * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Goal__fini(olympics_interfaces__action__Rings_Goal * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Goal *
olympics_interfaces__action__Rings_Goal__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Goal__destroy(olympics_interfaces__action__Rings_Goal * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__are_equal(const olympics_interfaces__action__Rings_Goal * lhs, const olympics_interfaces__action__Rings_Goal * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__copy(
  const olympics_interfaces__action__Rings_Goal * input,
  olympics_interfaces__action__Rings_Goal * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__Sequence__init(olympics_interfaces__action__Rings_Goal__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Goal__Sequence__fini(olympics_interfaces__action__Rings_Goal__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Goal__Sequence *
olympics_interfaces__action__Rings_Goal__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Goal__Sequence__destroy(olympics_interfaces__action__Rings_Goal__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__Sequence__are_equal(const olympics_interfaces__action__Rings_Goal__Sequence * lhs, const olympics_interfaces__action__Rings_Goal__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Goal__Sequence__copy(
  const olympics_interfaces__action__Rings_Goal__Sequence * input,
  olympics_interfaces__action__Rings_Goal__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_Result
 * )) before or use
 * olympics_interfaces__action__Rings_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__init(olympics_interfaces__action__Rings_Result * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Result__fini(olympics_interfaces__action__Rings_Result * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Result *
olympics_interfaces__action__Rings_Result__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Result__destroy(olympics_interfaces__action__Rings_Result * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__are_equal(const olympics_interfaces__action__Rings_Result * lhs, const olympics_interfaces__action__Rings_Result * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__copy(
  const olympics_interfaces__action__Rings_Result * input,
  olympics_interfaces__action__Rings_Result * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__Sequence__init(olympics_interfaces__action__Rings_Result__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Result__Sequence__fini(olympics_interfaces__action__Rings_Result__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Result__Sequence *
olympics_interfaces__action__Rings_Result__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Result__Sequence__destroy(olympics_interfaces__action__Rings_Result__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__Sequence__are_equal(const olympics_interfaces__action__Rings_Result__Sequence * lhs, const olympics_interfaces__action__Rings_Result__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Result__Sequence__copy(
  const olympics_interfaces__action__Rings_Result__Sequence * input,
  olympics_interfaces__action__Rings_Result__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_Feedback
 * )) before or use
 * olympics_interfaces__action__Rings_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__init(olympics_interfaces__action__Rings_Feedback * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Feedback__fini(olympics_interfaces__action__Rings_Feedback * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Feedback *
olympics_interfaces__action__Rings_Feedback__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Feedback__destroy(olympics_interfaces__action__Rings_Feedback * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__are_equal(const olympics_interfaces__action__Rings_Feedback * lhs, const olympics_interfaces__action__Rings_Feedback * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__copy(
  const olympics_interfaces__action__Rings_Feedback * input,
  olympics_interfaces__action__Rings_Feedback * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__Sequence__init(olympics_interfaces__action__Rings_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Feedback__Sequence__fini(olympics_interfaces__action__Rings_Feedback__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_Feedback__Sequence *
olympics_interfaces__action__Rings_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_Feedback__Sequence__destroy(olympics_interfaces__action__Rings_Feedback__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__Sequence__are_equal(const olympics_interfaces__action__Rings_Feedback__Sequence * lhs, const olympics_interfaces__action__Rings_Feedback__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_Feedback__Sequence__copy(
  const olympics_interfaces__action__Rings_Feedback__Sequence * input,
  olympics_interfaces__action__Rings_Feedback__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_SendGoal_Request
 * )) before or use
 * olympics_interfaces__action__Rings_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__init(olympics_interfaces__action__Rings_SendGoal_Request * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Request__fini(olympics_interfaces__action__Rings_SendGoal_Request * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_SendGoal_Request *
olympics_interfaces__action__Rings_SendGoal_Request__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Request__destroy(olympics_interfaces__action__Rings_SendGoal_Request * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__are_equal(const olympics_interfaces__action__Rings_SendGoal_Request * lhs, const olympics_interfaces__action__Rings_SendGoal_Request * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__copy(
  const olympics_interfaces__action__Rings_SendGoal_Request * input,
  olympics_interfaces__action__Rings_SendGoal_Request * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__init(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__fini(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_SendGoal_Request__Sequence *
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__destroy(olympics_interfaces__action__Rings_SendGoal_Request__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__are_equal(const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * lhs, const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Request__Sequence__copy(
  const olympics_interfaces__action__Rings_SendGoal_Request__Sequence * input,
  olympics_interfaces__action__Rings_SendGoal_Request__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_SendGoal_Response
 * )) before or use
 * olympics_interfaces__action__Rings_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__init(olympics_interfaces__action__Rings_SendGoal_Response * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Response__fini(olympics_interfaces__action__Rings_SendGoal_Response * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_SendGoal_Response *
olympics_interfaces__action__Rings_SendGoal_Response__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Response__destroy(olympics_interfaces__action__Rings_SendGoal_Response * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__are_equal(const olympics_interfaces__action__Rings_SendGoal_Response * lhs, const olympics_interfaces__action__Rings_SendGoal_Response * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__copy(
  const olympics_interfaces__action__Rings_SendGoal_Response * input,
  olympics_interfaces__action__Rings_SendGoal_Response * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__init(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__fini(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_SendGoal_Response__Sequence *
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__destroy(olympics_interfaces__action__Rings_SendGoal_Response__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__are_equal(const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * lhs, const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_SendGoal_Response__Sequence__copy(
  const olympics_interfaces__action__Rings_SendGoal_Response__Sequence * input,
  olympics_interfaces__action__Rings_SendGoal_Response__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_GetResult_Request
 * )) before or use
 * olympics_interfaces__action__Rings_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__init(olympics_interfaces__action__Rings_GetResult_Request * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Request__fini(olympics_interfaces__action__Rings_GetResult_Request * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_GetResult_Request *
olympics_interfaces__action__Rings_GetResult_Request__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Request__destroy(olympics_interfaces__action__Rings_GetResult_Request * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__are_equal(const olympics_interfaces__action__Rings_GetResult_Request * lhs, const olympics_interfaces__action__Rings_GetResult_Request * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__copy(
  const olympics_interfaces__action__Rings_GetResult_Request * input,
  olympics_interfaces__action__Rings_GetResult_Request * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__init(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Request__Sequence__fini(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_GetResult_Request__Sequence *
olympics_interfaces__action__Rings_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Request__Sequence__destroy(olympics_interfaces__action__Rings_GetResult_Request__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__are_equal(const olympics_interfaces__action__Rings_GetResult_Request__Sequence * lhs, const olympics_interfaces__action__Rings_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Request__Sequence__copy(
  const olympics_interfaces__action__Rings_GetResult_Request__Sequence * input,
  olympics_interfaces__action__Rings_GetResult_Request__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_GetResult_Response
 * )) before or use
 * olympics_interfaces__action__Rings_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__init(olympics_interfaces__action__Rings_GetResult_Response * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Response__fini(olympics_interfaces__action__Rings_GetResult_Response * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_GetResult_Response *
olympics_interfaces__action__Rings_GetResult_Response__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Response__destroy(olympics_interfaces__action__Rings_GetResult_Response * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__are_equal(const olympics_interfaces__action__Rings_GetResult_Response * lhs, const olympics_interfaces__action__Rings_GetResult_Response * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__copy(
  const olympics_interfaces__action__Rings_GetResult_Response * input,
  olympics_interfaces__action__Rings_GetResult_Response * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__init(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Response__Sequence__fini(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_GetResult_Response__Sequence *
olympics_interfaces__action__Rings_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_GetResult_Response__Sequence__destroy(olympics_interfaces__action__Rings_GetResult_Response__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__are_equal(const olympics_interfaces__action__Rings_GetResult_Response__Sequence * lhs, const olympics_interfaces__action__Rings_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_GetResult_Response__Sequence__copy(
  const olympics_interfaces__action__Rings_GetResult_Response__Sequence * input,
  olympics_interfaces__action__Rings_GetResult_Response__Sequence * output);

/// Initialize action/Rings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * olympics_interfaces__action__Rings_FeedbackMessage
 * )) before or use
 * olympics_interfaces__action__Rings_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__init(olympics_interfaces__action__Rings_FeedbackMessage * msg);

/// Finalize action/Rings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_FeedbackMessage__fini(olympics_interfaces__action__Rings_FeedbackMessage * msg);

/// Create action/Rings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * olympics_interfaces__action__Rings_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_FeedbackMessage *
olympics_interfaces__action__Rings_FeedbackMessage__create();

/// Destroy action/Rings message.
/**
 * It calls
 * olympics_interfaces__action__Rings_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_FeedbackMessage__destroy(olympics_interfaces__action__Rings_FeedbackMessage * msg);

/// Check for action/Rings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__are_equal(const olympics_interfaces__action__Rings_FeedbackMessage * lhs, const olympics_interfaces__action__Rings_FeedbackMessage * rhs);

/// Copy a action/Rings message.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__copy(
  const olympics_interfaces__action__Rings_FeedbackMessage * input,
  olympics_interfaces__action__Rings_FeedbackMessage * output);

/// Initialize array of action/Rings messages.
/**
 * It allocates the memory for the number of elements and calls
 * olympics_interfaces__action__Rings_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__init(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__fini(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array);

/// Create array of action/Rings messages.
/**
 * It allocates the memory for the array and calls
 * olympics_interfaces__action__Rings_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
olympics_interfaces__action__Rings_FeedbackMessage__Sequence *
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Rings messages.
/**
 * It calls
 * olympics_interfaces__action__Rings_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
void
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__destroy(olympics_interfaces__action__Rings_FeedbackMessage__Sequence * array);

/// Check for action/Rings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__are_equal(const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * lhs, const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Rings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_olympics_interfaces
bool
olympics_interfaces__action__Rings_FeedbackMessage__Sequence__copy(
  const olympics_interfaces__action__Rings_FeedbackMessage__Sequence * input,
  olympics_interfaces__action__Rings_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__FUNCTIONS_H_
