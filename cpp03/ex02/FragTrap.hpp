#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const &_name);
        FragTrap(FragTrap const &_FragTrap);
        ~FragTrap();

        void highFivesGuys(void);
        FragTrap &operator=(FragTrap const &_FragTrap);
};

#endif