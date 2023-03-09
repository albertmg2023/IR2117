#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/Odometry.hpp"


using namespace std::chrono_literals;

double [3] coordygiro_ini=[0,0,0];




void topic_callback(const nav_msgs::msg::Odometry::SharedPtr m){
        //pos en x
	coordygiro_ini[0]=m->pose(0);
	//pos en y
	coordygiro_ini[1]=m->pose(1);
	//giro en z
	coordygiro_ini[2]=m->pose(5);
	
	
	
       



}



int main(int argc, char * argv[])
{
	
  double[3] coordygiro_actual=[0,0,0];
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("square_odom");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  auto subscriber= node->create_subscription<nav_msgs::msg::Odometry>("odom", 10,topic_callback);
  
  node->declare_parameter("linera_speed",0.1);
  node->declare_parameter("angular_speed",3.1416/20);
  node->declare_parameter("square_length",1.0);
  
  
  
  geometry_msgs::msg::Twist message;
  rclcpp::WallRate loop_rate(10ms);
  
  double linear_speed=node->get_parameter("linear_speed").get_parameter_value().get<doble>();
  double angular_speed=node->get_parameter("angular_speed").get_parameter_value().get<doble>();
  double square_length=node->get_parameter("square_length").get_parameter_value().get<doble>();
  
  
  
  for(int k=0;k<4;k++){
  	coordygiro_actual=coordygiro_ini;
  	int i=0;
  	//distancia(m) de avance
  	//cuantas veces debe avanzar a 0.1m/s para llegar a la distancia d con 	loop rate de 		//0.01s
  	//si avanza a 0.1m/s para llegar a un  metro hacen falta 10s,
  	//si el looop rate es de 0.01s hacen falta 10/0.01 repeticiones
  	int n=(square_length/(0.01*linear_speed);
  	while (rclcpp::ok() && (i<n)) {
    	message.linear.x=linear_speed;
    	publisher->publish(message);
    	rclcpp::spin_some(node);
    	loop_rate.sleep();
    	i+=1;
  	}
  	message.linear.x=0;
  	int j=0;
  	//quiero girar 90 grados=pi/2 radianes,si velocidad angular es rad/	s ,hay 	que 
  	//girar -> pi/velangular=segundos de giro    iteraciones= segundosgiro/looprate= 		//(pi/		velangular)/0.01=m
  	int  m=((3.14/2)/angular_speed)/0.01;
  	while (rclcpp::ok() && (j<m)) {
    	message.angular.z=angular_speed;
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

