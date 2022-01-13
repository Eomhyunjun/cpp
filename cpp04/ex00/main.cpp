#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "-------correct case -------"<< std::endl;
    //default
    const Animal* meta = new Animal();
    //Animal type(dog or cat) constructor + default dog or cat
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    //getType + dog or cat
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    // cat or dog brrr
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    // Animal
    meta->makeSound();

    std::cout << std::endl << "-------wrong case -------"<< std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << wrongI->getType() << " " << std::endl;

    wrongMeta->makeSound(); //will output the cat sound!
    wrongI->makeSound();
}