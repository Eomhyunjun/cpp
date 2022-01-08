#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ST Default Constructor called" << std::endl;
	Hitpoints = 100;
	EnergyPoints = 50;
	AttactDamage = 20;
}

ScavTrap::ScavTrap(std::string const &_name) : ClapTrap(_name)
{
    std::cout << "ST Name Constructor called" << std::endl;
	Hitpoints = 100;
	EnergyPoints = 50;
	AttactDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &_ScavTrap)
{
    std::cout << "ST Copy Constructor called" << std::endl;
    *this = _ScavTrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ST Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &_ScavTrap)
{
    std::cout << "ST Assignation operator called" << std::endl;
	if (this != &_ScavTrap)
    {
        name = _ScavTrap.name;
        Hitpoints = _ScavTrap.Hitpoints;
        EnergyPoints = _ScavTrap.EnergyPoints;
        AttactDamage = _ScavTrap.AttactDamage;
    }
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << name << " attack " << target;
    std::cout << ", causing " << AttactDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << "is enterred in Gate keeper mode" << std::endl;
}
