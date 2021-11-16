#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Mr. Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
    *this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
    name = b.name;
    grade = b.grade;

    return *this;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    std::cout << "Constructing " << name << " with grade " << grade << std::endl;

    if (grade < 1) throw Bureaucrat::GradeTooHighException("Grade is too high!");
    if (grade > 150) throw Bureaucrat::GradeTooLowException("Grade is too low!");

    this->name = name;
    this->grade = grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* what) : runtime_error(what) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* what) : runtime_error(what) {}

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    std::cout << "Incrementing " << name << "'s grade.\n";
    if (grade == 1) throw Bureaucrat::GradeTooHighException("Already at highest grade!");
    
    grade--;
}

void Bureaucrat::decrementGrade()
{
    std::cout << "Decrementing " << name << "'s grade.\n";
    if (grade == 150) throw Bureaucrat::GradeTooLowException("Already at lowest grade!");
    
    grade++;
}

void Bureaucrat::signForm(Form& f)
{
    try
    {
        f.beSigned(*this);
        std::cout << name << " signs " << f.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << name << " cannot sign " << f.getName() << " because: " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;

    return os;
}