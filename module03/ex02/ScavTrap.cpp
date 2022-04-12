/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:54:17 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 11:54:17 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " copy constructor called" << std::endl;
	_hitPoint = maxHitPoint;
	_energyPoint = maxEnergyPoint;
	_attackDamage = maxAttackDamage;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << _name << " copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "assignment operator called" << std::endl;
	_name = other._name;
	_hitPoint = other._hitPoint;
	_energyPoint = other._energyPoint;
	_attackDamage = other._attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string target)
{
	if (isDead())
	{
		return;
	}
	if (_energyPoint == 0)
	{
		displayEnergyPoint();
		return;
	}
	std::cout
		<< "ClapTrap " << _name
		<< " attacks " << target
		<< " causing, " << _attackDamage
		<< " points of damage!"
		<< std::endl;
	_energyPoint--;
	displayEnergyPoint();
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " is on the gate" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "scavtrap deconstruct" << std::endl;
}