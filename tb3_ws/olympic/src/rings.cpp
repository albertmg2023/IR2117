#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

int main(int argc, char * argv[])
{
 rclcpp::init(argc, argv);
 auto node = rclcpp::Node::make_shared("rings");
 auto publisher = node->create_publisher<geometry_msgs::msg::Twist  >("/turtle1/cmd_vel", 10);
 
 geometry_msgs::msg::Twist message;
 rclcpp::WallRate loop_rate(50ms);
 double slooprate=0.05;
 double w=0.4;
 int j=0;
 int  m=((3.14*2)/w)/slooprate;
  while (rclcpp::ok() && (j<m)) {
    message.angular.z=w;
    message.linear.x=0.2;
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

