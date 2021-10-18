#pragma once
#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>


class Karen
{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    Karen();
    ~Karen();

    void complain(std::string);
};

typedef struct s_KarenTuple
{
    std::string level;
    void (Karen::*func)();
}   KarenTuple;

#endif