#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("NaN"), Hitpoints(10), EnergyPoints(10), AttactDamage(10)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &_name) : name(_name), Hitpoints(10), EnergyPoints(10), AttactDamage(10)
{
    std::cout << "Name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &_claptrap)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = _claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::Setname(std::string const &_name)
{
    name = _name;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &_claptrap)
{
    std::cout << "Assignation operator called" << std::endl;
	if (this != &_claptrap)
    {
        name = _claptrap.name;
        Hitpoints = _claptrap.Hitpoints;
        EnergyPoints = _claptrap.EnergyPoints;
        AttactDamage = _claptrap.AttactDamage;
    }
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << name << " attack " << target;
    std::cout << ", causing " << AttactDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamge(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takeDamge as much as " << amount << "points!" << std::endl;
    if (amount >= EnergyPoints)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        EnergyPoints = 0;
        return;
    }
    else
    {
        EnergyPoints -= amount;
        std::cout << "ClapTrap " << name << " has " << EnergyPoints << " EnergyPoints left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    EnergyPoints += amount;
    std::cout << "ClapTrap " << name << " beRepaired as much as " << amount << "points!" << std::endl;
    std::cout << "ClapTrap " << name << " EnergyPoints become " << EnergyPoints <<"points!" << std::endl;
}
