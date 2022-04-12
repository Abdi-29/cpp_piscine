/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:15:22 by abba          #+#    #+#                 */
/*   Updated: 2022/04/06 16:15:22 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 			_value;
	static const int _bits = 8;

public:
	Fixed(Fixed &value);
	Fixed & operator = (Fixed &value);
	Fixed(void);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif