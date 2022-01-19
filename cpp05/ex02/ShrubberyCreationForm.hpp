#ifndef SCF_HH
#define SCF_HH

#include "Form.hpp"
#include <fstream>

# define S_SIGN 145
# define S_EXEC 137

#define ASCIITREE \
    "                          +                        \n\
                          #                         \n\
                         ###                        \n\
                 '#:. .:##'##:. .:#'                \n\
                   '####'###'####'                  \n\
             '#:.    .:#'###'#:.    .:#'            \n\
                '#########'#########'               \n\
             '#:.  '####'###'####'  .:#'            \n\
              '#######''##'##''#######'             \n\
                .'##'#####'#####'##'                \n\
        '#:. ...  .:##'###'###'##:.  ... .:#'       \n\
            '#######'##'#####'##'#######'           \n\
               '#####''#######''#####'              \n\
                  '      000      '                 \n\
                         000                        \n\
.. .. ..................O000O........................ ...... ..."

class ShrubberyCreationForm : public Form
{
    std::string target;

    public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(std::string _target);
      ShrubberyCreationForm(const ShrubberyCreationForm& _scform);
      ~ShrubberyCreationForm();
      ShrubberyCreationForm& operator = (const ShrubberyCreationForm& _scform);

      void execute(Bureaucrat const & executor) const;
};

#endif