#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string const &type);
        Cat(Cat const &_Cat);
        ~Cat();
        Cat &operator=(Cat const &_Cat);
        
        void makeSound() const;
};

#endif