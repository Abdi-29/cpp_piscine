/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:33:21 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 11:33:21 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/FragTrap.hpp"
#include "include/ClapTrap.hpp"
#include "include/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Fragtap constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " copy constructor called" << std::endl;
	_hitPoint = maxHitPoint;
	_energyPoint = maxEnergyPoint;
	_attackDamage = maxAttackDamage;
	return;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << _name << " copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "assignment operator called" << std::endl;
	_name = other._name;
	_hitPoint = other._hitPoint;
	_energyPoint = other._energyPoint;
	_attackDamage = other._attackDamage;
	return *this;
}

void FragTrap::attack(const std::string target)
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
		<< _name
		<< " attacks " << target
		<< " causing, " << _attackDamage
		<< " points of damage!"
		<< std::endl;
	_energyPoint--;
	displayEnergyPoint();
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high five!!!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Fragtap deconstruct called" << std::endl;
	return;
}