#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm()
: Form("Default Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("Presidential Pardon", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f) : Form(f) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
    Form::operator=(f);
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& b) const
{
    if (!isSigned) throw Form::FormNotSignedException("Form is not signed");
    if (b.getGrade() > gradeToExecute) throw Form::GradeTooLowException("Grade is too low to execute!");

    std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}