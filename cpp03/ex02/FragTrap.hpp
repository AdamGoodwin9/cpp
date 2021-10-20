#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);

    void attack(std::string const& target);
    void highFivesGuys();
};

#endif