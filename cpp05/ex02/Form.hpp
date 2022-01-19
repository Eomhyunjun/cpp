#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    const std::string name;
    const int signGrade;
    const int executeGrade;
    bool issigned;

	public:
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		~Form();
		Form(const Form& form);

		Form &operator = (const Form& form);

		std::string getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat& _Bureaucrat);
        void isValidGrades(int signGrade, int executeGrade);
		void virtual execute(Bureaucrat const & executor) const = 0;
		bool isExecutable(Bureaucrat const& _Bureaucrat) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class UnapprovedException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowExcute : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

std::ostream& operator << (std::ostream &out, const Form &form);

#endif