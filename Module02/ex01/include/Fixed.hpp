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
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int 	getRawBits(void) const;
};
std::ostream & operator<<(std::ostream & output, Fixed const &fixed);

#endif