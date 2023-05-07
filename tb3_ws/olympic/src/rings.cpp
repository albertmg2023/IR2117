#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
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

