#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string const &type);
        WrongAnimal(WrongAnimal const &_WrongAnimal);
        ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &_WrongAnimal);
        
        void makeSound() const;
        std::string const& getType() const;
};

#endif