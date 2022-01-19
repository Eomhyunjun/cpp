#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
	public:
		A();
		A(const A& _A);
		~A();
		A& operator = (const A& _A);
};

#endif
