#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"),
  ScavTrap(name),
  FragTrap(name),
  name(name)
{
	std::cout << "DiamondTrap " << ClapTrap::name << " has been constructed!\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " has been destructed!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& d)
: ClapTrap(d),
  ScavTrap(d),
  FragTrap(d),
  name(d.name)
{
    std::cout << "DiamondTrap " << name << " has been copy constructed!\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << name << "'s clapTrap name is " << ClapTrap::name << "!\n";
}