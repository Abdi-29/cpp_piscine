/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 10:17:16 by abba          #+#    #+#                 */
/*   Updated: 2022/04/14 10:17:16 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(void) : _name("not name"), _isSigned(false), _signGrade(4),
					_executeGrade(3)
{
	verifyGrade(_signGrade);
	verifyGrade(_executeGrade);
}

Form::Form(const std::string &name, const int signGrade,const int signExecute) :
			_name(name), _isSigned(false), _signGrade(signGrade),
			_executeGrade(signExecute)
{
	verifyGrade(_signGrade);
	verifyGrade(_executeGrade);
}

void Form::verifyGrade(const int grade)
{
	if (grade < highGrade)
		throw GradeTooHighException();
	else if (grade > lowGrade)
		throw GradeTooLowException();
}

Form::Form(const Form &rhs) : _name(rhs.getName()), _isSigned(rhs.isSigned()),
				_signGrade(rhs.signGrade()), _executeGrade(rhs.executeGrade())
{

}

Form & Form::operator=(const Form &)
{
	return *this;
}

void Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

std::string Form::getName(void) const
{
	return _name;
}

bool Form::isSigned(void) const
{
	return _isSigned;
}

int Form::signGrade(void) const
{
	return _signGrade;
}

int Form::executeGrade() const
{
	return _executeGrade;
}

void	Form::execute(const Bureaucrat &executor) const
{
	if (!this->isSigned())
		throw IsNotSignedException();
	if (executor.getGrade() > this->executeGrade())
		throw GradeTooLowException();
	this->function();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

const char *Form::IsNotSignedException::what() const throw()
{
	return "not signed.";
}

Form::~Form(void) { }

std::ostream &operator<<(std::ostream &output, Form const & form)
{
	output
		<< form.getName();
	output
		<< ", the form is: "
		<< (form.isSigned() ? "signed " : "unsigned ");
	output
		<< "grade required to sign: " << form.signGrade()
		<< " grade required to execute: " << form.executeGrade()
		<< ".";

	return output;
}