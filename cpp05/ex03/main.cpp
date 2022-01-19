#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Intern someRandomIntern;

    Bureaucrat pp("pp", 1);
    Form *form[3];

    form[0] = someRandomIntern.makeForm("PresidentialPardonForm", "Bender_pp");
    form[1] = someRandomIntern.makeForm("RobotomyRequestForm", "Bender_rr");
    form[2] = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender_sc");

    std::cout << "--------------------------------" << std::endl;
    for (int i = 0; i < 3; i++) {
        pp.signForm(*form[i]);
        pp.executeForm(*form[i]);
        std::cout << "--------------------------------" << std::endl;
    }
    return (0);
}