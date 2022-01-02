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
    Fixed(Fixed const &rhs);
    ~Fixed();

    void setRawBits(int const raw);
    int getRawBits(void) const;

    float toFloat( void ) const;
    int toInt( void ) const;

    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static Fixed const &min(Fixed const &fixed1, Fixed const &fixed2);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static Fixed const &max(Fixed const &fixed1, Fixed const &fixed2);

    Fixed &operator=(Fixed const &rhs);
    //  전위연산자, 후위연산자
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    //  비교연산자
    bool operator==(Fixed &other) const;
    bool operator!=(Fixed &other) const;
    bool operator<(Fixed &other) const;
    bool operator>(Fixed &other) const;
    bool operator<=(Fixed &other) const;
    bool operator>=(Fixed &other) const;
    //  사칙연산
    Fixed operator+(Fixed const &arg) const;
    Fixed operator-(Fixed const &arg) const;
    Fixed operator*(Fixed const &arg) const;
    Fixed operator/(Fixed const &arg) const;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif