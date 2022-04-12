#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ClapTrap, public ScavTrap, public FragTrap
{
private:
	std::string _name;
	int 		_hitPoint;
	int 		_energyPoint;
	int 		_attackDamage;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator=(DiamondTrap const &other);
	void whoAmI(void);
	void attack(std::string target);
	~DiamondTrap(void);
};

#endif