#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include <iostream>
#include <string>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
   public:
    Intern();
    Intern(Intern const& _Intern);
    ~Intern();

    Intern& operator=(Intern const& _Intern);

    Form* makeForm(std::string const& type, std::string const& target) const;

    class UndefinedTypeException : public std::exception
    {
       public:
            const char* what() const throw();
    };
};

#endif