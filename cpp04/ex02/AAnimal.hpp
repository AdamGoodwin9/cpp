#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    AAnimal();
    AAnimal(const AAnimal&);
    std::string type;
public:
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal&);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif