#include "Weapon.hpp"

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weaponType.getType();
    std::cout <<std::endl;
}

HumanA::HumanA(std::string type, Weapon& club) : _name(type), _weaponType(club)
{
    
}

HumanA::~HumanA()
{
    
}