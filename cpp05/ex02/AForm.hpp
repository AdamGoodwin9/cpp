#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
private:
    std::string name;
    bool isSigned;
    int gradeToSign;
    int gradeToExecute;
    AForm();
protected:
    AForm(const std::string, int, int);
    AForm(const AForm&);
    AForm& operator=(const AForm&);
public:
    virtual ~AForm();
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
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat&);
    virtual void execute(const Bureaucrat&) const;
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif