#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("square");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  geometry_msgs::msg::Twist message;
  
  rclcpp::WallRate loop_rate(10ms);
  for(int k=0;k<4;k++){
  	int i=0;
  	//distancia(m) de avance
  	//cuantas veces debe avanzar a 0.1m/s para llegar a la distancia d con 	loop rate de 		//0.01s
  	//si avanza a 0.1m/s para llegar a un  metro hacen falta 10s,
  	//si el looop rate es de 0.01s hacen falta 10/0.01 repeticiones
  	int n=(10/0.01);
  	while (rclcpp::ok() && (i<n)) {
    	message.linear.x=0.1;
    	publisher->publish(message);
    	rclcpp::spin_some(node);
    	loop_rate.sleep();
    	i+=1;
  	}
  	message.linear.x=0;
  	int j=0;
  	//quiero girar 90 grados=pi/2 radianes,si velocidad angular es rad/	s ,hay 	que 
  	//girar -> pi/velangular=segundos de giro    iteraciones= segundosgiro/looprate= 		//(pi/		velangular)/0.01=m
  	int  m=((3.14/2)/0.1)/0.01;
  	while (rclcpp::ok() && (j<m)) {
    	message.angular.z=0.1;
    	publisher->publish(message);
    	rclcpp::spin_some(node);
    	loop_rate.sleep();
    	j+=1;
  	}
  	message.angular.z=0;	
  
  }
  
  
  rclcpp::shutdown();
  return 0;
}

