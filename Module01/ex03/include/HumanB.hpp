#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class Weapon;

class HumanB
{
private:
	Weapon	*_weaponType;
    std::string _name;

public:
    void    setWeapon(Weapon& club);
    void    attack();
    HumanB(std::string type);
    HumanB(void);
	~HumanB();
};

#endif