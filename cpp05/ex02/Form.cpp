#include "Form.hpp"

Form::Form() : name("Blank Form"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const Form& f)
{
    *this = f;
}

Form::~Form() {}

Form& Form::operator=(const Form& f)
{
    name = f.name;
    isSigned = f.isSigned;
    gradeToSign = f.gradeToSign;
    gradeToExecute = f.gradeToExecute;

    return *this;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
{
    std::cout << "Constructing " << name << " with sign requirement " << gradeToSign 
              << " and execute requirement " << gradeToExecute << std::endl;

    if (gradeToSign < 1) throw Form::GradeTooHighException("Sign requirement is too high!");
    if (gradeToSign > 150) throw Form::GradeTooLowException("Sign requirement is too low!");
    if (gradeToExecute < 1) throw Form::GradeTooHighException("Execute requirement is too high!");
    if (gradeToExecute > 150) throw Form::GradeTooLowException("Execute requirement is too low!");

    this->name = name;
    isSigned = false;
    this->gradeToSign = gradeToSign;
    this->gradeToExecute = gradeToExecute;
}

Form::GradeTooHighException::GradeTooHighException(const char* what) : runtime_error(what) {}

Form::GradeTooLowException::GradeTooLowException(const char* what) : runtime_error(what) {}

Form::FormNotSignedException::FormNotSignedException(const char* what) : runtime_error(what) {}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > gradeToSign) throw Form::GradeTooLowException("Grade is too low!");
    if (isSigned) throw std::runtime_error("Form already signed!");

    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form " << f.getName() << " requires " << f.getGradeToSign() << " for signing and " 
       << f.getGradeToExecute() << " for executing.\n";

    return os;
}