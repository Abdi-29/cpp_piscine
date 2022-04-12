#include "include/Zombie.hpp"

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie*	zombieHorde( int N, std::string name )
{
    Zombie  *zombie;
	if (N < 1)
    {
        std::cout << "zombie number can't be less than 1" << std::endl;
        exit(1);
    }
    if (name.empty())
    {
       std::cout << "zombie need a name" << std::endl;
       exit(1); 
    }
    try
	{
        zombie = new Zombie[N];      
    }
    catch(const std::exception& e)
    {
        std::cerr << "failed to create a zombie" << std::endl;
    }
    
    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return zombie; 
}