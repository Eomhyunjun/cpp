#include "Fixed.hpp"
#define EIGHT_BIT_SHIFT (1 << 8)

// 생성자, 소멸자
Fixed::Fixed() : fixedPointValue(0) {};

Fixed::Fixed(const int value) : fixedPointValue(value << fractionalBitsNum) {}

Fixed::Fixed(const float value) : fixedPointValue(std::roundf(value * EIGHT_BIT_SHIFT)) {}

Fixed::Fixed(Fixed const &rhs)
{
    *this = rhs;
}

Fixed::~Fixed() { };


// set,get, convert 함수
void Fixed::setRawBits(int const raw)
{
    fixedPointValue = raw;
}

int Fixed::getRawBits(void) const
{
    return fixedPointValue;
}

float Fixed::toFloat() const
{
    return (float)fixedPointValue / EIGHT_BIT_SHIFT;
}

int Fixed::toInt() const
{
    return fixedPointValue >> fractionalBitsNum;
}

// min max
Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
}

Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1.fixedPointValue > fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1.fixedPointValue < fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
}

Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1.fixedPointValue < fixed2.fixedPointValue)
        return fixed2;
    else
        return fixed1;
}

// 할당 연산자
std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed)
{
    ostream << fixed.toFloat();
    return ostream;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->fixedPointValue = rhs.fixedPointValue;
    return (*this);
}

//  전위연산자, 후위연산자
Fixed &Fixed::operator++() {
    ++fixedPointValue;
    return (*this);
}
Fixed &Fixed::operator--() {
    --fixedPointValue;
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++fixedPointValue;
    return tmp;
}
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --fixedPointValue;
    return tmp;
}
// 비교연산자

bool Fixed::operator==(Fixed &other) const
{
    return (getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(Fixed &other) const
{
    return (getRawBits() != other.getRawBits());
}
bool Fixed::operator<(Fixed &other) const
{
    return (getRawBits() < other.getRawBits());
}
bool Fixed::operator>(Fixed &other) const
{
    return (getRawBits() > other.getRawBits());
}
bool Fixed::operator<=(Fixed &other) const
{
    return (getRawBits() <= other.getRawBits());
}
bool Fixed::operator>=(Fixed &other) const
{
    return (getRawBits() >= other.getRawBits());
}

//  사칙연산
Fixed Fixed::operator+(Fixed const &arg) const
{
    return (Fixed(this->toFloat() + arg.toFloat()));
}

Fixed Fixed::operator-(Fixed const &arg) const
{
    return (Fixed(this->toFloat() - arg.toFloat()));
}

Fixed Fixed::operator*(Fixed const &arg) const
{
    return (Fixed(this->toFloat() * arg.toFloat()));
}

Fixed Fixed::operator/(Fixed const &arg) const
{
    if (arg.toInt() > 0)
        return (Fixed(this->toFloat() / arg.toFloat()));
    else
        throw std::runtime_error("0으로 나눌 수 없습니다.");
}