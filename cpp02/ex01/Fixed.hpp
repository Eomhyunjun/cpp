#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
    int fixedPointValue;
    static const int fractionalBitsNum = 8;

   public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(Fixed const &fiexd);
    ~Fixed();

    void setRawBits(int const raw);
    int getRawBits(void) const;
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed &operator=(Fixed const &rhs);
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif