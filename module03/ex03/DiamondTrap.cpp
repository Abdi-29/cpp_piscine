/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 12:48:52 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 12:48:52 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/DiamondTrap.hpp"
#include "include/ClapTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "diamondTrap constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
				ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << _name << " copy constructor called" << std::endl;
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << _name << " copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	std::cout << "assignment operator called" << std::endl;
	_name = other._name;
	return *this;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
	return;
}

void DiamondTrap::whoAmI(void)
{
	std::cout
		<< "my name is " << _name << std::endl
		<< "my name is " << getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "diamondTrap deconstruct called" << std::endl;
	return;
}