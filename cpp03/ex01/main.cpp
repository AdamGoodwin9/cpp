#include "ScavTrap.hpp"

int main()
{
    ScavTrap jim("Jimmy");
    ClapTrap bertha("Big Bertha");
    ScavTrap berthaTwo("Enormous Bertha");


    jim.attack("zombie");
    jim.takeDamage(5);
    jim.takeDamage(7);
    jim.beRepaired(2);
    
    bertha.beRepaired(100);
    berthaTwo.beRepaired(1000);
    bertha.attack("the whole world");
    berthaTwo.attack("the whole world successfully");
    bertha.takeDamage(200);
    berthaTwo.takeDamage(200);
    berthaTwo.guardGate();
    
    return 0;
}