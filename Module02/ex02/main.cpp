/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:13:52 by abba          #+#    #+#                 */
/*   Updated: 2022/04/06 16:13:52 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"

int	main(void) {
	Fixed a;

	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	return 0;
}
