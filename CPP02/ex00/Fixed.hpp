#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value;
    static const int number_of_fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator = (const Fixed &obj);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif