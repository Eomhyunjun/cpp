#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FT Default Constructor called" << std::endl;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttactDamage = 30;
}

FragTrap::FragTrap(std::string const &_name) : ClapTrap(_name)
{
    std::cout << "FT Name Constructor called" << std::endl;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttactDamage = 30;
}

FragTrap::FragTrap(FragTrap const &_FragTrap)
{
    std::cout << "FT Copy Constructor called" << std::endl;
    *this = _FragTrap;
}

FragTrap::~FragTrap()
{
    std::cout << "FT Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &_FragTrap)
{
    std::cout << "FT Assignation operator called" << std::endl;
	if (this != &_FragTrap)
    {
        name = _FragTrap.name;
        Hitpoints = _FragTrap.Hitpoints;
        EnergyPoints = _FragTrap.EnergyPoints;
        AttactDamage = _FragTrap.AttactDamage;
    }
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << "highFives" << std::endl;
}