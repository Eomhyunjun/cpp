#ifndef CONTACT
# define CONTACT

#include <iostream>
#include <iomanip>
#include <string>

# define ELEMENT_NUM 5

class Contact
{
    private:
    static std::string keys[ELEMENT_NUM];
    std::string vals[ELEMENT_NUM];

    enum keys_id
    {
        FIRSTNAME = 0,
		LASTNAME,
		NICKNAME,
        NUMBER,
        SECRET,
    };

    public:
        void Set(void);
        static void PrintPhonebookHeader(void);
        void PrintPhonebookContent(int index);
        void printSeletedContact(void);
        std::string cutStrLen(std::string str);
};

#endif