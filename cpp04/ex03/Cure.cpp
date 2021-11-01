#include "Cure.hpp"

Cure::Cure()
: AMateria("cure") { }

Cure::Cure(const Cure& c)
: AMateria(c) { }

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& c)
{
	AMateria::operator=(c);
	return *this;
}

AMateria* Cure::clone(void) const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}