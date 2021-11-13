#include "Cat.hpp"

Cat::Cat()
: Animal()
{
    type = "Cat";
    b = new Brain();
    std::cout << type << " has been constructed\n";
}

Cat::~Cat()
{
    delete b;
    std::cout << type << " has been destructed\n";
}

Cat::Cat(const Cat& c)
: Animal(c)
{
    b = new Brain(*(c.b));
    std::cout << type << " has been copy constructed\n";
}

Cat& Cat::operator=(const Cat& c)
{
    b = c.b;
    Animal::operator=(c);
    std::cout << type << " assigned\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow\n";
}