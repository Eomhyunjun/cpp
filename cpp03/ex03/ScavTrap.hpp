#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const &_name);
        ScavTrap(ScavTrap const &_ScavTrap);
        ~ScavTrap();

        void Setname(std::string const &_name);

        void attack(std::string const & target);
        void guardGate();
        
        ScavTrap &operator=(ScavTrap const &_ScavTrap);
};

#endif