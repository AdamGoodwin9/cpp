#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string name;
    int grade;
    Bureaucrat();
public:
    Bureaucrat(const Bureaucrat&);
    virtual ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat&);
    Bureaucrat(const std::string, int);

    class GradeTooHighException : public std::runtime_error
    {
    public:
        GradeTooHighException(const char*);
    };

    class GradeTooLowException : public std::runtime_error
    {
    public:
        GradeTooLowException(const char*);
    };

    const std::string& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    void signForm(Form&);
    void executeForm(const Form&);
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif