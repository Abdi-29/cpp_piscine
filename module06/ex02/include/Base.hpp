#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
public:
	virtual ~Base(void) { std::cout << "Base deconstruct" << std::endl;}
};

#endif