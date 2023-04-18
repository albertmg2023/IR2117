#include <chrono>
#include<iostream>
#include<cstdlib>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "example_interfaces/msg/bool.hpp"


using namespace std::chrono_literals;
//creo las variables globales donde guardaré si hay obstaculo(true) en las tres posiciones 
bool obstacle_front=false;
bool obstacle_left=false;
bool obstacle_right=false;
bool girandoantes;
bool giroderecha;
bool giroizquierda;


void callback_front(const example_interfaces::msg::Bool::SharedPtr msgfront){

  obstacle_front=msgfront->data;

}
void callback_left(const example_interfaces::msg::Bool::SharedPtr msgleft){

  obstacle_left=msgleft->data;

}
void callback_right(const example_interfaces::msg::Bool::SharedPtr msgright){

  obstacle_right=msgright->data;

}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("avoidance");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
  auto subs_front=node->create_subscription<example_interfaces::msg::Bool>("/front/obstacle",10,callback_front);
  auto subs_left=node->create_subscription<example_interfaces::msg::Bool>("/left/obstacle",10,callback_left);
  auto subs_right=node->create_subscription<example_interfaces::msg::Bool>("/right/obstacle",10,callback_right);
  geometry_msgs::msg::Twist message;
  rclcpp::WallRate loop_rate(50ms);
  //aqui introduzco FSM
  while (rclcpp::ok()) {

    if(obstacle_front){
     
      if(!girandoantes ){
    
      	if(obstacle_left && !obstacle_right){
        	//girar derecha
        	message.linear.x=0.0;
        	message.angular.z=-0.1;
        	giroderecha=true;
        	giroizquierda=false;
        	girandoantes=true;
        	
      	}
      	else if(obstacle_right && !obstacle_left){
        	//girar izquierda
        	message.linear.x=0.0;
        	message.angular.z=0.1;
        	giroizquierda=true;
        	giroderecha=false;
        	girandoantes=true;
        	
        	
      	}
      	else{
        	//girar derecha o izquierda de forma random
      	int numr=rand()%10;
      	if(numr<=4){
        	//girar izquierda
        	message.linear.x=0.0;
        	message.angular.z=0.1;
        	giroizquierda=true;
        	giroderecha=false;
        	girandoantes=true;
        	
        	
      	}
      
      	else{
        	//girar derecha
        	message.linear.x=0.0;
        	message.angular.z=-0.1;
        	giroderecha=true;
        	giroizquierda=false;
        	girandoantes=true;
        	
        	
      	}
      

      	}
      	
      	
      	
    
    }
    else{
    if(giroizquierda){
    	message.linear.x=0.0;
        message.angular.z=0.1;
    
    }
    else if(giroderecha){
    
    	message.linear.x=0.0;
        message.angular.z=-0.1;
    
    
    }
    publisher->publish(message);
    
    
    
    
    
    }
    }
    //si no hay obstaculo hacia delante
    if (!obstacle_front ){
      //seguir hacia delante
      
      message.linear.x=0.1;
      message.angular.z=0.0;
      girandoantes=false;
      publisher->publish(message);

    }
    


    publisher->publish(message);
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}

