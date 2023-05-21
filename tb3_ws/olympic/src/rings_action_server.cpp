//o que hay que icluir para el server

#include <inttypes.h>
#include <memory>
//nuestra action creada
#include "action_tutorials_interfaces/action/fibonacci.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

//renombramiento de la ación a Fibonacci(realmente del tipo de dato)
using Fibonacci = 
  action_tutorials_interfaces::action::Fibonacci;

//renombamiento del manejo de meta del servidor a GalHandleFibonacci(realmente del tipo de dato rclcpp_action::ServerGoalHandle<Fibonacci>) EN EL CASO DEL CLIENTE ES ClientGoalHandle<Fibonacci>
using GoalHandleFibonacci = rclcpp_action::ServerGoalHandle<Fibonacci>;


//FUNCIÓN CALLBACK PARA MANEJO DE NUEVAS METAS

//función que devuelve dato de tipo rclcpp_action::GoalResponse a la que 
//se le pasa de parámetros el id de la meta y la meta contenida en el action Fibonacci a la que le llamamos goal,se puede acceder a la meta que hemos definido mediante goal->metadefinida
rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Fibonacci::Goal> goal)
{
  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Got goal request with order %d", goal->order);
  (void)uuid;
  //devuelve función que acepta la nueva meta y la ejecuta
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

//FUNCIÓN CALLBACK PARA CANCELACIÓN DE METAS

//función que devuelve objeto que contiene Cancelación de la Respuesta(cancela el result) 
//se le pasa como parámetro el objeto de manejo de Meta del servidor
rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleFibonacci> goal_handle){

  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Got request to cancel goal");
  (void)goal_handle;
  //devuelve objeto que cancela la respuesta
  return rclcpp_action::CancelResponse::ACCEPT;
}

//define la función execute sin usarla ahora mismo
void execute(const std::shared_ptr<GoalHandleFibonacci>);

//función que acepta una meta  y empieza a realizar el proceso de ejecución(execute) para llegar a ala meta 
void handle_accepted(const std::shared_ptr<GoalHandleFibonacci> goal_handle)
{
  std::thread{execute, goal_handle}.detach();
}

//función que se le pasa una meta y procede a hacer todo el proceso de feedback,hasta la respuesta
void execute(const std::shared_ptr<GoalHandleFibonacci> goal_handle)
{
  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Executing goal");
  //define el loop rate
  rclcpp::Rate loop_rate(1);
  //recoge la meta desde el objeto puntero que maneja la meta
  const auto goal = goal_handle->get_goal();
  //crea variable para feedback y la inicializa con un constructor.
  auto feedback = std::make_shared<Fibonacci::Feedback>();
  //guarda en una variable de referencia (es decir es la misma variable secuence que feedback->partial_secuence, la secuencia de números del feedback.
  auto & sequence = feedback->partial_sequence;
  //añade al final de la secuencia del feedback un 0 y un 1
  sequence.push_back(0);
  sequence.push_back(1);
  
  //crea una variable result y la inicializa con valores predeterminados.
  auto result = std::make_shared<Fibonacci::Result>();

  for (int i = 1; (i < goal->order) && rclcpp::ok(); ++i) {

    //si el objeto de manejo de meta devuelve true con su función is_cancelling,es decir si  se cancela la meta
    if (goal_handle->is_canceling()) {
      result->sequence = sequence;
      goal_handle->canceled(result);
      RCLCPP_INFO(rclcpp::get_logger("server"), 
        "Goal Canceled");
      return;
    }
    
    //añade al final de la secuencia la suma de la posicion actual y la anterior
    sequence.push_back(sequence[i] + sequence[i - 1]);

    //SE PUBLICA EL FEEDBACK
    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(rclcpp::get_logger("server"), 
      "Publish Feedback");
    loop_rate.sleep();
  }
  //si despues de todo el proceso,no ha habido ningún error, se muetra que se ha conseguido la meta
  if (rclcpp::ok()) {
    result->sequence = sequence;
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
    rclcpp_action::create_server<Fibonacci>(node,
      "fibonacci",
      handle_goal,
      handle_cancel,
      handle_accepted);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}