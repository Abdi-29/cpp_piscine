#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

class Weapon

{
private:
	std::string _type;

public:
	std::string	getType();
	void	setType(std::string type);
	Weapon(std::string type);
    Weapon(void);
	~Weapon();
};

#endif
