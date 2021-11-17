#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <map>
#include "Form.hpp"

class Intern
{
private:
    std::map<std::string, Form*(Intern::*)(std::string)> forms;

    Form* makeShrubberyCreation(std::string);
    Form* makeRobotomyRequest(std::string);
    Form* makePresidentialPardon(std::string);
public:
    Intern();
    Intern(const Intern&);
    ~Intern();
    Intern& operator=(const Intern&);

    Form* makeForm(std::string, std::string);
};

#endif