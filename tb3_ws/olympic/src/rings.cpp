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

 //el cliente de  setpen
 rclcpp::Client<turtlesim::srv::SetPen>::SharedPtr clientsetpen =node->create_client<turtlesim::srv::SetPen>("/turtle1/set_pen");

  auto requestsetpen = std::make_shared<turtlesim::srv::SetPen::Request>();
  requestsetpen->r = 50;
  requestsetpen->g = 0;
  requestsetpen->b = 255;
  requestsetpen->width = 0;
  requestsetpen->off = 255;



  while (!clientsetpen->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto resultsetpen = clientsetpen->async_send_request(requestsetpen);
  // Wait for the resu

//el cliente teleport_absolute

rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr cliteleportabs =node->create_client<turtlesim::srv::TeleportAbsolute>("/turtle1/teleport_absolute");

  auto reqteleportabs = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();
  reqteleportabs->x=2.5;
  reqteleportabs->y=6.0;
  reqteleportabs->theta=0;




  while (!cliteleportabs->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto resultteleportabs = cliteleportabs->async_send_request(reqteleportabs);
  requestsetpen->off =0;
  requestsetpen->width = 2;

  resultsetpen = clientsetpen->async_send_request(requestsetpen);



  




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
 rclcpp::shutdown();
 return 0;
}

