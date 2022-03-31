#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    int Number;

    Number = 90;
    zombie = zombieHorde(Number, "weirdo");
    for (int i = 0; i < Number; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}