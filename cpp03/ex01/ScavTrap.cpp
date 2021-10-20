#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
    name = "Scavvy";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been default constructed!\n";
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been constructed!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destructed!\n";
}

ScavTrap::ScavTrap(const ScavTrap& s)
: ClapTrap(s)
{
    std::cout << "ScavTrap " << name << " has been copy constructed!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
    ClapTrap::operator=(s);
    std::cout << "ScavTrap " << name << " has been assigned!\n";
    return *this;
}

void ScavTrap::attack(std::string const& target)
{
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is in Gate keeper mode!\n";
}