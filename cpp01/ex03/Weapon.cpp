#include "Weapon.hpp"

Weapon::Weapon(std::string const &_type) : type(_type)
{
};

std::string const &Weapon::getType() const
{
	return (type);
};

void Weapon::setType(std::string const &_type)
{
	type = _type;
};