#include "Ice.hpp"

Ice::Ice()
: AMateria("ice") { }

Ice::Ice(const Ice& i)
: AMateria(i) { }

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& i)
{
	AMateria::operator=(i);
	return *this;
}

AMateria* Ice::clone(void) const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}