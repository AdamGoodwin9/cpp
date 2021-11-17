#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
    std::string name;
    bool isSigned;
    int gradeToSign;
    int gradeToExecute;
    Form();
    Form(const std::string, int, int);
    Form(const Form&);
    Form& operator=(const Form&);
public:
    virtual ~Form();
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

    class FormNotSignedException : public std::runtime_error
    {
    public:
        FormNotSignedException(const char*);
    };

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat&);
    virtual void execute(const Bureaucrat&) const = 0;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif