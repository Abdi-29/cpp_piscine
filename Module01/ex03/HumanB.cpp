#include "Weapon.hpp"

void    HumanB::setWeapon(Weapon& club)
{
    _weaponType = &club;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weaponType->getType();
    std::cout <<std::endl;
}

HumanB::HumanB(std::string type) : _name(type)
{
    
}

HumanB::HumanB()
{

}

HumanB::~HumanB()
{
    
}