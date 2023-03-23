#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

void topic_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
{
  std::cout <<"ranges[0]= "<< msg->ranges[0] << std::endl;
  std::cout <<"ranges[90]= "<< msg->ranges[90] << std::endl;
  std::cout <<"ranges[180]= "<< msg->ranges[180] << std::endl;
  std::cout <<"ranges[270]= "<< msg->ranges[270] << std::endl;
}
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("wandering");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  auto subscriber = node->create_subscription<sensor_msgs::msg::LaserScan>("scan",10,topic_callback);
  
  geometry_msgs::msg::Twist message;
  message.linear.x=0;
  rclcpp::WallRate loop_rate(10ms);
  
  while (rclcpp::ok()) {

    publisher->publish(message);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}

