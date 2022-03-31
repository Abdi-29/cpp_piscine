#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "copy constructor called" << std::endl;
//	copy.operator=(copy);
	this->_value = copy.getRawBits();
}

Fixed::Fixed(int const value)
{
	std::cout << "int constructor called" << std::endl;
	_value = value << _bits;
	return;
}

Fixed::Fixed(float const value)
{
	std::cout << "float constructor called" << std::endl;
	_value = (int)roundf(value * (1 << _bits));
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator= (Fixed const & fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &fixed)
{
	return (*this > fixed);
}

bool Fixed::operator<(Fixed const &fixed)
{
	return (*this < fixed);
}

bool Fixed::operator>=(Fixed const &fixed)
{
	return (*this >= fixed);
}

bool Fixed::operator<=(Fixed const &fixed)
{
	return (*this <= fixed);
}

bool Fixed::operator ==(Fixed const &fixed)
{
	return (*this == fixed);
}

bool Fixed::operator !=(Fixed const &fixed)
{
	return !(*this == fixed);
}

std::ostream &operator<<(std::ostream &output, Fixed const & fixed)
{
	output << fixed.toFloat();
	return output;
}

float Fixed::toFloat(void) const
{
	return (float)(_value / (float)(1 << _bits));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}


int Fixed::toInt(void) const
{
	return _value >> _bits;
}
