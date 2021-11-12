#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    rawBits = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed::Fixed(const int fixed)
{
    std::cout << "Int constructor called\n";
    rawBits = fixed << fractionalBits;
}

Fixed::Fixed(const float fixed)
{
    std::cout << "Float constructor called\n";
    rawBits = roundf(fixed * (1 << fractionalBits));
}

Fixed& Fixed::operator= (const Fixed& o)
{
    std::cout << "Assignation operator called\n";
    rawBits = o.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return rawBits;
}

void Fixed::setRawBits(int const raw)
{
    rawBits = raw;
}

int Fixed::toInt() const
{
	return rawBits >> fractionalBits;
}

float Fixed::toFloat() const
{
	return float(rawBits) / (1 << fractionalBits);
}

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
