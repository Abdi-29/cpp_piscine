/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:14:32 by abba          #+#    #+#                 */
/*   Updated: 2022/04/06 16:14:32 by abba          ########   odam.nl         */
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

	Fixed	&operator ++(void);
	Fixed	operator ++(int);
	Fixed	&operator --(void);
	Fixed	operator --(int);

	static Fixed	&min(Fixed &x, Fixed &y);
	static Fixed	&max(Fixed &x, Fixed &y);
	const static Fixed	&min(Fixed const &x, Fixed const &y);
	const static Fixed	&max(Fixed const &x, Fixed const &y);

	float	toFloat( void ) const;
	int		toInt( void ) const;
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};
std::ostream & operator<<(std::ostream & output, Fixed const &fixed);

#endif