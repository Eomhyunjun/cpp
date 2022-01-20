#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
    unsigned int n;
    T *arr;

    public:
    Array() : n(0), arr(NULL){};
    Array(unsigned int _n) : n(_n), arr(NULL)
    {
        if (_n > 0)
            arr = new T[_n];
        else if (_n <= 0)
            std::cout << "size must be bigger than 0" << std::endl;
    }
    Array(Array const& _Array)
    {
        *this = _Array;
    }
    ~Array()
    {
        if(arr)
        {
            delete[] arr;
            arr = NULL;
        }
    }
    Array& operator=(const Array& _Array)
    {
        if (this != &_Array)
        {
            std::cout << this->arr <<std::endl;
            if (_Array.n)
                arr = new T[_Array.n];
            for (unsigned int i = 0; i < _Array.n; i++)
                arr[i] = _Array.arr[i];
            n = _Array.n;
        }
        return (*this);
    }
    T& operator [] (unsigned int _n)
    {
        if (_n >= n)
            throw std::exception();
        return (arr[_n]);
    }
    unsigned int size()
    {
        return (n);
    }
};

#endif