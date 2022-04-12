cmake_minimum_required(VERSION 3.17)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

add_library(ex00 ClapTrap.cpp main.cpp include/ClapTrap.hpp)