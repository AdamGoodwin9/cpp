#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);

    virtual void makeSound() const;
};

#endif