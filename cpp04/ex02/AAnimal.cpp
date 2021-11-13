#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal has been constructed\n";
}

AAnimal::AAnimal(const AAnimal &a)
: type(a.type)
{
    std::cout << "AAnimal has been copy constructed\n";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal has been destructed\n";
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
    type = a.type;
    std::cout << "AAnimal assigned\n";
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "I'm having an existential crisis\n";
}

std::string AAnimal::getType() const
{
    return type;
}