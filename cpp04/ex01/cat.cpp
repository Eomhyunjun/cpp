#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat - Default - constructor" << std::endl;
    attribute = new Brain();
};

Cat::Cat(std::string const &_type) : Animal(_type)
{
    std::cout << "Cat - type - constructor" << std::endl;
    attribute = new Brain();
};

Cat::Cat(Cat const &_Cat) : Animal()
{
    std::cout << "Cat - copy - constructor" << std::endl;
    *this = _Cat;
};

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete attribute;
    attribute = NULL;
};

Cat& Cat::operator=(Cat const &_Cat) {
    std::cout << "Cat - assignment - overload" << std::endl;
    if (this != &_Cat)
    {
        type = _Cat.getType();
        delete attribute;
        attribute = new Brain(_Cat.getBrain());
    }
    return *this;
};

void Cat::makeSound() const
{
    std::cout << "Cat : brrrrr..." << std::endl;
}

Brain const& Cat::getBrain() const
{
    return *attribute;
}