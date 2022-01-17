#include "dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog - Default - constructor" << std::endl;
    attribute = new Brain();
};

Dog::Dog(std::string const &_type) : Animal(_type)
{
    std::cout << "Dog - type - constructor" << std::endl;
    attribute = new Brain();
};

Dog::Dog(Dog const &_Dog) : Animal()
{
    std::cout << "Dog - copy - constructor" << std::endl;
    *this = _Dog;
};

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete attribute;
    attribute = NULL;
};

Dog& Dog::operator=(Dog const &_Dog) {
    std::cout << "Dog - assignment - overload" << std::endl;
    if (this != &_Dog)
    {
        type = _Dog.getType();
        delete attribute; 
        attribute = new Brain(_Dog.getBrain());
    }
    return *this;
};

void Dog::makeSound() const
{
    std::cout << "Dog : brrrrr..." << std::endl;
}

Brain const& Dog::getBrain() const
{
    return *attribute;
}