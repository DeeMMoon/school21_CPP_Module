#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const int& value)
{
    this->value = value << number_of_fractional_bits;
}

Fixed::Fixed(const float& value)
{
    this->value = (int)(roundf(value * (1 << number_of_fractional_bits)));
}

Fixed::Fixed(const Fixed& obj)
{
    this->operator=(obj);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
    if (this == &obj)
        return (*this);
    value = obj.getRawBits();
    return (*this);

}
Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    value = raw;
}
float Fixed::toFloat( void ) const
{
    return ((float) this->value / (float)(1 << number_of_fractional_bits));
}

int Fixed::toInt( void ) const
{
    return ((int) (this->value >> number_of_fractional_bits));
}

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

Fixed Fixed::operator + (const Fixed &obj) const
{
    Fixed obj1;
    obj1.setRawBits(this->value + obj.value);
    return (obj1);
}

Fixed Fixed::operator - (const Fixed &obj) const
{
    Fixed obj1;
    obj1.setRawBits(this->value - obj.value);
    return (obj1);
}

Fixed Fixed::operator * (const Fixed &obj) const
{
    float tmp = this->toFloat() * obj.toFloat();
    Fixed obj1(tmp);
    return (obj1);
}

Fixed Fixed::operator / (const Fixed &obj) const
{
    float tmp = this->toFloat() / obj.toFloat();
    Fixed obj1(tmp);
    return (obj1);
}

bool Fixed::operator > (const Fixed &obj) const
{
    return (value > obj.getRawBits());
}

bool Fixed::operator < (const Fixed &obj) const
{
    return (value < obj.getRawBits());
}

bool Fixed::operator <= (const Fixed &obj) const
{
    return (value <= obj.getRawBits());
}

bool Fixed::operator >= (const Fixed &obj) const
{
    return (value >= obj.getRawBits());
}

bool Fixed::operator != (const Fixed &obj) const
{
    return (value != obj.getRawBits());
}

bool Fixed::operator == (const Fixed &obj) const
{
    return (value == obj.getRawBits());
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->value += 1;
    return (tmp);
}

Fixed& Fixed::operator++(void)
{
    this->value += 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->value -= 1;
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    this->value -= 1;
    return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a > b)
        return (a);
    return (b);
}