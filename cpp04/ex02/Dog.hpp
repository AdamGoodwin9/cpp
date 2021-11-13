#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain* b;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);

    virtual void makeSound() const;
};

#endif