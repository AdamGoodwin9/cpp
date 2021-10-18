#include "Karen.hpp"

void Karen::debug()
{
    std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
    std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
    std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen() {}

Karen::~Karen() {}

void Karen::complain(std::string level)
{
    KarenTuple funcs[4] = {
        {"DEBUG", &Karen::debug},
        {"INFO", &Karen::info},
        {"WARNING", &Karen::warning},
        {"ERROR", &Karen::error}
    };

    int i;
    for (i = 0; i < 4; i++)
    {
        if (funcs[i].level == level)
        {
            break;
        }
    }

    switch (i)
    {
    case 0:
        (this->*funcs[i++].func)();
    case 1:
        (this->*funcs[i++].func)();
    case 2:
        (this->*funcs[i++].func)();
    case 3:
        (this->*funcs[i++].func)();
        break;
    default:
        std::cout << "Karen does not know how to complain about that\n";
        break;
    }
}