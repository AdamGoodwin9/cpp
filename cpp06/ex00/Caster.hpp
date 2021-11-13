#ifndef CASTER_HPP
#define CASTER_HPP

#include <iostream>

class Caster
{
private:
    std::string s;
    Caster();
    int asInt();
public:
    Caster(std::string);
    Caster(const Caster&);
    ~Caster();
    Caster& operator=(const Caster&);

    operator char();
	operator int();
	operator float();
	operator double();
};

#endif