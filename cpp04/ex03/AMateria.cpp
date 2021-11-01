#include "AMateria.hpp"

AMateria::AMateria()
: type("Unknown Type") { }

AMateria::AMateria(const AMateria& m)
: type(m.type) { }

AMateria::AMateria(std::string const &type)
: type(type) { }

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& m)
{
	type = m.type;
	return *this;
}

const std::string& AMateria::getType(void) const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Unknown Materia used on " << target.getName() << std::endl;
}