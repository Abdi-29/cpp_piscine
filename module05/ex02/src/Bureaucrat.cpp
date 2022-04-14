/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:01:05 by abba          #+#    #+#                 */
/*   Updated: 2022/04/12 16:01:05 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("anonymous"), _grade(150) { }

Bureaucrat::Bureaucrat(const std::string& name, int grade) :
						_name(name), _grade(grade)
{
	if (_grade > 150)
		throw GradeTooLowException();
	else if(_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs.getName())
{
	*this = rhs;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this == &rhs)
		return *this;
	_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::increment(const int grade)
{
	_grade -= grade;
	if (_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrement(const int grade)
{
	_grade += grade;
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const & bureau)
{
	output
		<< bureau.getName()
		<< ", bureaucrat grade "
		<< bureau.getGrade()
		<< ".";
	return output;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
		std::cout
			<< getName() << " couldn't sign "
			<< form << " because the form is already signed."
			<< std::endl;
	else if (getGrade() > form.signGrade())
		std::cout
			<< getName() << " couldn't sign "
			<< form << " because the grade is too low.";
	else
		std::cout << getName() << " signed the form.";
	form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form;
	}
	catch (std::exception const &e)
	{
		std::cout
			<< getName() << " cannot execute "
			<< form.getName() << " because "
			<< e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) { }
