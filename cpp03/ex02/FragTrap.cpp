#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
    name = "Fraggy";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been default constructed!\n";
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been constructed!\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destructed!\n";
}

FragTrap::FragTrap(const FragTrap& s)
: ClapTrap(s)
{
    std::cout << "FragTrap " << name << " has been copy constructed!\n";
}

FragTrap& FragTrap::operator=(const FragTrap& s)
{
    ClapTrap::operator=(s);
    std::cout << "FragTrap " << name << " has been assigned!\n";
    return *this;
}

void FragTrap::attack(std::string const& target)
{
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " high fives everybody in ecstasy!\n";
}