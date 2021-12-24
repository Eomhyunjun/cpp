#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(10, "zombie");
	for (int i = 0; i < 10; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}