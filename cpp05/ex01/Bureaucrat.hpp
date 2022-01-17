#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

#include <iostream>
#include <exception>
#include <string>

#include "Form.hpp"
class Form;

class Bureaucrat
{
	const std::string name;
	int grade;

	public:
        Bureaucrat();
        Bureaucrat(std::string _name, int _grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& _Bureaucrat);
        Bureaucrat &operator=(const Bureaucrat& _Bureaucrat);

		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
        void isValidGrade(int _grade);
        void signForm(Form& _Form);


		class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
		class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator << ( std::ostream &ostream, const Bureaucrat &_Bureaucrat);

#endif