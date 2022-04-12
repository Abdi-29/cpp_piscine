cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_library(ex00 ClapTrap.cpp main.cpp DiamondTrap.cpp ScavTrap.cpp FragTrap.cpp include/ClapTrap.hpp include/DiamondTrap.hpp include/ScavTrap.hpp include/FragTrap.hpp)