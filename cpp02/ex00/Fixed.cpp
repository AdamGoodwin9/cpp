#include "Fixed.hpp"
#include <iostream>

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