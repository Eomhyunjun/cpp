#ifndef AWESOME_HOEM
# define AWESOME_HOEM

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

class AwesomeHeom
{
    private:
    PhoneBook _pb;
    std::string cmd;

    public:
    AwesomeHeom(void);
    int InputLoop(void);
    void CommandGuide(void);
};

#endif