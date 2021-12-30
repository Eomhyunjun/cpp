#include "Karen.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Karen karen;

	if (argc != 2)
		std::cout << "Only one args, default [ DEBUG, INFO, WARNING, ERROR ] or anything..." << std::endl;
    else
    {
        std::string level = argv[1];
        karen.complain(level);
    }

    return (1);
}