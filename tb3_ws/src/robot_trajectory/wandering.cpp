#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

void topic_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg){
 std::cout <<"ranges[0..9]= "<< std::endl<<std::endl;
  for(int i=0;i<10;i++){
  std::cout <<"ranges[ "<<i<<"] = "<< msg->ranges[i] << std::endl;
  
  }
  std::cout <<"ranges[350..359]= "<< std::endl<<std::endl;
  
  for(int j=350;j<360;j++){
  std::cout <<"ranges[ "<<j<<"] = "<< msg->ranges[j] << std::endl;
  }
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

