#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
: Form("Default Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Robotomy Request", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f) : Form(f) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
    Form::operator=(f);
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& b) const
{
    if (!isSigned) throw Form::FormNotSignedException("Form is not signed");
    if (b.getGrade() > gradeToExecute) throw Form::GradeTooLowException("Grade is too low to execute!");

    std::cout << "BRRRRRR DRILLING SO HARD!!\n";
    if (rand() % 2)
    {
        std::cout << target << " has been robotomized successfully!\n";
    }
    else
    {
        std::cout << "Failure. " << target << "'s skull was too thick!\n";
    }
}