/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/18 10:28:42 by abba          #+#    #+#                 */
/*   Updated: 2022/04/18 10:28:42 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <iomanip>

class Scalar
{
private:
	Scalar(Scalar &) { };
	Scalar	operator=(Scalar &) { return *this; };
public:
	Scalar(void) { };
	~Scalar(void) { };
	std::string input;
	int 		type;

	//function
	bool isValidInput(std::string str);
};

#endif