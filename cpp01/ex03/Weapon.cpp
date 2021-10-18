#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
: weapon(weapon)
{}

Weapon::~Weapon()
{}

std::string Weapon::getType()
{
    return weapon;
}

void Weapon::setType(std::string weaponType)
{
    weapon = weaponType;
}