#include "Cat.hpp"

Cat::Cat()
: AAnimal()
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
: AAnimal(c)
{
    b = new Brain(*(c.b));
    std::cout << type << " has been copy constructed\n";
}

Cat& Cat::operator=(const Cat& c)
{
    b = c.b;
    AAnimal::operator=(c);
    std::cout << type << " assigned\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow\n";
}