#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

#define NUM 10

int main()
{
    Animal *animal[NUM];

    for(int i = 0; i < NUM / 2; i++)
    {
        animal[i] = new Dog("Dog");
    }
    for(int i = NUM / 2; i < NUM; i++)
    {
        animal[i] = new Cat("Cat");
    }

    std::cout << "------------ create end ------------" << std::endl;

    // 기초클래스의 포인터로 가리켜도 제대로 동작하는지 확인.
    for (int i = 0; i < NUM; i++) {
        animal[i]->makeSound();
    }

    std::cout << "------------ delete start ------------" << std::endl;

    for (int i = 0; i < NUM; i++) {
        delete animal[i];
    }
}