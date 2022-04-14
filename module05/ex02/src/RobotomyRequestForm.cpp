/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:30:50 by abba          #+#    #+#                 */
/*   Updated: 2022/04/14 15:30:50 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
				Form("robot", 72, 45)
{
	_target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
							Form("robot", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	*this = rhs;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::function(void) const
{
	srand(time(NULL));
	std::cout << "drrrrrrrrrrrrrrrrrrrr" << std::endl;
	if (rand() % 2 == 0)
		std::cout
			<< _target
			<< " has been robotomized successfully 50% of the time";
	else
		std::cout << "the robotomy failed";
	std::cout << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }