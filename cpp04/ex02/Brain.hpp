#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    const static int count = 100;
    std::string ideas[count];
public:
    Brain();
    Brain(Brain const&);
    ~Brain();
    Brain& operator=(Brain const&);
};

#endif