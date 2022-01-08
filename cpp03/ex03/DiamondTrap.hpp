#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string const &_name);
        DiamondTrap(DiamondTrap const &_DiamondTrap);
        ~DiamondTrap();

        void whoAmI();
        DiamondTrap &operator=(DiamondTrap const &DiamondTrap);
};

#endif