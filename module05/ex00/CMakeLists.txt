cmake_minimum_required(VERSION 3.17)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 src/Bureaucrat.cpp main.cpp include/Bureaucrat.hpp)