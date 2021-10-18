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

    Fixed& operator=(const Fixed&);

    bool operator>(Fixed const&) const;
    bool operator<(Fixed const&) const;
    bool operator>=(Fixed const&) const;
    bool operator<=(Fixed const&) const;
    bool operator==(Fixed const&) const;
    bool operator!=(Fixed const&) const;

    Fixed operator+(Fixed const&) const;
    Fixed operator-(Fixed const&) const;
    Fixed operator*(Fixed const&) const;
    Fixed operator/(Fixed const&) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed&, Fixed&);
	static Fixed const& min(Fixed const&, Fixed const&);

	static Fixed& max(Fixed&, Fixed&);
	static Fixed const& max(Fixed const&, Fixed const&);

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif