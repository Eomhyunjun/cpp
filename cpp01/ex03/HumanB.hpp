#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	std::string name;
	const Weapon *weapon;

	public:
		HumanB(std::string _name);
		void setWeapon(const Weapon &_weapon);
		void attack() const;
};

#endif