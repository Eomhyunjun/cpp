#include "Form.hpp"

Form::Form()
	: name("FORM_DEFAULT"), signGrade(3), executeGrade(2), issigned(false)
{
	std::cout << name << " Form constructor called." << std::endl;
}

Form::Form(std::string _name, int _signGrade, int _executeGrade)
	: name(_name), signGrade(_signGrade), executeGrade(_executeGrade), issigned(false)
{
    isValidGrades(_signGrade, _executeGrade);
    std::cout << name << " Form constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << name << " Form destructor called." << std::endl;
}

Form::Form(const Form &form)
	: name(form.name), signGrade(form.signGrade), executeGrade(form.executeGrade), issigned(form.issigned)
{
	*this = form;
	std::cout << name << " Form copy constructor called." << std::endl;
}

Form& Form::operator = (const Form &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}

std::ostream& operator << (std::ostream &out, const Form &form)
{
    out << "Form Name: ";
	out << form.getName();
    out << ", signGrade: ";
	out << form.getSignGrade();
    out << ", executeGrade: ";
	out << form.getExecuteGrade();
    out << ", issigned: ";
	out << form.getIsSigned();
	return out;
}

std::string Form::getName() const
{
    return name;
}

int Form::getSignGrade() const
{
    return signGrade;
}

int Form::getExecuteGrade() const
{
    return executeGrade;
}

bool Form::getIsSigned() const
{
    return issigned;
}

void Form::beSigned(Bureaucrat& _Bureaucrat)
{
	if (_Bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	else
		issigned = true;
}

void Form::isValidGrades(int signGrade, int executeGrade)
{
	if (signGrade > LOWEST_GRADE || executeGrade > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
	else if (signGrade < HIGHEST_GRADE || executeGrade < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
}

const char* Form::GradeTooHighException::what() const throw()
{
    return (">>>>GradeTooHighException<<<<");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return (">>>>>GradeTooLowException<<<<");
}