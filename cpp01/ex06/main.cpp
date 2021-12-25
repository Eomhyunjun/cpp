#include "Karen.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Karen karen;

	if (argc != 2)
		std::cout << "인자값을 하나만 입력하세요. 기본 명령어 [ DEBUG, INFO, WARNING, ERROR ]" << std::endl;
    else
    {
        std::string level = argv[1];
        karen.complain(level);
    }

    return (1);
}