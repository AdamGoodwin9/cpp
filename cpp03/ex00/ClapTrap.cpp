#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: name(name),
  hitPoints(10),
  energyPoints(10),
  attackDamage(0)
{
    std::cout << "ClapTrap " << name << " has been constructed!\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destructed!\n";
}

ClapTrap::ClapTrap(const ClapTrap& c)
: name(c.name),
  hitPoints(c.hitPoints),
  energyPoints(c.energyPoints),
  attackDamage(c.attackDamage)
{
    std::cout << "ClapTrap " << name << " has been copy constructed!\n";
}


void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " has taken " << amount << " damage and died!\n";
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage, and now has " << hitPoints << " hit points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " heals " << amount << " points, and now has " << hitPoints << " hit points!\n";
}
