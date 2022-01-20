#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int length, void (*func)(const T&))
{
    for (int i = 0; i < length; i++)
        (*func)(array[i]);
}

template <typename T>
void printIter(T const &element)
{
    std::cout << element << std::endl;
}

#endif