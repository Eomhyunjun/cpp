#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	std::string name;
	const Weapon &weapon;

	public:
		HumanA(std::string _name, const Weapon &_weapon);
		void attack() const;
};

#endif