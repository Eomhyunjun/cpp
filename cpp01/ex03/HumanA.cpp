#include "HumanA.hpp"

HumanA::HumanA(std::string _name, const Weapon &_weapon) : name(_name), weapon(_weapon) {}

void 	HumanA::attack(void) const
{
	std::cout << name;
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}