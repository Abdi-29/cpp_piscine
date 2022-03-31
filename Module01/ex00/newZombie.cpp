#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie;
    try
    {
        zombie = new Zombie(name);
    }
    catch(const std::exception& e)
    {
        std::cerr << "wrong" << std::endl;
    }
    return zombie;
}
