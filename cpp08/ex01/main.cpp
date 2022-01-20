#include "span.hpp"

int main()
{
    try
    {
        std::cout << "<< basic >>" << std::endl;
        {
            Span sp = Span(5);
            sp.addNumber(5);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        std::cout << "<< 10000 >>" << std::endl;
        {
            Span sp = Span(10000);
            for (int i = 0; i < 10000; i++)
            {
                if (i == 0)
                    sp.addNumber(1);
                else if (i == 1)
                    sp.addNumber(100000);
                else
                    sp.addNumber(i);
            }
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}
