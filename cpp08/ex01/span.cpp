#include "span.hpp"

#include <algorithm>
#include <exception>

Span::Span() : N(0) {}

Span::Span(unsigned int _N) : N(_N) {}

Span::Span(Span const& _Span)
{
	*this = _Span;
}

Span::~Span(){}

Span& Span::operator=(const Span& _Span)
{
	if (this == &_Span)
		return (*this);
	vec = _Span.vec;
	N = _Span.N;
	return (*this);
}

void Span::addNumber(unsigned int num)
{
	if (vec.size() >= N)
		throw std::exception();
	vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ((vec.size() + std::distance(start, end)) > N)
		throw std::exception();
	int i = 1;
	while (start++ < end)
		vec.push_back(i++);
}

int Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();
	std::vector<int>::iterator vec_start = vec.begin();
	int shortest_span = INT_MAX;
	while (vec_start < (vec.end() - 1))
	{
		int span = *vec_start - *(vec_start + 1);
		if (span < 0)
			span *= -1;
		if (shortest_span > span)
			shortest_span = span;
		vec_start++;
	}
	return(shortest_span);
}

int Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw std::exception();

	std::vector<int>::iterator vec_start = vec.begin();
	int longest_span = 0;
	while (vec_start < (vec.end() - 1))
	{
		int span = *vec_start - *(vec_start + 1);
		if (span < 0)
			span *= -1;
		if (longest_span < span)
			longest_span = span;
		vec_start++;
	}
	return(longest_span);
}
