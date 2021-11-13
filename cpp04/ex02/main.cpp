#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    size_t size = 10;

    Animal *animals[size];

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
    
    std::cout << "\nsmall animal cluster now\n";
    // Animal one;
    Animal* two;
    (void)two;
    //two = new Animal();
    std::cout << "\nmaking animal three\n";
    Animal* three = new Dog();
    std::cout << "\nmaking animal four\n";
    Animal* four = new Cat();
    std::cout << "\ndeleting animal three\n";
    delete three;
    std::cout << "\ndeleting animal four\n";
    delete four;

    std::cout << "\n\nCREATING BASIC\n";
    Dog basic;
    std::cout << "CREATING TMP\n";
    Dog tmp = basic;
    std::cout << "DONE\n\n";
    
    std::cout << "CREATE FIDO\n";
    Dog* fido = new Dog();
    std::cout << "CREATE JOHN\n";
    Dog* john = new Dog();
    std::cout << "ASSIGN JOHN TO FIDO\n";
    *fido = *john;
    std::cout << "KILL FIDO\n";
    delete fido;
    std::cout << "KILL JOHN\n";
    delete john;
    std::cout << "Manual deletion finished, going out of scope kills rest of animals\n";

    return 0;
}
