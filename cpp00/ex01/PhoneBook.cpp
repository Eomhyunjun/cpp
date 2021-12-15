#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook(void)
{
    index = 0;
    fullIndex = 0;
};

int  isNum(std::string str)
{
    if (atoi(str.c_str()) == 0)
    {
        if (!str.compare("0"))
            return (0);
        return (1);
    }
    return (0);
}

void PhoneBook::Add(void){
    if (index == MAX_CONTACT_NUM)
    {
        std::string chk;
        std::cout << "연락처가 가득 찼습니다. 저장하시면 오래된 연락처가 지워집니다. 계속하시겠습니까? (y/n): ";
        while (1)
        {
            std::getline(std::cin, chk);
            std::cout << std::endl;
            if (chk == "y")
            {
                if (fullIndex == MAX_CONTACT_NUM)
                    fullIndex = 0;
                _contact[fullIndex].Set();
                fullIndex++;
                std::cout << "덮어쓰기를 완료했습니다" << std::endl;
                break ;
            }
            else if (chk == "n")
                break ;
            else
                std::cout << "y 또는 n만 입력 가능합니다. 다시 입력해주세요: ";
        }
    }
    else
    {
        _contact[index].Set();
        index++;
        std::cout << "저장을 완료하였습니다!" << std::endl;
    }
}

void PhoneBook::Search(void)
{
    if (index == 0)
        std::cout << "저런 친구가 없네요... 먼저 친구를 추가해주세요" << std::endl;
    else
    {
        Contact::PrintPhonebookHeader();
        for (int i = 0; i < index; i++)
            _contact[i].PrintPhonebookContent(i);
        std::cout << std::endl;
        while (1)
        {
            std::string stringIndex;
            int numIndex = 0;

            std::cout << "자세히 보고 싶은 index를 입력하세요 : ";
            std::getline(std::cin, stringIndex);
            std::stringstream ssInt(stringIndex);
            ssInt >> numIndex;
            if (isNum(stringIndex))
                std::cout << "숫자만 입력 가능합니다." << std::endl;
            else if (numIndex < index)
            {
                _contact[numIndex].printSeletedContact();
                break ;
            }
            else
                std::cout << "해당 index 정보가 없습니다." << std::endl;
            std::cout << std::endl;
        }
    }
}