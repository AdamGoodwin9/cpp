#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int main()
{
    std::cout << "SHRUBBERY TIME\n\n";
    ShrubberyCreationForm s = ShrubberyCreationForm("backyard");
    Bureaucrat megd = Bureaucrat("MegDeeee!!", 148);
    Bureaucrat daniel = Bureaucrat("Big Danny", 140);
    Bureaucrat connor88 = Bureaucrat("C0NN0R88", 130);

    megd.signForm(s);
    megd.executeForm(s);
    daniel.signForm(s);
    daniel.executeForm(s);
    connor88.signForm(s);
    connor88.executeForm(s);

    std::cout << "\nROBOTOMY TIME\n\n";

    RobotomyRequestForm r1 = RobotomyRequestForm("Meep");
    RobotomyRequestForm r2 = RobotomyRequestForm("Gochi");
    RobotomyRequestForm r3 = RobotomyRequestForm("Goody");
    Bureaucrat iceJotaro = Bureaucrat("Ice Jotarouuuwu", 2);
    iceJotaro.executeForm(r1);
    iceJotaro.signForm(r1);
    iceJotaro.signForm(r2);
    iceJotaro.signForm(r3);
    srand(time(0));
    iceJotaro.executeForm(r1);
    iceJotaro.executeForm(r2);
    iceJotaro.executeForm(r3);

    std::cout << "\nPRESIDENTIAL TIME\n\n";

    Form* p = new PresidentialPardonForm("Edward Snowden");
    Bureaucrat trumpo = Bureaucrat("President Donaldo El Trumpadoro", 6);
    Bureaucrat illuminatiGuy = Bureaucrat("mega hobo man", 1);
    
    trumpo.signForm(*p);
    illuminatiGuy.executeForm(*p);

    delete p;
}