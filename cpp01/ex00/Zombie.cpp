#include "Zombie.hpp"

Zombie::Zombie(std::string name)
: name(name)
{}

Zombie::~Zombie()
{
    std::cout << name << " has tragically passed away.\n";
}

void Zombie::announce()
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}