#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

bool stopdelante=false;
void topic_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg){
  std::cout <<" MIN_ranges[0..9]= ";
  double min1=msg->ranges[0];
  for(int i=0;i<10;i++){
  if(msg->ranges[i]<min1){
  min1=msg->ranges[i];
  }
  }
  std::cout <<min1<< std::endl;
  double min2=msg->ranges[350];
  std::cout <<"MIN_ranges[350..359]= ";
  for(int j=350;j<360;j++){
  if(msg->ranges[j]<min2){
  min2=msg->ranges[j];
  }
  }
  std::cout <<min2<< std::endl;
  if(min1<1 || min2<2){
  
  stopdelante=true;
  }
  else{
  stopdelante=false;
  }
  
  
}		
  
int main(int argc, char * argv[])
{
  
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("wandering");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  auto subscriber = node->create_subscription<sensor_msgs::msg::LaserScan>("scan",10,topic_callback);
  
  geometry_msgs::msg::Twist message;
  message.linear.x=0.5;
  rclcpp::WallRate loop_rate(10ms);
  
  while (rclcpp::ok()) {
    if(stopdelante){
    message.linear.x=0;
    }
    else{
    
    message.linear.x=0.5;
    
    }
    publisher->publish(message);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}

