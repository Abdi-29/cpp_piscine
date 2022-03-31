#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "copy constructor called" << std::endl;
//	copy.operator=(copy);
	*this = copy;
}

Fixed & Fixed::operator= (Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
