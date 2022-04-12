/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   library.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 10:26:52 by abba          #+#    #+#                 */
/*   Updated: 2022/04/07 10:26:52 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
static int 	maxHitPoint = 100;
static int	maxEnergyPoint = 50;
static int	maxAttackDamage = 20;

class ClapTrap
{
protected:
	std::string _name;
	int 		_hitPoint;
	int 		_energyPoint;
	int 		_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap operator=(ClapTrap &other);
	void attack(std::string const target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool isDead(void);
	std::string getName(void);
	void displayEnergyPoint(void);
	void displayHitPoint(void);
	~ClapTrap(void);
};

#endif
