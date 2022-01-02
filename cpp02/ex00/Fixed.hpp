#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    int fixedPointValue;
    static const int fractionalBitsNum = 8;

   public:
    Fixed();
    Fixed(Fixed const &fiexd);
    ~Fixed();
    void setRawBits(int const raw);
    int getRawBits(void) const;
    Fixed &operator=(Fixed const &rhs);
};

#endif