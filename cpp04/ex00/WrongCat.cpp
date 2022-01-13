#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat - Default - constructor" << std::endl;
};

WrongCat::WrongCat(std::string const &_type) : WrongAnimal(_type)
{
    std::cout << "WrongCat - type - constructor" << std::endl;
};

WrongCat::WrongCat(WrongCat const &_WrongCat) : WrongAnimal()
{
    std::cout << "WrongCat - copy - constructor" << std::endl;
    *this = _WrongCat;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
};

WrongCat& WrongCat::operator=(WrongCat const &_WrongCat) {
    std::cout << "WrongCat - assignment - overload" << std::endl;
    if (this != &_WrongCat)
        type = _WrongCat.getType();
    return *this;
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : brrrrr..." << std::endl;
}