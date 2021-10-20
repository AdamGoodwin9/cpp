#include "Dog.hpp"

Dog::Dog()
: Animal()
{
    type = "Dog";
    std::cout << type << " has been constructed\n";
}

Dog::~Dog()
{
    std::cout << type << " has been destructed\n";
}

Dog::Dog(const Dog& d)
: Animal(d)
{
    std::cout << type << " has been copy constructed\n";
}

Dog& Dog::operator=(const Dog& d)
{
    Animal::operator=(d);
    std::cout << type << " assigned\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof\n";
}