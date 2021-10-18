#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main()
{
    Zombie *zombie = newZombie("heapZombie");
    randomChump("stackZombie");
    zombie->announce();
    delete zombie;
    return 0;
}