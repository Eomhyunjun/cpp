#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "------- Normal case --------" << std::endl;
    try
    {
        Bureaucrat AB("heom", 130);
        std::cout << AB << std::endl;
        std::cout << AB.getName() << std::endl;
        std::cout << AB.getGrade() << std::endl;
        AB.increment();
        std::cout << AB.getGrade() << std::endl;
        AB.decrement();
        std::cout << AB.getGrade() << std::endl;   
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "------- err case --------" << std::endl;
    try
    {
        Bureaucrat AB("heom", 151);
        std::cout << AB << std::endl;
        std::cout << AB.getName() << std::endl;
        std::cout << AB.getGrade() << std::endl;
        AB.increment();
        std::cout << AB.getGrade() << std::endl;
        AB.decrement();
        std::cout << AB.getGrade() << std::endl;   
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}