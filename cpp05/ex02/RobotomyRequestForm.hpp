#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string);
	RobotomyRequestForm(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);

	virtual void execute(const Bureaucrat&) const;
};

#endif