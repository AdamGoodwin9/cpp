#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
	Fixed(const Fixed&);

    Fixed& operator= (const Fixed&);

    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif