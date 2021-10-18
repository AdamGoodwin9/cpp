#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

#define AMOUNT 10

int main()
{
    Zombie* horde = zombieHorde(AMOUNT, "hordenoob");
    for (int i = 0; i < AMOUNT; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}