#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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