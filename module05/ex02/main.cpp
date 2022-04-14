#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/Bureaucrat.hpp"

int main(void)
{
	std::cout << "----------------TESTING 1-------------------" << std::endl;
	try
	{
		PresidentialPardonForm bob;
		Bureaucrat test("test", 4);
		test.signForm(bob);
		test.executeForm(bob);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------TESTING 2-------------------" << std::endl;
	try
	{
		ShrubberyCreationForm bob1;
		Bureaucrat test1("test1", 4);
		test1.signForm(bob1);
		test1.executeForm(bob1);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------TESTING 3-------------------" << std::endl;
	try
	{
		RobotomyRequestForm bob2;
		Bureaucrat test2("test2", 4);
		test2.signForm(bob2);
		test2.executeForm(bob2);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "----------------TESTING 4-------------------" << std::endl;
	try
	{
		PresidentialPardonForm bob4("bob");
		Bureaucrat test4("test4", 150);
		test4.signForm(bob4);
		test4.executeForm(bob4);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------TESTING 5-------------------" << std::endl;
	try
	{
		ShrubberyCreationForm bob5;
		Bureaucrat test5("test5", 49);
		test5.increment(5);
		test5.executeForm(bob5);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------TESTING 6-------------------" << std::endl;
	try
	{
		RobotomyRequestForm bob6;
		Bureaucrat test6("test2", 149);
		test6.signForm(bob6);
		test6.executeForm(bob6);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}