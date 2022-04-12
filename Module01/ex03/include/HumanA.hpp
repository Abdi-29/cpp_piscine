#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class Weapon;

class HumanA
{
private:
    std::string _name;
    Weapon& _weaponType;

public:
    void    attack(void);
    HumanA(std::string type, Weapon& club);
	HumanA();
	~HumanA();
};

#endif