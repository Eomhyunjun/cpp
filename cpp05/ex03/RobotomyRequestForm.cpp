#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("Robotomy", R_SIGN, R_EXEC), target("SC_default")
{
    std::cout << "RR Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	: Form("Robotomy", R_SIGN, R_EXEC), target(_target)
{
        std::cout << "RR -target- Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RR Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& _rrform)
	: Form("Robotomy", R_SIGN, R_EXEC), target(_rrform.target)
{
    std::cout << "RR -cpoy- Constructor" << std::endl;
	*this = _rrform;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& _rrform)
{
	if (this == &_rrform)
		return (*this);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    isExecutable(executor);
    std::cout << target << " drill drill" << std::endl;
    if (time(0) % 2)
        std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << target << " robotomizing failure." << std::endl;
}