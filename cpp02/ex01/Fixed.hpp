#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
	Fixed(const Fixed&);

    Fixed(const int fixed);
	Fixed(const float fixed);

    Fixed& operator= (const Fixed&);

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif