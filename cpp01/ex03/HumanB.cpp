#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: name(name)
{}

HumanB::~HumanB()
{}

void HumanB::attack()
{
    std::cout << name << " attacks with " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}