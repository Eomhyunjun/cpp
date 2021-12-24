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
		~Zombie();
		void Set(std::string _name);
		void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);


#endif