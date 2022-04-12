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

Bureaucrat::Bureaucrat(void) : _name("anonymous") { }

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



std::ostream &operator<<(std::ostream &output, Bureaucrat const & bureau)
{
	output << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return output;
}


