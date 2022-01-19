#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << "-------All Normal case --------" << std::endl;
    try
    {
        Bureaucrat ab("heom", 3);
        ShrubberyCreationForm       cd("CD");
        RobotomyRequestForm         rr("RR");
        PresidentialPardonForm      pp("PP");

        std::cout << "ALL CONSDTRUCT----------" << std::endl;
        ab.signForm(cd);
        ab.signForm(rr);
        ab.signForm(pp);
        std::cout << "ALL SIGNED---------" << std::endl;
        ab.executeForm(cd);
        ab.executeForm(rr);
        ab.executeForm(pp);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "------- err case --------" << std::endl;

    return (0);
}