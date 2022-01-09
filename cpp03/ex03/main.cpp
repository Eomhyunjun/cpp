#include "DiamondTrap.hpp"

int main(void)
{
    //default
    DiamondTrap a;
    a.whoAmI();
	std::cout << "----------------------------------------------------------------------------" << std::endl;

    //Name constructor + ST
    DiamondTrap bebe("bebe");
    bebe.whoAmI();
    std::cout << "----------------------------------------------------------------------------" << std::endl;
    
    //copy constructor
    //ST asign operator
    //ST asign operator
    a = bebe;
    //ST destructor
    //destructor
    std::cout << "----------------------------------------------------------------------------" << std::endl;

    // attack 20
    a.attack("moeh");
	std::cout << "----------------------------------------------------------------------------" << std::endl;

    //takeDamge15 + dead(50이 기본 점수)
    //35left
    a.takeDamge(15);
    // repaired
    // 45 left
    std::cout << "----------------------------------------------------------------------------" << std::endl;

    a.beRepaired(10);
    //a destruct (st + 부모)
    //bebe destruct(st + 부모)
    std::cout << "----------------------------------------------------------------------------" << std::endl;

    a.whoAmI();
    return (0);
}