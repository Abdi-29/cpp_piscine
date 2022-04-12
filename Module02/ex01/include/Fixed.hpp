/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:14:58 by abba          #+#    #+#                 */
/*   Updated: 2022/04/06 16:14:58 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	void 	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int 	getRawBits(void) const;
};
std::ostream & operator<<(std::ostream & output, Fixed const &fixed);

#endif