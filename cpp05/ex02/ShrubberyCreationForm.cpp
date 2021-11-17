#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("Default Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery Creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f) : Form(f) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
    Form::operator=(f);
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
    if (!isSigned) throw Form::FormNotSignedException("Form is not signed");
    if (b.getGrade() > gradeToExecute) throw Form::GradeTooLowException("Grade is too low to execute!");

    std::ofstream os((target + "_shrubbery").c_str());
    if (!os.good()) throw std::runtime_error("Failed to write to file");

    os << "    _______  \n";
    os << "   /  o    \\ \n";
    os << "  | o  o  o |\n";
    os << "  \\  o     / \n";
    os << "   \\   o /   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   { ||| }   \n";
    os << "   / ||| \\   \n";
    os.close();
}