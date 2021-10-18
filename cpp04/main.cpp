#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    animal->makeSound();
}

/*
For every exercise, your main must test everything.
Constructors and destructors of each class must have specifics output.
Create a simple and complete base class Animal.
The animal class got one protected attribute:
• std::string type;
Create a class Dog that inherits from Animal.
Create a class Cat that inherits from Animal.
(for the animal class the type can be left empty or put at any value).
Every class should put their name in the Type field for example:
The Dog class type must be initialized as "Dog".
Every animal must be able to use the method makeSound().
This method will display an appropriate message on the standard outputs based on the
class.

This should output the specific makeSound of the Dog and cat class, not the animal
one.
To be sure you will create a WrongCat class that inherits a WrongAnimal class that will
output the WrongAnimal makeSound() when test under the same conditions.

*/