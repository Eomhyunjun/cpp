#include "Fixed.hpp"
#define EIGHT_BIT_SHIFT (1 << 8)

Fixed::Fixed() : fixedPointValue(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed(const int value) : fixedPointValue(value << fractionalBitsNum)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixedPointValue(std::roundf(value * EIGHT_BIT_SHIFT))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
};

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; };

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedPointValue = raw;
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
};

float Fixed::toFloat() const {
    return (float)fixedPointValue / EIGHT_BIT_SHIFT;
}

int Fixed::toInt() const {
    return fixedPointValue >> fractionalBitsNum;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointValue = rhs.fixedPointValue;
    return (*this);
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}