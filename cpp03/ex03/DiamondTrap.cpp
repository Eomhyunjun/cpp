#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "DIA Default Constructor called" << std::endl;
    name = "dia name";
    ClapTrap::name += "_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttactDamage = FragTrap::AttactDamage;
}

DiamondTrap::DiamondTrap(std::string const &_name) : ClapTrap(_name), FragTrap(_name), ScavTrap(_name)
{
    std::cout << "DIA Name Constructor called" << std::endl;
    name = _name;
    ClapTrap::name += "_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttactDamage = FragTrap::AttactDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &_DiamondTrap)
{
    std::cout << "DIA Copy Constructor called" << std::endl;
    *this = _DiamondTrap;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DIA Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &_DiamondTrap)
{
    std::cout << "DIA Assignation operator called" << std::endl;
	if (this != &_DiamondTrap)
    {
        std::cout << "bef name :"  << name<< " " << ClapTrap::name << std::endl;
        name = _DiamondTrap.name;
        Hitpoints = _DiamondTrap.Hitpoints;
        EnergyPoints = _DiamondTrap.EnergyPoints;
        AttactDamage = _DiamondTrap.AttactDamage;

        std::cout << "pre name :"  << _DiamondTrap.name<< " " << _DiamondTrap.ClapTrap::name << std::endl;
        std::cout << "now name :"  << name<< " " << ClapTrap::name << std::endl;
    }
	return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond :" << name << ", ClapTrap :"<< ClapTrap::name << std::endl;
}