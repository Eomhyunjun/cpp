#include "Intern.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"

Intern::Intern() {
    std::cout << "Intern constructor" << std::endl;
};

Intern::Intern(Intern const& _Intern) {
    std::cout << "Intern copy constructor" << std::endl;
    *this = _Intern;
};

Intern::~Intern() {
    std::cout << "Intern destructor" << std::endl;
};


Intern& Intern::operator=(Intern const& _Intern)
{
	if (this == &_Intern)
		return (*this);
	return (*this);
};

Form* Intern::makeForm(std::string const& type, std::string const& target) const {
    try
    {
        Form* form = NULL;
        (type == "PresidentialPardonForm") && (form = new PresidentialPardonForm(target));
        (type == "RobotomyRequestForm") && (form = new RobotomyRequestForm(target));
        (type == "ShrubberyCreationForm") && (form = new ShrubberyCreationForm(target));
        if (form == NULL) throw UndefinedTypeException();
            return form;
    }
    catch (std::exception& e)
    {
        std::cerr << "Intern cannot create " << target << "(" << type << ")"
                  << " because " << e.what() << std::endl;
        return (NULL);
    }
};

const char* Intern::UndefinedTypeException::what() const throw()
{
	return ("~~~~UndefinedTypeException~~~~~");
}