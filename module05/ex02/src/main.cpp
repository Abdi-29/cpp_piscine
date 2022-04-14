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
#include "include/Form.hpp"

int main(void)
{
	std::cout << "----------------TEST 1--------------------" << std::endl;
	try
	{
		Form		bob("bob", 3, 3);
		Bureaucrat	test("test", 4);
		std::cout << bob << std::endl;
		std::cout << test << std::endl;
		bob.beSigned(test);
		std::cout << bob << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------TEST 2--------------------" << std::endl;
	try
	{
		Form		bob1("bob2", 151, 3);
		Bureaucrat	test1("test2", 400);
		std::cout << bob1 << std::endl;
		std::cout << test1 << std::endl;
		bob1.beSigned(test1);
		std::cout << bob1 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------TEST 3--------------------" << std::endl;
	try
	{
		Form		bob2("bob3", 5, 3);
		Bureaucrat	test2("test3", 1);
		std::cout << bob2 << std::endl;
		std::cout << test2 << std::endl;
		bob2.beSigned(test2);
		std::cout << bob2 << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------TEST 4--------------------" << std::endl;
	try
	{
		Form		bob3("bob3", 5, 3);
		Bureaucrat	test3("test3", 1);
		std::cout << bob3 << std::endl;
		std::cout << test3 << std::endl;
		bob3.beSigned(test3);
		std::cout << bob3 << std::endl;
		test3.signForm(bob3);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}