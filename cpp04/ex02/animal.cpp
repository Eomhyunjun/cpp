#include "animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal - Default - constructor" << std::endl;
};

Animal::Animal(std::string const &_type) : type(_type)
{
    std::cout << "Animal - type - constructor" << std::endl;
};

Animal::Animal(Animal const &_Animal)
{
    std::cout << "Animal - copy - constructor" << std::endl;
    *this = _Animal;
};

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
};

Animal& Animal::operator=(Animal const &_Animal) {
    std::cout << "Animal - assignment - overload" << std::endl;
    if (this != &_Animal)
        type = _Animal.getType();
    return *this;
};

// void Animal::makeSound() const
// {
//     std::cout << "Animal : brrrrr..." << std::endl;
// }

std::string const& Animal::getType() const
{
    std::cout << "Animal ::getType" << std::endl;
    return type;
}
