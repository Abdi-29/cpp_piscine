#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 			_value;
	static const int _bits;

public:
	Fixed(Fixed &value);
	Fixed & operator = (Fixed &value);
	Fixed(void);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif