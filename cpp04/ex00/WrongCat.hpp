#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string const &type);
        WrongCat(WrongCat const &_WrongCat);
        ~WrongCat();
        WrongCat &operator=(WrongCat const &_WrongCat);
        
        void makeSound() const;
};

#endif