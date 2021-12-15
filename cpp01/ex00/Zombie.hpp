#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string _name);
		~Zombie();
		void announce(void);

};

Zombie  *newZombie(std::string _name);
void	randomChump(std::string _name);

#endif