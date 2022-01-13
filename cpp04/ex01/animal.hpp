#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string const &type);
        Animal(Animal const &_Animal);
        virtual ~Animal();
        Animal &operator=(Animal const &_Animal);
        
        virtual void makeSound() const;
        std::string const& getType() const;
};

#endif