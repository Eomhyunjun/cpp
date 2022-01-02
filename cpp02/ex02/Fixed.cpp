#include "Fixed.hpp"
#define EIGHT_BIT_SHIFT (1 << 8)

// 생성자, 소멸자
Fixed::Fixed() : fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value) : fixedPointValue(value << fractionalBitsNum)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixedPointValue(std::roundf(value * EIGHT_BIT_SHIFT))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
};

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
}

// set,get, convert 함수
int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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
Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointValue = rhs.fixedPointValue;
    return (*this);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
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

bool Fixed::operator==(Fixed &other) const {
    return (getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(Fixed &other) const {
    return (getRawBits() != other.getRawBits());
}
bool Fixed::operator<(Fixed &other) const {
    return (getRawBits() < other.getRawBits());
}
bool Fixed::operator>(Fixed &other) const {
    return (getRawBits() > other.getRawBits());
}
bool Fixed::operator<=(Fixed &other) const {
    return (getRawBits() <= other.getRawBits());
}
bool Fixed::operator>=(Fixed &other) const {
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