
//No se debe cambiar casi 
cmake_minimum_required(VERSION 3.5)
//el nombre del proyecto igual que el package.XML
project(examples_topics)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
//especificar las dependencias 
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
//queremos progrma que se llame publisher con el programa publisher.cpp,para crear los ejecutables
add_executable(publisher publisher.cpp)
ament_target_dependencies(publisher rclcpp std_msgs)

add_executable(subscriber subscriber.cpp)
ament_target_dependencies(subscriber rclcpp std_msgs)
//le especificamos el nombre de los ejecutables anteriores
install(TARGETS
  publisher
  subscriber
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
