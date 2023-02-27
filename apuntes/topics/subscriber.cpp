#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <iostream>

void topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
  std::cout << msg->data << std::endl;
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("subscriber");
  //se le indica el nombre del CANAL donde esta suscrito("topic") es decir ,lo que une a los nodos,
  //el tipo de mensaje que lee(<std_msgs::msg::String>) 
  //y la funcion que realiza que es topic_callback anteriormente definida
  auto subscription = node->create_subscription<std_msgs::msg::String>("topic", 10, topic_callback);
  //está esperando con spin a que le lleguen mensajes 
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

