
#include <iostream>
#include<math.h>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "example_interfaces/msg/bool.hpp"


std::shared_ptr< rclcpp::Publisher<example_interfaces::msg::Bool>  > publisher;
float obs_angle_max;
float obs_angle_min;
float obs_distlimite;

void callback(const sensor_msgs::msg::LaserScan::SharedPtr msg1)
{

	example_interfaces::msg::Bool out_msg;
	out_msg.data=false;
	float angle=msg1->angle_min;
	for(float range: msg1->ranges){
		if(angle>M_PI){
      angle-=2*M_PI;

    } 
		if((angle>=obs_angle_min) and (angle<=obs_angle_max)){
		
			if(range<=obs_distlimite)
				out_msg.data=true;
		}
		angle+=msg1->angle_increment;
	}
	publisher->publish(out_msg);
	

 
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("detector");
  auto subscription = node->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, callback);
  publisher=node->create_publisher<example_interfaces::msg::Bool>("obstacle",10);
  node->declare_parameter("obs_angle_min",-M_PI/8);
  node->declare_parameter("obs_angle_max",M_PI/8);
  node->declare_parameter("obs_distlimite",1.0);
  obs_angle_min=node->get_parameter("obs_angle_min").get_parameter_value().get<float>();
  obs_angle_max=node->get_parameter("obs_angle_max").get_parameter_value().get<float>();
  obs_distlimite=node->get_parameter("obs_distlimite").get_parameter_value().get<float>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

