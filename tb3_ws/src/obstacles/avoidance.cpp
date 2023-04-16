#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msg/msg/twist.hpp"
#include "example_interfaces/msg/bool.hpp"

using namespace std::chrono_literals;
void callback_front(const example_interfaces::msg::Bool::Sharedptr msg){

}
void callback_left(const example_interfaces::msg::Bool::Sharedptr msg){

}
void callback_right(const example_interfaces::msg::Bool::Sharedptr msg){

}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("avoidance");
  auto publisher = node->create_publisher<geometry_msg::msg::Twist>("cmd_vel", 10);
  auto subs_front=node->create_subscription<example_interfaces::msg::Bool>("/front/obstacle",10,callback_front);
  auto subs_front=node->create_subscription<example_interfaces::msg::Bool>("/left/obstacle",10,callback_left);
  auto subs_front=node->create_subscription<example_interfaces::msg::Bool>("/right/obstacle",10,callback_right);
  geometry_msg::msg::Twist message;
  rclcpp::WallRate loop_rate(500ms)

  while (rclcpp::ok()) {
    message.data = "Hello, world! " + std::to_string(publish_count++);
    publisher->publish(message);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}

