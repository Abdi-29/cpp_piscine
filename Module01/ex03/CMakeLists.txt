cmake_minimum_required(VERSION 3.17)
project(Module01-ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(Module01-ex03 main.cpp HumanA.cpp HumanB.cpp include/HumanA.hpp include/HumanB.hpp include/Weapon.hpp Weapon.cpp)