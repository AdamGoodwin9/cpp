#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    forms["shrubbery creation"] = &Intern::makeShrubberyCreation;
    forms["robotomy request"] = &Intern::makeRobotomyRequest;
    forms["presidential pardon"] = &Intern::makePresidentialPardon;
}

Intern::Intern(const Intern& i)
{
    *this = i;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& i)
{
    (void)i;
    return *this;
}

Form* Intern::makeShrubberyCreation(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
    if (!forms[formName])
    {
        std::cout << formName << " does not exist\n";
        return 0;
    }

    std::cout << "Intern creates " << formName << std::endl;
    return (this->*forms[formName])(formTarget);
}