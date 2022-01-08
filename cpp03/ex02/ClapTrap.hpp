#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
class ClapTrap
{
    protected:
    std::string name;
    int         Hitpoints;
    unsigned int         EnergyPoints;
    int         AttactDamage;

    public:
        ClapTrap();
        ClapTrap(std::string const &_name);
        ClapTrap(ClapTrap const &_claptrap);
        ~ClapTrap();

        void Setname(std::string const &_name);

        void attack(std::string const & target);
        void takeDamge(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ClapTrap &operator=(ClapTrap const &_claptrap);
};

#endif