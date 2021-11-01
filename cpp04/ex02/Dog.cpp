#include "Dog.hpp"

Dog::Dog()
: Animal()
{
    type = "Dog";
    b = new Brain();
    std::cout << type << " has been constructed\n";
}

Dog::~Dog()
{
    delete b;
    std::cout << type << " has been destructed\n";
}

Dog::Dog(const Dog& d)
: Animal(d)
{
    b = d.b;
    std::cout << type << " has been copy constructed\n";
}

Dog& Dog::operator=(const Dog& d)
{
    b = d.b;
    Animal::operator=(d);
    std::cout << type << " assigned\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof\n";
}