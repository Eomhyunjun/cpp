#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "WrongAnimal - Default - constructor" << std::endl;
};

WrongAnimal::WrongAnimal(std::string const &_type) : type(_type)
{
    std::cout << "WrongAnimal - type - constructor" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &_WrongAnimal)
{
    std::cout << "WrongAnimal - copy - constructor" << std::endl;
    *this = _WrongAnimal;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &_WrongAnimal) {
    std::cout << "WrongAnimal - assignment - overload" << std::endl;
    if (this != &_WrongAnimal)
        type = _WrongAnimal.getType();
    return *this;
};

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal : brrrrr..." << std::endl;
}

std::string const& WrongAnimal::getType() const
{
    std::cout << "WrongAnimal ::getType" << std::endl;
    return type;
}
