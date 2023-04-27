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
 rclcpp::WallRate loop_rate(500ms);
 j=0;
 int  m=((3.14*2)/0.1)/0.01;
  while (rclcpp::ok() && (j<m)) {
    message.angular.z=0.1;
    publisher->publish(message);
    rclcpp::spin_some(node);
    loop_rate.sleep();
    j+=1;
  }
  message.angular.z=0;	
 rclcpp::shutdown();
 return 0;
}

