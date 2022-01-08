#include "ClapTrap.hpp"

int main(void)
{
    //default
    ClapTrap a;

    //Name constructor    
    ClapTrap bebe("heom");

    //copy constructor
    //asign operator
    //asign operator
    a = ClapTrap(bebe);
    //destructor

    // attack
    a.attack("heom");

    //takeDamge + dead(10이 기본 점수)
    a.takeDamge(1);
    // repaired + become
    a.beRepaired(10);

    //a destruct
    //bebe destruct
    return (0);
}