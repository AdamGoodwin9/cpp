#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string);
	PresidentialPardonForm(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);

	virtual void execute(const Bureaucrat&) const;
};

#endif