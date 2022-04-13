/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 14:39:54 by abba          #+#    #+#                 */
/*   Updated: 2022/04/13 14:39:54 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	test;
	Bureaucrat	test1("Siege", 3);
	std::cout << test << std::endl;
	std::cout << test1 << std::endl;

	try
	{
		Bureaucrat	test2("test2", 153);
		std::cout << test2 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	test3("test3", 149);
		test3.decrement(2);
		std::cout << test3 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	test4("test4", 1);
		test4.increment(2);
		std::cout << test4 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	test5("test5", 10);
		test5.increment(2);
		std::cout << test5 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}