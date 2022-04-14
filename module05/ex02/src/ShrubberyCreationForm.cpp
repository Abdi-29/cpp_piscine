/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:00:20 by abba          #+#    #+#                 */
/*   Updated: 2022/04/14 15:00:20 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
				Form("Shrubbery", 145, 137)
{
	_target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
					Form("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	Form::operator=(rhs);
	_target = rhs._target;
	return *this;
}

void	ShrubberyCreationForm::function(void) const
{
	std::ofstream output(_target + "_shrubbery");
	output << "           \\/ |    |/" << std::endl;
	output << "        \\/ / \\||/  /_/___/_" << std::endl;
	output << "         \\/   |/ \\/" << std::endl;
	output << "   _\\__\\_\\   |  /_____/_" << std::endl;
	output << "           \\  | /          /" << std::endl;
	output << "  __ _-----`  |{,-----------~" << std::endl;
	output << "            \\ }{" << std::endl;
	output << "             }{{" << std::endl;
	output << "            }}{" << std::endl;
	output << "            {{}" << std::endl;
	output << "     , -=-~{ .-^- _" << std::endl;
	output.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }