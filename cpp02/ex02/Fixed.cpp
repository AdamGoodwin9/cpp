#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    rawBits = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed::Fixed(const int fixed)
{
    rawBits = fixed << fractionalBits;
}

Fixed::Fixed(const float fixed)
{
    rawBits = roundf(fixed * (1 << fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& o)
{
    rawBits = o.getRawBits();
    return *this;
}


bool Fixed::operator>(Fixed const& f) const
{
    return rawBits > f.rawBits;
}

bool Fixed::operator<(Fixed const& f) const
{
    return rawBits < f.rawBits;
}

bool Fixed::operator>=(Fixed const& f) const
{
    return rawBits >= f.rawBits;
}

bool Fixed::operator<=(Fixed const& f) const
{
    return rawBits <= f.rawBits;
}

bool Fixed::operator==(Fixed const& f) const
{
    return rawBits == f.rawBits;
}

bool Fixed::operator!=(Fixed const& f) const
{
    return rawBits != f.rawBits;
}


Fixed Fixed::operator+(Fixed const& f) const
{
    return toFloat() + f.toFloat();
}

Fixed Fixed::operator-(Fixed const& f) const
{
    return toFloat() - f.toFloat();
}

Fixed Fixed::operator*(Fixed const& f) const
{
    return toFloat() * f.toFloat();
}

Fixed Fixed::operator/(Fixed const& f) const
{
    return toFloat() / f.toFloat();
}


Fixed& Fixed::operator++()
{
    ++rawBits;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed ret = *this;
    rawBits++;
    return ret;
}

Fixed& Fixed::operator--()
{
    --rawBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed ret = *this;
    rawBits--;
    return ret;
}


Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    return f1 < f2 ? f1 : f2;
}

Fixed const& Fixed::min(Fixed const& f1, Fixed const& f2)
{
    return f1 < f2 ? f1 : f2;
}


Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    return f1 > f2 ? f1 : f2;
}

Fixed const& Fixed::max(Fixed const& f1, Fixed const& f2)
{
    return f1 > f2 ? f1 : f2;
}


int Fixed::Fixed::getRawBits() const
{
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
