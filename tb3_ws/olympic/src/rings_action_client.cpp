//***CREACIÓN DEL CLIENTE***///

#include <inttypes.h>
#include <memory>
#include "action_tutorials_interfaces/action/fibonacci.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

//renombramiento de los objetos complejos por otros más simples
using Fibonacci = 
  action_tutorials_interfaces::action::Fibonacci;

using GoalHandleFibonacci =
  rclcpp_action::ClientGoalHandle<Fibonacci>;

using namespace std::chrono_literals;

//es el puntero al nodo de ros

rclcpp::Node::SharedPtr g_node = nullptr;

//función que recibe el feedback del server 
void feedback_callback(GoalHandleFibonacci::SharedPtr,const std::shared_ptr<const Fibonacci::Feedback> feedback)
{
  RCLCPP_INFO(
    g_node->get_logger(),
    "Next number in sequence received: %" PRId32,
    feedback->partial_sequence.back());
}

//ejcutar el cliente en bucle 

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  //asigna la variable g_node al nodo cliente
  g_node = rclcpp::Node::make_shared("action_client");
  //creamos el action client pasandole como parametros el nodo a partir del cual lo creamos y el nombre de la accion
  auto action_client = rclcpp_action::create_client<Fibonacci>(
    g_node, "fibonacci");

  //si no encuentra el  action server devuelve 1 que es un error
  if (!action_client->wait_for_action_server(20s)) {
    RCLCPP_ERROR(g_node->get_logger(), 
      "Action server not available after waiting");
    return 1;
  }
  //crea una variable para almacenar un objeto de tipo Goal
  auto goal_msg = Fibonacci::Goal();
  //LE ASIGNA A .order QUE ES LA META DENTRO DE GOAL,LA META REAL QUE QUIERE EL CLIENTE
  goal_msg.order = 10;

  RCLCPP_INFO(g_node->get_logger(), 
    "Sending goal");

  auto send_goal_options = 
    rclcpp_action::Client<Fibonacci>::SendGoalOptions();
  //Asigna en las opciones del evnvío de meta como función de feedback a la función feedback que hemos creado antes
  send_goal_options.feedback_callback = feedback_callback;

  //envía al server el goal_msg que contiene la meta y le pasa también la función send_goal_options para actualizar la opción de feedback metida(pregunta alservidor para que logre la meta)
  auto goal_handle_future = action_client->async_send_goal(goal_msg, send_goal_options);
  //espera hasta que la meta sea alcanzada o no
  auto return_code = rclcpp::spin_until_future_complete(g_node,goal_handle_future);

  //SI HAY UN ERROR en el envío de la meta
  if (return_code != rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_ERROR(g_node->get_logger(), 
    "send goal call failed :(");
    //exit
    return 1;
  }
  
  //Acordemonos que GoalHandleFibonacci::SharedPtr es el manejo de la meta del cliente
  GoalHandleFibonacci::SharedPtr goal_handle = goal_handle_future.get();
  //SI LA META HA SIDO RECHAZADA POR EL SERVIDOR
  if (!goal_handle) {
    RCLCPP_ERROR(g_node->get_logger(), 
      "Goal was rejected by server");
    //exit
    return 1;
  }
  //si la meta no has sido rechazada 
  auto result_future = action_client->async_get_result(goal_handle);

  RCLCPP_INFO(g_node->get_logger(), "Waiting for result");

  return_code = rclcpp::spin_until_future_complete(g_node, 
    result_future);
  //si se ha producio un error en el envío del result
  if (return_code != rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_ERROR(g_node->get_logger(), 
      "get result call failed :(");
    return 1;
  }

  GoalHandleFibonacci::WrappedResult wrapped_result = 
    result_future.get();

  switch (wrapped_result.code) {
    case rclcpp_action::ResultCode::SUCCEEDED:
      break;
    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_ERROR(g_node->get_logger(), "Goal was aborted");
      return 1;
    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_ERROR(g_node->get_logger(), "Goal was canceled");
      return 1;
    default:
      RCLCPP_ERROR(g_node->get_logger(), "Unknown result code");
      return 1;
  }
  RCLCPP_INFO(g_node->get_logger(), "result received");
  for (auto number : wrapped_result.result->sequence) {
    RCLCPP_INFO(g_node->get_logger(), "%" PRId32, number);
  }

  action_client.reset();
  g_node.reset();
  rclcpp::shutdown();
  return 0;
}