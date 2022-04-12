#include "include/Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie;
    try
    {
        zombie = new Zombie(name);
    }
    catch(const std::exception& e)
    {
        std::cerr << "failed to create zombie" << std::endl;
    }
    return zombie;
}
