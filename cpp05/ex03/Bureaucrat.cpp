#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NaN"), grade(150)
{
    std::cout << " Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
    isValidGrade(_grade);
    std::cout << name << " constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& _Bureaucrat) : name(_Bureaucrat.getName())
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = _Bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _Bureaucrat)
{
    if (this != &_Bureaucrat)
    {
        grade = _Bureaucrat.getGrade();
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment()
{
    if (grade > HIGHEST_GRADE)
        grade--;
    else
        throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrement()
{
    if (grade < LOWEST_GRADE)
        grade++;
    else
        throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::isValidGrade(int _grade)
{
	if (_grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else if (_grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
}


void Bureaucrat::signForm(Form& _Form)
{
	try
	{
		_Form.beSigned(*this);
		std::cout << name << " signs " << _Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " cannot sign " << _Form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(Form const& _Form)
{
	try
	{
		std::cout << name << " executes " << _Form.getName() << std::endl;
		_Form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " cannot execute " << _Form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (">>>>GradeTooHighException<<<<");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (">>>>>GradeTooLowException<<<<");
}

std::ostream& operator << (std::ostream &ostream, const Bureaucrat &_Bureaucrat)
{
	ostream << _Bureaucrat.getName();
	ostream << ", bureaucrat grade ";
	ostream << _Bureaucrat.getGrade();
	return ostream;
}