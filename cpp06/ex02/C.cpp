#include "C.hpp"

C::C()
	{}

C::C(const C& _C)
{
	*this = _C;
}

C::~C()
	{}

C& C::operator = (const C& _C)
{
	if (this == &_C)
		return (*this);
	return (*this);
}