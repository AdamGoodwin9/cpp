#include "ClapTrap.hpp"

int main()
{
    ClapTrap jim("Jimmy");
    ClapTrap bertha("Big Bertha");

    jim.attack("zombie");
    jim.takeDamage(5);
    jim.takeDamage(7);
    jim.beRepaired(2);
    
    bertha.beRepaired(100);
    bertha.attack("the whole world");
    bertha.takeDamage(1);
    
    return 0;
}