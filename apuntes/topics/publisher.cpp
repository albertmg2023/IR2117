
//modulo que incluye funciones con el tiempo,el include con <  >
// son de la biblioteca estandar de c++ y los de " " son modulos
// creados por nosotros o otros modulos que no son estandar
#include <chrono>
//inlcuye chrono_literals que son por ejemplo 30s,1min,.. es decir una
// nomenclatura de tiempo con numeros y letras(1s)
// crono::seconds halfmin =1s;  definimos la variable halfmin como objeto seconds
//para mostrar falfmin como un string  hacemos ---->    halfmin.count()
#include "rclcpp/rclcpp.hpp"
//tiene diferentes clases (Node,Publisher,Subscription,...)
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;


//los dos puntos indican que lo de la derecha proviene del namespace/clase de la izquierda

int main(int argc, char * argv[])
{
  


  //inicializa lo que se necesita para el programa de ros
  rclcpp::init(argc, argv);
  //se define un nodo, es una variable (  que es un puntero a Nodo) 
  //de la clase Node  creado  con el método meke_shared ,esta inicializado con el nombre de "publisher"
  auto node = rclcpp::Node::make_shared("publisher");

  //creamos la variable publisher que se crea con un método del nodo creado 
  //<std_msgs::msg::String> es el tipo de mensajes que envia , 
  //en el método create_publisher("topic",10), "topic" es el canal por donde se envia el mensaje  y 
  //10 es cúando queremos que se vacie el mensjae(despues de 10 mensajes)
  auto publisher = node->create_publisher<std_msgs::msg::String>("topic", 10);
  // es el objeto que constituye la información,
  //para cada mensjae hay que poner el #inlcude correspondiente,hay mas tipos de mensajes

  //declaramos la variable message de tipo std_msgs::msg,NO SE PUEDE PONER AUTO
  std_msgs::msg::String message;

  auto publish_count = 0;
  //si no tuvieramos la librería chrono tendríamos que poner el valor sin s ya que 500ms daría error 
  rclcpp::WallRate loop_rate(500ms);
 
  //rclcpp::ok() es un método que devuelve un bool que indica si el programa esta funcionando bien 
  while (rclcpp::ok()) {
    //le damos valor al objeto message anteriormente creado con 
    //message.data  que es una variable string de ese objeto
    message.data = "Hello, world! " + std::to_string(publish_count++);
    //hacemos que el publisher publique el mensaje
    publisher->publish(message);
    //le dice a ros que se realicen las acciones pendientes por ejeplo vaciar el bufer de mensajes
    rclcpp::spin_some(node);
    //frecuencia a la que queremos repetir el bucle while
    //el sleep ajusta el tiempo para que el loop dure en este caso 500s ,
    // si las acciones del while dura 300ms,el sleep es de 200ms
    loop_rate.sleep();
  }
  //detiene el progrma de ros
  rclcpp::shutdown();
  return 0;
}

