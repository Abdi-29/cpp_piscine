/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:24:36 by abba          #+#    #+#                 */
/*   Updated: 2022/04/12 16:24:36 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int 				_grade;

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

	//Orthodox canonical form
	Bureaucrat(void);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat &rhs);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat(void);

	//normal function
	std::string getName(void) const;
	int 		getGrade(void) const;
	void 		increment(const int grade);
	void 		decrement(const int grade);
};

std::ostream& operator<< (std::ostream & output, const Bureaucrat &bureau);

#endif