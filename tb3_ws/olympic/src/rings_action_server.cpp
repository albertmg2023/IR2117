//o que hay que icluir para el server

#include <inttypes.h>
#include <memory>
#include<cmath>
//nuestra action creada
#include "olympics_interfaces/action/Rings.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/srv/set_pen.hpp"
#include "turtlesim/srv/teleport_absolute.hpp"

using namespace std::chrono_literals;

//renombramiento de la ación a Fibonacci(realmente del tipo de dato)
using Rings = olympics_interfaces::action::Rings;

//renombamiento del manejo de meta del servidor a GoalHandleFibonacci(realmente del tipo de dato rclcpp_action::ServerGoalHandle<Fibonacci>) EN EL CASO DEL CLIENTE ES ClientGoalHandle<Fibonacci>
using GoalHandleRings = rclcpp_action::ServerGoalHandle<Rings>;


//FUNCIÓN CALLBACK PARA MANEJO DE NUEVAS METAS

//función que devuelve dato de tipo rclcpp_action::GoalResponse a la que 
//se le pasa de parámetros el id de la meta y la meta contenida en el action Rings a la que le llamamos goal,se puede acceder a la meta que hemos definido mediante goal->metadefinida

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

//función que acepta una meta  y empieza a realizar el proceso de ejecución(execute) para llegar a a la meta 

void handle_accepted(const std::shared_ptr<GoalHandleRings> goal_handle)
{
  std::thread{execute, goal_handle}.detach();
}

//función que se le pasa una meta y procede a hacer todo el proceso de feedback,hasta la respuesta
void execute(const std::shared_ptr<GoalHandleRings> goal_handle)
{
  RCLCPP_INFO(rclcpp::get_logger("server"), 
    "Executing goal");

  //definimos  e inicializamos goal,result y feedback 
  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<Rings::Result>();
  auto feedback=std::make_shared<Rings::Feedback>();

  auto & numcirculo=feedback->drawing_ring;
  auto & angulocirculo=feedback->ring_angle;
  
  //el radio proviene del manejo de meta del servidor(la meta viene del cliente)
  float radio=goal->radius;
  
  auto node = rclcpp::Node::make_shared("rings");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist  >("/turtle1/cmd_vel", 10);
  node->declare_parameter("radius",1.0);
  geometry_msgs::msg::Twist message;

  rclcpp::WallRate loop_rate(500ms);
  double radius=node->get_parameter("radius").get_parameter_value().get<double>();
  double slooprate=0.5;
  double w=0.5;
  double vl=radius*w;
  int j=0;
  double m=(M_PI*2)/(w*slooprate);

  double posx[5]={2.5,(2.5+(radius*2)+(radius/6)),(2.5+2*((radius*2)+(radius/6))),(2.5+radius+(radius/6)),(2.5+radius+(radius/6)+(radius*2)+(radius/6))};
  double posy[5]={6,6,6,6-radius,6-radius};
  int r[5]={50,0,255,255,20};
  int g[5]={0,0,0,255,255};
  int b[5]={255,0,0,0,0};





  for(int i=0;i<5;i++){

    if (goal_handle->is_canceling()) {
      result->sequence = sequence;
      goal_handle->canceled(result);
      RCLCPP_INFO(rclcpp::get_logger("server"), 
        "Goal Canceled");
      return;
    }

    numcirculo=i+1;
    angulocirculo=0;

    //publico feedback al principio de cada circulo
    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(rclcpp::get_logger("server"), 
      "Publish Feedback");
    loop_rate.sleep();

    rclcpp::Client<turtlesim::srv::SetPen>::SharedPtr clientsetpen =node->create_client<turtlesim::srv::SetPen>("/turtle1/set_pen");
    //levata lapiz
    auto requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
    requestsetpen->width = 0;
    requestsetpen->off = 255;

    while (!clientsetpen->wait_for_service(1s)) {
      
    }

    auto resultsetpen = clientsetpen->async_send_request(requestsetpen);
    

    //el cliente teleport_absolute

    rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr cliteleportabs =node->create_client<turtlesim::srv::TeleportAbsolute>("/turtle1/teleport_absolute");
    //teletransporta a punto inicial
    auto reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();
    reqteleportabs->x=posx[i];
    reqteleportabs->y=posy[i];
    reqteleportabs->theta=0;

    while (!cliteleportabs->wait_for_service(1s)) {
      
    }


    auto resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
    //color  y lapiz abajo
    

    requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
    requestsetpen->r = r[i];
    requestsetpen->g = g[i];
    requestsetpen->b = b[i];
    requestsetpen->off =0;
    requestsetpen->width = 2;

    while (!clientsetpen->wait_for_service(1s)) {
      
    }
    
    

    resultsetpen = clientsetpen->async_send_request(requestsetpen);
    


    //dibuja circulo
    j=0;
    double ang=m/360;
    while (rclcpp::ok() && (j<m)) {
      message.angular.z=w;
      message.linear.x=vl;
      publisher->publish(message);
      rclcpp::spin_some(node);
      loop_rate.sleep();
      j+=1;
    }
    message.angular.z=0;
    message.linear.x=0;


  }

  rclcpp::shutdown();
  return 0;
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