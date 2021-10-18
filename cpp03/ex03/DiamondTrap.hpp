#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(std::string);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap&);

		using FragTrap::hitPoints;
        using ScavTrap::energyPoints;
		using FragTrap::attackDamage;
        using ScavTrap::attack;
        			
		void whoAmI();
};

#endif

/*
Name (Parameter of constructor)
• Claptrap::Name (Parameter of constructor + "_clap_name")
*/