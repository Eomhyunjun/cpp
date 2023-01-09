#ifndef PHONEBOOK
# define PHONEBOOK

#include <iostream>
#include <string>
#include "Contact.hpp"

# define MAX_CONTACT_NUM 8
# define ELEMENT_NUM 5

class PhoneBook
{
    private:
    Contact _contact[MAX_CONTACT_NUM];
    int     index;
    int     fullIndex;

    public:
        PhoneBook(void);
    void Add(void);
    void Search(void);
};

#endif