#include "include/Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    Zombie	*test;
    int 	zombieNumber;

    zombieNumber = 2;
    zombie = zombieHorde(zombieNumber, "weirdo");
    test = zombieHorde(zombieNumber, "testing");
    for (int i = 0; i < zombieNumber; i++)
    {
        zombie[i].announce();
		test[i].announce();
    }
    delete[] zombie;
    delete[] test;
}