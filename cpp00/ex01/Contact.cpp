#include "Contact.hpp"

std::string Contact::keys[ELEMENT_NUM] = {
    "First name",
    "Last name",
    "Nick name",
    "Secret"
};

void Contact::Set(void)
{
    for (int i = 0; i < ELEMENT_NUM; i++)
    {
        std::string buffer;

        std::cout << keys[i] << ": ";
        std::getline(std::cin, buffer);
        vals[i].assign(buffer);
    }
}

std::string Contact::cutStrLen(std::string str)
{
    if (str.length() <= 10)
        return (str);
    else
        return ((str.substr(0, 9)) + ".");
}

void Contact::PrintPhonebookHeader()
{
    std::cout << std::setw(10) << "index";
    std::cout << "|";
    for (int i = 0; i <= NICKNAME; i++)
    {
        std::cout << std::setw(10) << keys[i];
        if (i < NICKNAME)
            std::cout << "|";
    }
    std::cout << "\n----------+----------+----------+----------" << std::endl;
}

void Contact::PrintPhonebookContent(int index)
{
    std::cout << std::setw(10) << index;
    std::cout << "|";
    for (int i = 0; i <= NICKNAME; i++)
    {
        std::cout << std::setw(10) << cutStrLen(vals[i]);
        if (i < NICKNAME)
            std::cout << "|";
    }
    std::cout << "\n----------+----------+----------+----------" << std::endl;
}

void Contact::printSeletedContact()
{
    std::cout << "\n------ 자세히 보기 ------" << std::endl;
    for (int i = 0; i < ELEMENT_NUM; i++)
    {
        std::cout << keys[i] << ": " << vals[i] << std::endl;
    }
    std::cout << "+------------------------+" << std::endl;
}