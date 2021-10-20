#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal has been constructed\n";
}

Animal::Animal(const Animal &a)
: type(a.type)
{
    std::cout << "Animal has been copy constructed\n";
}

Animal::~Animal()
{
    std::cout << "Animal has been destructed\n";
}

Animal &Animal::operator=(const Animal &a)
{
    type = a.type;
    std::cout << "Animal assigned\n";
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "I'm having an existential crisis\n";
}

std::string Animal::getType() const
{
    return type;
}