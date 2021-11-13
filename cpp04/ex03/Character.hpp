#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    Character();

    std::string name;
    AMateria* inventory[4];
public:
    Character(const std::string&);
    Character& operator=(const Character&);
    Character(const Character&);
    
    virtual ~Character();
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif