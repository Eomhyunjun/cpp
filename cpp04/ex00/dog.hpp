#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string const &type);
        Dog(Dog const &_Dog);
        ~Dog();
        Dog &operator=(Dog const &_Dog);

        void makeSound() const;
};

#endif