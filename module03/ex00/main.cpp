/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 09:18:38 by abba          #+#    #+#                 */
/*   Updated: 2022/04/08 09:18:38 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap 	a;
	ClapTrap	b("robot");

	a = b;
	a.attack("enemy");
	a.takeDamage(-1);
	a.beRepaired(1);
	a.attack("enemy");
	a.attack("enemy");
	a.attack("enemy");
	a.attack("enemy");
	a.attack("enemy");
	a.attack("enemy");
	a.attack("enemy");
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.attack("enemy");
	a.attack("enemy");
}