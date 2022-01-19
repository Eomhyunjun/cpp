#ifndef RRF_HH
#define RRF_HH

#include "Form.hpp"

# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm : public Form
{
    std::string target;
    
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm& _rrform);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator = (const RobotomyRequestForm& _rrform);

		void execute(Bureaucrat const & executor) const;
};

#endif