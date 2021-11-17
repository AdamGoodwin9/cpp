#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

#include <cstdlib>

int main()
{
    Bureaucrat boss = Bureaucrat("Bossman", 1);
    Intern i = Intern();

    Form* test = i.makeForm("test", "abc");
    Form* shrubMaker = i.makeForm("shrubbery creation", "backyard");
    Form* robotMe = i.makeForm("robotomy request", "Goody");
    Form* snowdenPardon = i.makeForm("presidential pardon", "Edward Snowden");

    boss.signForm(*robotMe);
    boss.executeForm(*robotMe);

    delete test;
    delete shrubMaker;
    delete robotMe;
    delete snowdenPardon;
}