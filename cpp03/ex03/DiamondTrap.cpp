#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("Diamondy_clap_name"),
  ScavTrap("Diamondy"),
  FragTrap("Diamondy"),
  name("Diamondy")
{
    std::cout << "DiamondTrap " << name << " has been default constructed!\n";
}

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

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& d)
{
    ScavTrap::operator=(d);
    this->name = d.name;
    std::cout << "DiamondTrap " << name << " has been assigned!\n";
    return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << name << "'s clapTrap name is " << ClapTrap::name << "!\n";
}