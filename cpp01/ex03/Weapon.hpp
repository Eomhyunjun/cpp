#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	std::string type;

	public:
		Weapon();
		Weapon(std::string const &_type);
		const std::string &getType() const;
		void setType(std::string const &_type);
};


#endif