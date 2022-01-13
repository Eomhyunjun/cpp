#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

#include <string>

class Cat : public Animal
{
    Brain* attribute;

    public:
        Cat();
        Cat(std::string const &type);
        Cat(Cat const &_Cat);
        ~Cat();
        Cat &operator=(Cat const &_Cat);
        
        void makeSound() const;
        Brain const& getBrain() const;

};

#endif