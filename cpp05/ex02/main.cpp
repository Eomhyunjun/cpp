#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << time(0) <<std::endl;
    // std::cout << "-------All Normal case --------" << std::endl;
    // try
    // {
    //     Bureaucrat ab("heom", 3);
    //     ShrubberyCreationForm       cd("CD");
    //     RobotomyRequestForm         rr("RR");
    //     PresidentialPardonForm      pp("PP");

    //     std::cout << "ALL CONSDTRUCT----------" << std::endl;
    //     ab.signForm(cd);
    //     ab.signForm(rr);
    //     ab.signForm(pp);
    //     std::cout << "ALL SIGNED---------" << std::endl;
    //     ab.executeForm(cd);
    //     ab.executeForm(rr);
    //     ab.executeForm(pp);
    // }
    // catch(std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // std::cout << "------- err case --------" << std::endl;
    // try
    // {
    //     Bureaucrat err("heom", 72);
    //     ShrubberyCreationForm       errcd("CD");
    //     RobotomyRequestForm         errrr("RR");
    //     PresidentialPardonForm      errpp("PP");

    //     std::cout << "ALL CONSDTRUCT----------" << std::endl;
    //     err.signForm(errcd);
    //     err.signForm(errrr);
    //     err.signForm(errpp);
    //     std::cout << "ALL SIGNED---------" << std::endl;
    //     err.executeForm(errcd);
    //     err.executeForm(errrr);
    //     err.executeForm(errpp);
    // }
    // catch(std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    return (0);
}