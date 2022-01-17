#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "------- Normal case --------" << std::endl;
    try
    {
        Bureaucrat ab("heom", 3);
        Form       cd("form", 3, 4);

        std::cout << cd << std::endl;
        ab.signForm(cd);
        std::cout << "aaaaaaaaaaaa" << std::endl;
        std::cout << cd << std::endl;
        std::cout << "aaaaaaaaaaaa" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "------- err case --------" << std::endl;
    try
    {
        Bureaucrat ef("heom2", 4);
        Form       ss("form2", 3, 4);
        
        std::cout << ss << std::endl;
        ef.signForm(ss);
        std::cout << "aaaaaaaaaaaa" << std::endl;
        std::cout << ss << std::endl;
        std::cout << "aaaaaaaaaaaa" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}