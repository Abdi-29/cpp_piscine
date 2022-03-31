#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 			_value;
	static const int _bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &copy);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);

	Fixed & operator =(Fixed const &fixed);
	bool operator>(Fixed const &fixed);
	bool operator<(Fixed const &fixed);
	bool operator>=(Fixed const &fixed);
	bool operator<=(Fixed const &fixed);
	bool operator==(Fixed const &fixed);
	bool operator!=(Fixed const &fixed);

	Fixed	operator +(Fixed const &fixed);
	Fixed	operator -(Fixed const &fixed);
	Fixed	operator *(Fixed const &fixed);
	Fixed	operator /(Fixed const &fixed);

	Fixed	operator ++();
	Fixed	operator ++(int value);
	Fixed	operator --();
	Fixed	operator --(int value);

	static Fixed	&min(Fixed &x, Fixed &y);
	static Fixed	&max(Fixed const &x, Fixed const &y);
	static Fixed	&min(Fixed &x, Fixed &y);
	static Fixed	&min(Fixed const &x, Fixed const &y);

	float	toFloat( void ) const;
	int		toInt( void ) const;
	int 	getRawBits(void) const;
};
std::ostream & operator<<(std::ostream & output, Fixed const &fixed);

#endif