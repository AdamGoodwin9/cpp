#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    size_t size = 10;

    AAnimal *animals[size];

    std::cout << "initializing all the animals\n\n";   
    for (size_t i = 0; i < size; i++)
    {
        std::cout << i << ": ";
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        } 
    }

    std::cout << "\nbrutally murdering  all the animals\n\n";
    for (size_t i = 0; i < size; i++)
    {
        delete animals[i];
    }
    
    std::cout << "\nCREATING BASIC\n";
    Dog basic;
    std::cout << "CREATING TMP\n";
    Dog tmp = basic;
    std::cout << "DONE\n";
    
    return 0;
}
