#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int& value)
{
    this->value = value << number_of_fractional_bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float& value)
{
    this->value = (int)(roundf(value * (1 << number_of_fractional_bits)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(obj);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return (*this);
    value = obj.getRawBits();
    return (*this);

}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
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

std::ostream &operator<< (std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}