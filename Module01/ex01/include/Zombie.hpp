#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie;

Zombie*    zombieHorde( int N, std::string name );

class Zombie 
{
private:
	std::string _name;

public:
    void announce( void );
    Zombie(std::string name);
    Zombie(void);
    void setName(std::string name);
    ~Zombie(void);
};

#endif
