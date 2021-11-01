#include "Character.hpp"

Character::Character()
: name("Default Character")
{
    for (size_t i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

Character::Character(const std::string& name)
: name(name)
{
    for (size_t i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& c)
{
    name = std::string(c.name);
	for (size_t i = 0; i < 4; i++)
    {
		if (inventory[i])
        {
            delete inventory[i];
        }

        if (c.inventory[i])
        {
            inventory[i] = c.inventory[i]->clone();
        }
        else
        {
            inventory[i] = NULL;
        }
    }

    return *this;
}

Character::Character(const Character& c)
{
    *this = c;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (inventory[i])
        {
            delete inventory[i];
        }
    }
}

std::string const& Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3) return;

    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !inventory[idx]) return;

    inventory[idx]->use(target);
}