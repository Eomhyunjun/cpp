#include "ScavTrap.hpp"

int main(void)
{
    //default + ST 
    ScavTrap a;

    //Name constructor + ST
    ScavTrap bebe("heom");
     
    //copy constructor
    //ST asign operator
    //ST asign operator
    a = ScavTrap(bebe);
    //ST destructor
    //destructor

    // attack 20
    a.attack("moeh");
    a.guardGate();
    //takeDamge15 + dead(50이 기본 점수)
    //35left
    a.takeDamge(15);
    // repaired
    // 45 left
    a.beRepaired(10);

    //a destruct (st + 부모)
    //bebe destruct(st + 부모)
    return (0);
}