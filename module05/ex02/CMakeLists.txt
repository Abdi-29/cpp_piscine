cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 src/Bureaucrat.cpp src/Form.cpp main.cpp include/Bureaucrat.hpp include/Form.hpp include/ShrubberyCreationForm.hpp
        include/RobotomyRequestForm.hpp include/PresidentialPardonForm.hpp src/ShrubberyCreationForm.cpp src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp)