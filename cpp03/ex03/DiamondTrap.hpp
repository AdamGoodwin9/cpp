#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);

	using FragTrap::hitPoints;
	using ScavTrap::energyPoints;
	using FragTrap::attackDamage;
	using ScavTrap::attack;

	void whoAmI();
};

#endif