#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
    Animal();
    Animal(const Animal&);
protected:
    std::string type;
public:
    virtual ~Animal();
    Animal& operator=(const Animal&);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif