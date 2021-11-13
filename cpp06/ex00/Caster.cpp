#include "Caster.hpp"
#include <cmath>
#include <climits>

Caster::Caster() {}

Caster::Caster(std::string s) : s(s) {}

Caster::Caster(const Caster& c)
{
    *this = c;
}

Caster::~Caster() {}

Caster& Caster::operator=(const Caster& c)
{
    s = c.s;

    return *this;
}

int Caster::asInt()
{
    long l = strtod(s.c_str(), 0);

    if (l < INT_MIN || l > INT_MAX) throw std::runtime_error("impossible");

    return l;
}

Caster::operator char()
{
    //if (s.length() == 1 && s[0] >= 32 && s[0] <= 126) return s[0];

    int c = asInt();
    if (c < 32 || c > 126)
			throw std::runtime_error("Non displayable");
    return c;
}

Caster::operator int()
{
    return asInt();
}

Caster::operator float()
{
    return strtof(s.c_str(), 0);
}

Caster::operator double()
{
    return strtod(s.c_str(), 0);
}