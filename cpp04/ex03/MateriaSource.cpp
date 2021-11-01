#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
    *this = ms;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms)
{
    for (size_t i = 0; i < 4; i++)
    {
        materias[i] = ms.materias[i];
    }
    
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (materias[i])
        {
            delete materias[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (size_t i = 0; i < 4; i++)
    {
		if (!materias[i]) break;
		
        if (materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
	
    return 0;
}
