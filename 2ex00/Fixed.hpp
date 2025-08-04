#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &src);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _fp_value;
        static const int _fract_bits;
};

#endif
