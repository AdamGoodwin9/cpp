#include "AForm.hpp"

AForm::AForm() : name("Blank Form"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const AForm& f)
{
    *this = f;
}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& f)
{
    name = f.name;
    isSigned = f.isSigned;
    gradeToSign = f.gradeToSign;
    gradeToExecute = f.gradeToExecute;

    return *this;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
{
    std::cout << "Constructing " << name << " with sign requirement " << gradeToSign 
              << " and execute requirement " << gradeToExecute << std::endl;

    if (gradeToSign < 1) throw AForm::GradeTooHighException("Sign requirement is too high!");
    if (gradeToSign > 150) throw AForm::GradeTooLowException("Sign requirement is too low!");
    if (gradeToExecute < 1) throw AForm::GradeTooHighException("Execute requirement is too high!");
    if (gradeToExecute > 150) throw AForm::GradeTooLowException("Execute requirement is too low!");

    this->name = name;
    isSigned = false;
    this->gradeToSign = gradeToSign;
    this->gradeToExecute = gradeToExecute;
}

AForm::GradeTooHighException::GradeTooHighException(const char* what) : runtime_error(what) {}

AForm::GradeTooLowException::GradeTooLowException(const char* what) : runtime_error(what) {}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::sign()
{
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << "AForm " << f.getName() << " requires " << f.getGradeToSign() << " for signing and " 
       << f.getGradeToExecute() << " for executing.\n";

    return os;
}