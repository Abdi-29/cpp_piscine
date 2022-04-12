/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 09:18:33 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 09:18:33 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "claptrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "your robot name is: "<< _name << std::endl;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "assignment operator called" << std::endl;
	_name = other._name;
	_hitPoint = other._hitPoint;
	_energyPoint = other._energyPoint;
	_attackDamage = other._attackDamage;
	return *this;
}

bool ClapTrap::isDead(void)
{

	if (_hitPoint == 0)
	{
		std::cout << _name << " cannot attack as he already dead" << std::endl;
		return true;
	}
	return false;
}

void	ClapTrap::attack(const std::string target)
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
		<< " points of damage!" << std::endl;
	_energyPoint--;
	displayEnergyPoint();
}

void ClapTrap::displayEnergyPoint(void)
{
	std::cout << "you have: " << _energyPoint << " energy point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << _name << " it's already dead" << std::endl;
		displayHitPoint();
		return;
	}
	std::cout
		<< _name << " been caused "
		<< amount << " point of damage"
		<< std::endl;
	if (amount > (unsigned int)_hitPoint)
		_hitPoint = 0;
	else
		_hitPoint -= amount;
	if (_hitPoint < 0)
		_hitPoint = 0;
	displayHitPoint();
}

void ClapTrap::displayHitPoint()
{
	std::cout << "you have: " << _hitPoint << " hit point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0)
	{
		std::cout << _name << " doesn't have enough energy points" << std::endl;
		displayEnergyPoint();
		return;
	}
	if (amount == 0)
	{
		std::cout
			<< _name
			<< "can't be repaired with amount of zero"
			<< std::endl;
		return;
	}
	if (_hitPoint == 10)
	{
		std::cout << _name << " is full" << std::endl;
		return;
	}
	_hitPoint += amount;
	if (_hitPoint > 10)
		_hitPoint = 10;
	std::cout << _name << " been repaired" << std::endl;
	_energyPoint--;
	displayHitPoint();
	displayEnergyPoint();
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor called" << std::endl;
}
