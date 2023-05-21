//o que hay que icluir para el server

#include <inttypes.h>
#include <memory>
//nuestra action creada
#include "olympics_interfaces/action/Rings.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

//renombramiento de la ación a Fibonacci(realmente del tipo de dato)
using Rings = 
  olympics_interfaces::action::Rings;

//renombamiento del manejo de meta del servidor a GalHandleFibonacci(realmente del tipo de dato rclcpp_action::ServerGoalHandle<Fibonacci>) EN EL CASO DEL CLIENTE ES ClientGoalHandle<Fibonacci>
using GoalHandleRings = rclcpp_action::ServerGoalHandle<Rings>;


//FUNCIÓN CALLBACK PARA MANEJO DE NUEVAS METAS

//función que devuelve dato de tipo rclcpp_action::GoalResponse a la que 
//se le pasa de parámetros el id de la meta y la meta contenida en el action Fibonacci a la que le llamamos goal,se puede acceder a la meta que hemos definido mediante goal->metadefinida
rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Rings::Goal> goal)
{
  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Got goal request with order %.*f", goal->radius);
  (void)uuid;
  //devuelve función que acepta la nueva meta y la ejecuta
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

//FUNCIÓN CALLBACK PARA CANCELACIÓN DE METAS

//función que devuelve objeto que contiene Cancelación de la Respuesta(cancela el result) 
//se le pasa como parámetro el objeto de manejo de Meta del servidor
rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleRings> goal_handle){

  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Got request to cancel goal");
  (void)goal_handle;
  //devuelve objeto que cancela la respuesta
  return rclcpp_action::CancelResponse::ACCEPT;
}

//define la función execute sin usarla ahora mismo
void execute(const std::shared_ptr<GoalHandleRings>);

//función que acepta una meta  y empieza a realizar el proceso de ejecución(execute) para llegar a ala meta 
void handle_accepted(const std::shared_ptr<GoalHandleRings> goal_handle)
{
  std::thread{execute, goal_handle}.detach();
}

//función que se le pasa una meta y procede a hacer todo el proceso de feedback,hasta la respuesta
void execute(const std::shared_ptr<GoalHandleRings> goal_handle)
{
  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Executing goal");
  //define el loop rate
  rclcpp::Rate loop_rate(0.5);

  auto radius = goal_handle->get_goal()->radius;
  auto result = std::make_shared<Rings::Result>();
  
  if (goal_handle->is_canceling()) {
      result->sequence = sequence;
      goal_handle->canceled(result);
      RCLCPP_INFO(rclcpp::get_logger("server"), 
        "Goal Canceled");
      return;
  }
  if (rclcpp::ok()){
    goal_handle->succeed(result);
    RCLCPP_INFO(rclcpp::get_logger("server"), 
      "Goal Succeeded");
  }
  


  
}

//CREACIÓN DEL ACTION SERVER
int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("action_server");
  auto action_server = 
    rclcpp_action::create_server<Rings>(node,
      "rings",
      handle_goal,
      handle_cancel,
      handle_accepted);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}