#include "AwesomeHeom.hpp"

AwesomeHeom::AwesomeHeom(void){
    cmd = "start";
};

int AwesomeHeom::InputLoop(void)
{
    while (cmd != "EXIT")
    {
        CommandGuide();
        if  (!std::getline(std::cin, cmd))
        {
            std::cout << "\n시스템 종료" << std::endl;
            exit(0);
        }
        if (cmd == "ADD")
            _pb.Add();
        else if (cmd == "SEARCH")
            _pb.Search();
        else if (cmd == "EXIT")
            std::cout << "\n시스템 종료" << std::endl;
        else
            std::cout << "command not found" << std::endl;
        std::cout << std::endl;
    }

    return (0);
}

void AwesomeHeom::CommandGuide(void){
	std::cout << "[ ADD, SEARCH, EXIT ] 중 원하는 기능을 입력하세요 : ";
};
