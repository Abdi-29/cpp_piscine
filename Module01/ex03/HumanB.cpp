#include "include/Weapon.hpp"

void    HumanB::setWeapon(Weapon& club)
{
    _weaponType = &club;
}

void    HumanB::attack(void)
{
	if (this->_weaponType)
    	std::cout << _name << " attacks with their " << _weaponType->getType();
	else
		std::cout << _name << " is fighting with his hand";
    std::cout <<std::endl;
}

HumanB::HumanB(std::string type) : _name(type)
{
    
}

HumanB::HumanB()
{
	this->_weaponType = NULL;
}

HumanB::~HumanB()
{

}