#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &src);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // Friend operator<< overload
    friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

private:
    int _fp_value;
    static const int _fract_bits;
};

#endif

