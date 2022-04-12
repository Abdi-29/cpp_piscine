#include "include/Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	return;
}

Fixed::Fixed(Fixed const &copy)
{
//	copy.operator=(copy);
	this->_value = copy.getRawBits();
}

Fixed::Fixed(int const value)
{
	_value = value << _bits;
	return;
}

Fixed::Fixed(float const value)
{
	_value = (int)roundf(value * (1 << _bits));
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator= (Fixed const & fixed)
{
	this->_value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &fixed)
{
	return (_value > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed)
{
	return (_value < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed)
{
	return (_value >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed)
{
	return (_value <= fixed.getRawBits());
}

bool Fixed::operator ==(Fixed const &fixed)
{
	return (_value == fixed.getRawBits());
}

bool Fixed::operator !=(Fixed const &fixed)
{
	return (_value != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &fixed)
{
	return Fixed(toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(Fixed const &fixed)
{
	return Fixed(toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(Fixed const &fixed)
{
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(Fixed const &fixed)
{
	return Fixed(toFloat() / fixed.toFloat());
}

Fixed	&Fixed::min(Fixed &x, Fixed &y)
{
	if (x._value < y._value)
		return x;
	return y;
}

const Fixed	&Fixed::min(Fixed const &x, Fixed const &y)
{
	if (x._value < y._value)
		return x;
	return y;
}

Fixed	&Fixed::max(Fixed &x, Fixed &y)
{
	if (x._value > y._value)
		return x;
	return y;
}

const Fixed	&Fixed::max(Fixed const &x, Fixed const &y)
{
	if (x._value > y._value)
		return x;
	return y;
}

Fixed	&Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	c_fixed(*this);
	operator++();
	return c_fixed;
}

Fixed	Fixed::operator--(int)
{
	Fixed	c_fixed(*this);
	operator--();
	return c_fixed;
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
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return _value >> _bits;
}
