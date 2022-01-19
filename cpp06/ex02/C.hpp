#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
	public:
		C();
		C(const C& _C);
		~C();
		C& operator = (const C& _C);
};

#endif
