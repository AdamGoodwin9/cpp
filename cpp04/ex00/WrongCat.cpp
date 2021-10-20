#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal()
{
    type = "WrongCat";
    std::cout << type << " has been constructed\n";
}

WrongCat::~WrongCat()
{
    std::cout << type << " has been destructed\n";
}

WrongCat::WrongCat(const WrongCat& c)
: WrongAnimal(c)
{
    std::cout << type << " has been copy constructed\n";
}

WrongCat& WrongCat::operator=(const WrongCat& c)
{
    WrongAnimal::operator=(c);
    std::cout << type << " assigned\n";
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "meow\n";
}