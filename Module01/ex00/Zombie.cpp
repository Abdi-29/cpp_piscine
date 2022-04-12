#include "include/Zombie.hpp"

Zombie::Zombie (void)
{

}

Zombie::Zombie(std::string name) : _name(name)
{

}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void)
{
   std::cout << this->_name << " got destroyed" << std::endl;
}
