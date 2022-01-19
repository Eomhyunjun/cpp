#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery", S_SIGN, S_EXEC), target("SC_default")
{
    std::cout << "SC Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	: Form("Shrubbery", S_SIGN, S_EXEC), target(_target)
{
        std::cout << "SC -target- Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "SC Destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& _scform)
	: Form("Shrubbery", S_SIGN, S_EXEC), target(_scform.target)
{
    std::cout << "SC -cpoy- Constructor" << std::endl;
	*this = _scform;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& _scform)
{
	if (this == &_scform)
		return (*this);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    isExecutable(executor);
    std::ofstream out;
    out.open((target + "_shrubbery").c_str());
    out << ASCIITREE;
    out.close();
}
