#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    AMateria();
protected:
    std::string type;
public:
    AMateria(const AMateria&);
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria &operator=(const AMateria&);
    
    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif