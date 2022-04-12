/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:54:11 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 11:54:11 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int	main(void)
{
	ClapTrap 	a("claptrap");
	ScavTrap	b("scavtrap");
	FragTrap	c("fragtrap");


//	a.attack(b.getName());
//	c.attack(b.getName());
//	b.takeDamage(maxAttackDamage);
//	b.takeDamage(maxAttackDamage);
//	b.attack(a.getName());
//	a.takeDamage(maxAttackDamage);
	c.attack(b.getName());
	b.takeDamage(maxAttackDamage);
//	a.beRepaired(30);
	b.guardGate();
	c.highFivesGuys();
}