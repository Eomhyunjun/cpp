#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("President", P_SIGN, P_EXEC), target("SC_default")
{
    std::cout << "RR Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	: Form("President", P_SIGN, P_EXEC), target(_target)
{
        std::cout << "RR -target- Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "RR Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& _ppform)
	: Form("President", P_SIGN, P_EXEC), target(_ppform.target)
{
    std::cout << "RR -cpoy- Constructor" << std::endl;
	*this = _ppform;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& _ppform)
{
	if (this == &_ppform)
		return (*this);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    isExecutable(executor);
        std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}