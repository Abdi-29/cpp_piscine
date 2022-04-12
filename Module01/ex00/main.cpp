#include "include/Zombie.hpp"

int	main(void)
{
	Zombie  *random;

    random = newZombie("weirdo");
	random->announce();
	randomChump("moreWeirdo");
	delete random; 
}