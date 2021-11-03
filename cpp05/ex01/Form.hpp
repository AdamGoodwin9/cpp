#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
    std::string name;
    bool isSigned;
    int gradeToSign;
    int gradeToExecute;
    Form();
public:
    Form(const Form&);
    ~Form();
    Form& operator=(const Form&);
    Form(const std::string, int, int);

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
    int getGradeToSign() const;
    int getGradeToExecute() const;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif