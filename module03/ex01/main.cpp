#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap 	a("claptrap");
	ScavTrap	b("scavtrap");

	a.attack(b.getName());
	b.takeDamage(maxAttackDamage);
	b.attack(a.getName());
	a.takeDamage(maxAttackDamage);
	a.beRepaired(30);
	b.guardGate();
}