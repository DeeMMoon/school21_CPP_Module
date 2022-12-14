#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int number_of_fractional_bits = 8;
public:
    Fixed();
    Fixed(const int& value);
    Fixed(const float& value);
    Fixed(const Fixed& obj);

    Fixed& operator = (const Fixed &obj);

    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed operator + (const Fixed &obj) const;
    Fixed operator - (const Fixed &obj) const;
    Fixed operator * (const Fixed &obj) const;
    Fixed operator / (const Fixed &obj) const;

    bool operator < (const Fixed &obj) const;
    bool operator > (const Fixed &obj) const;
    bool operator == (const Fixed &obj) const;
    bool operator != (const Fixed &obj) const;
    bool operator <= (const Fixed &obj) const;
    bool operator >= (const Fixed &obj) const;

    Fixed& operator ++( void ); // prefix
    Fixed& operator --( void ); //prefix
    Fixed operator ++( int ); //postfix
    Fixed operator --( int ); //postfix

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<< (std::ostream &out, const Fixed &obj);

#endif
