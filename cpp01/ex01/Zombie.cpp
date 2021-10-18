#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
    std::cout << name << " has tragically passed away.\n";
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}