#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[100];

    for (size_t i = 0; i < 100; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        } 
    }

    for (size_t i = 0; i < 100; i++)
    {
        delete animals[i];
    }
    
    //Animal* a = new Animal();

    return 0;
}
