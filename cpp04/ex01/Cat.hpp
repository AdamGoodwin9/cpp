#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* b;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);

    virtual void makeSound() const;
};

#endif