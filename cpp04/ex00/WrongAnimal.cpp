#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal has been constructed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    type = a.type;
    std::cout << "WrongAnimal has been copy constructed\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal has been destructed\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm having an existential crisis\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    type = a.type;
    std::cout << "WrongAnimal assigned\n";
    return *this;
}