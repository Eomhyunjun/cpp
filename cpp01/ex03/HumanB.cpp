#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name) {}

void HumanB::setWeapon(const Weapon &_weapon)
{
	weapon = &_weapon;
}

void HumanB::attack(void) const
{
	std::cout << name;
	std::cout << " attacks with his ";
	std::cout << weapon->getType() << std::endl;
}