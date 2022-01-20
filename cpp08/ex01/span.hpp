#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span
{
    unsigned int N;
    std::vector<int> vec;

    public:
        Span();
		Span(unsigned int N);
		Span(Span const& _Span);
		~Span();
		Span& operator=(const Span& _Span);

        void addNumber(unsigned int num);
        void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

        int shortestSpan(void);
        int longestSpan(void);
};

#endif