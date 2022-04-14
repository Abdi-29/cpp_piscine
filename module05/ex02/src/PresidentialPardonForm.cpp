/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:49:05 by abba          #+#    #+#                 */
/*   Updated: 2022/04/14 15:49:05 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
					Form("Presidential", 25, 5)
{
	_target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
					Form("Presidential", 72, 45)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
{
	*this = rhs;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::function(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }