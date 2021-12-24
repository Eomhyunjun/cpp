#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*zombies;
	int		i;

	zombies = new Zombie[n];
	i = 0;
	while (i < n)
	{
		zombies[i].Set(name + std::to_string(i));
		i++;
	}
	return (zombies);
}