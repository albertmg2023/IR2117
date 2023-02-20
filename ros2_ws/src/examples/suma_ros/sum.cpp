#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"
#include <iostream>
 int sum;
 std::shared_ptr<rclcpp::Publisher< rclcpp::Publisher<std_msgs::msg::Int32> > publisher;
void topic_callback(const std_msgs::msg::Int32::SharedPtr msg)
{

  sum+=msg->data;
  std_msgs::msg::Int32::SharedPtr message
  message.data=sum;
  publisher->publish(message);
  
  std::cout << msg->data << std::endl;
}

int main(int argc, char * argv[])
{
  sum=0;
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("sum");
  auto subscription = node->create_subscription<std_msgs::msg::Int32>("number", 10, topic_callback);
  publisher=node->create_subscription<td_msgs::msg::Int32>("sum",10);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

