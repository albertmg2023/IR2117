#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/srv/set_pen.hpp"
#include "turtlesim/srv/teleport_absolute.hpp"
#include <cmath>

using namespace std::chrono_literals;

int main(int argc, char * argv[])
{
 rclcpp::init(argc, argv);
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

//  //el cliente de  setpen
//   rclcpp::Client<turtlesim::srv::SetPen>::SharedPtr clientsetpen =node->create_client<turtlesim::srv::SetPen>("/turtle1/set_pen");
//   //levata lapiz
//   auto requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->width = 0;
//   requestsetpen->off = 255;

//   while (!clientsetpen->wait_for_service(1s)) {
    
//   }

//   auto resultsetpen = clientsetpen->async_send_request(requestsetpen);
  

// //el cliente teleport_absolute

//   rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr cliteleportabs =node->create_client<turtlesim::srv::TeleportAbsolute>("/turtle1/teleport_absolute");
//   //teletransporta a punto inicial
//   auto reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();
//   reqteleportabs->x=2.5;
//   reqteleportabs->y=6.0;
//   reqteleportabs->theta=0;

//   while (!cliteleportabs->wait_for_service(1s)) {
    
//   }


//   auto resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
//   //color del primer circulo y lapiz abajo
  

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->r = 50;
//   requestsetpen->g = 0;
//   requestsetpen->b = 255;
//   requestsetpen->off =0;
//   requestsetpen->width = 2;

//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //dibuja 1er circulo
//   while (rclcpp::ok() && (j<m)) {
//     message.angular.z=w;
//     message.linear.x=vl;
//     publisher->publish(message);
//     rclcpp::spin_some(node);
//     loop_rate.sleep();
//     j+=1;
//   }
//   message.angular.z=0;
//   message.linear.x=0;

//   //second circle(black)

//   //levanta lapiz

 

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->width = 0;
//   requestsetpen->off = 255;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //teletransporta a posicion del circulo2
//   reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();

//   reqteleportabs->x=2.5+(radius*2)+(radius/6);
//   reqteleportabs->y=6.0;
//   reqteleportabs->theta=0;

//   resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
//   //lapiz abajo y color negro
  

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->r = 0;
//   requestsetpen->g = 0;
//   requestsetpen->b = 0;
//   requestsetpen->width = 2;
//   requestsetpen->off = 0;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //dibujacirculo2
//   j=0;
//   while (rclcpp::ok() && (j<m)) {
//     message.angular.z=w;
//     message.linear.x=vl;
//     publisher->publish(message);
//     rclcpp::spin_some(node);
//     loop_rate.sleep();
//     j+=1;
//   }
//   message.angular.z=0;
//   message.linear.x=0;

//   //tercer circulo(rojo)
//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->width = 0;
//   requestsetpen->off = 255;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //teletransporta a posicion del circulo3
//   reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();

//   reqteleportabs->x=2.5+2*((radius*2)+(radius/6));
//   reqteleportabs->y=6.0;
//   reqteleportabs->theta=0;

//   resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
//   //lapiz abajo y color rojo
  

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->r = 255;
//   requestsetpen->g = 0;
//   requestsetpen->b = 0;
//   requestsetpen->width = 2;
//   requestsetpen->off = 0;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //dibujacirculo3
//   j=0;
//   while (rclcpp::ok() && (j<m)) {
//     message.angular.z=w;
//     message.linear.x=vl;
//     publisher->publish(message);
//     rclcpp::spin_some(node);
//     loop_rate.sleep();
//     j+=1;
//   }
//   message.angular.z=0;
//   message.linear.x=0;
// //circulo 4(amarillo)

// requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->width = 0;
//   requestsetpen->off = 255;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //teletransporta a posicion del circulo4
//   reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();

//   reqteleportabs->x=2.5+radius+(radius/6);
//   reqteleportabs->y=6.0-radius;
//   reqteleportabs->theta=0;

//   resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
//   //lapiz abajo y color amrillo
  

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->r = 255;
//   requestsetpen->g = 255;
//   requestsetpen->b =0;
//   requestsetpen->width = 2;
//   requestsetpen->off = 0;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //dibujacirculo4
//   j=0;
//   while (rclcpp::ok() && (j<m)) {
//     message.angular.z=w;
//     message.linear.x=vl;
//     publisher->publish(message);
//     rclcpp::spin_some(node);
//     loop_rate.sleep();
//     j+=1;
//   }
//   message.angular.z=0;
//   message.linear.x=0;

//   //circulo 5 (verde)

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->width = 0;
//   requestsetpen->off = 255;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //teletransporta a posicion del circulo5
//   reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();

//   reqteleportabs->x=2.5+radius+(radius/6)+(radius*2)+(radius/6);
//   reqteleportabs->y=6.0-radius;
//   reqteleportabs->theta=0;

//   resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
//   //lapiz abajo y color verde claro
  

//   requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
//   requestsetpen->r = 20;
//   requestsetpen->g = 255;
//   requestsetpen->b = 0;
//   requestsetpen->width = 2;
//   requestsetpen->off = 0;
//   resultsetpen = clientsetpen->async_send_request(requestsetpen);
//   //dibujacirculo5
//   j=0;
//   while (rclcpp::ok() && (j<m)) {
//     message.angular.z=w;
//     message.linear.x=vl;
//     publisher->publish(message);
//     rclcpp::spin_some(node);
//     loop_rate.sleep();
//     j+=1;
//   }
//   message.angular.z=0;
//   message.linear.x=0;

  //con el bucle (optimización)

double posx[5]={2.5,(2.5+(radius*2)+(radius/6)),(2.5+2*((radius*2)+(radius/6))),(2.5+radius+(radius/6)),(2.5+radius+(radius/6)+(radius*2)+(radius/6))};
double posy[5]={6,6,6,6-radius,6-radius};
int r[5]={50,0,255,255,20};
int g[5]={0,0,0,255,255};
int b[5]={255,0,0,0,0};





for(int i=0;i<5;i++){

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

