#include "easyfind.hpp"
# include <vector>
# include <list>

int main(void)
{
    std::cout << "----- vector -----" << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
    try
    {
        std::vector<int>::iterator ve_easy = easyfind(vec, 5);
        std::cout << *ve_easy << std::endl;
    }
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "----- vector -----" << std::endl;
    std::list<int> li;
    for (int i = 9; i >= 0; i--)
        li.push_back(i);
    try
    {
        std::list<int>::iterator li_easy = easyfind(li, 10);
        std::cout << *li_easy << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}
