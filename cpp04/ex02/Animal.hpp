#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    Animal();
    Animal(const Animal&);
    std::string type;
public:
    virtual ~Animal();
    Animal& operator=(const Animal&);

    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif