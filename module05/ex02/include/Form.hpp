/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 17:40:52 by abba          #+#    #+#                 */
/*   Updated: 2022/04/13 17:40:52 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;

#define lowGrade 150
#define highGrade 1

class Form
{
private:
	const std::string	_name;
	bool 				_isSigned;
	const int 			_signGrade;
	const int 			_executeGrade;

public:
	//exception classes
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class IsNotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	//Orthodox canonical form
	Form(void);
	Form(const std::string& name, const int signGrade, const int signExecute);
	Form(const Form &rhs);
	Form &operator=(const Form &rhs);
	virtual ~Form(void);

	//member function
	void beSigned(Bureaucrat &bureau);
	std::string getName(void) const;
	bool 		isSigned(void) const;
	int 		signGrade(void) const;
	int 		executeGrade(void) const;
	void		verifyGrade(const int grade);
	virtual void		execute(Bureaucrat const & executor) const;
	virtual void	function(void) const = 0;
};

std::ostream& operator<< (std::ostream & output, const Form &form);

#endif