#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    Brain* attribute;

    public:
        Dog();
        Dog(std::string const &type);
        Dog(Dog const &_Dog);
        ~Dog();
        Dog &operator=(Dog const &_Dog);

        void makeSound() const;
        Brain const& getBrain() const;
};

#endif