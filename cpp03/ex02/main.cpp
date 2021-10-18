#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap jim("Jimmy");
    ClapTrap bertha("Big Bertha");
    ScavTrap berthaTwo("Enormous Bertha");
    FragTrap berthaThree("Enormouser Bertha");

    jim.attack("zombie");
    jim.takeDamage(5);
    jim.takeDamage(7);
    jim.beRepaired(2);
    
    bertha.beRepaired(100);
    berthaTwo.beRepaired(1000);
    berthaThree.beRepaired(1005);
    bertha.attack("the whole world");
    berthaTwo.attack("the whole world successfully");
    berthaThree.attack("the whole world successfullyer");
    bertha.takeDamage(200);
    berthaTwo.takeDamage(200);
    berthaThree.takeDamage(300);
    berthaTwo.guardGate();
    berthaThree.highFivesGuys();
    
    return 0;
}