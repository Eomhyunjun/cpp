#ifndef PPF_HH
#define PPF_HH

# include "Form.hpp"

# define P_SIGN 25
# define P_EXEC 5

class PresidentialPardonForm : public Form
{
    std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& _ppform);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator = (const PresidentialPardonForm& _ppform);

		void execute(Bureaucrat const & executor) const;
};

#endif