#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);

    virtual void makeSound() const;
};

#endif