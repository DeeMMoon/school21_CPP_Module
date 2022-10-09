#include "Point.hpp"
#include <iostream>

Point::Point() : _x(0), _y(0){}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Fixed& x, const Fixed& y) : _x(x.toFloat()), _y(y.toFloat()){}
Point::Point(const Point &obj) : _x(obj.getX()), _y(obj.getY()){}
Point::~Point() {}

Fixed const& Point::getX( void ) const{return (_x);}
Fixed const& Point::getY( void ) const {return (_y);}

Point& Point::operator=(const Point &obj) {
    if (this != &obj) {
        *this = Point(obj);
    }
    return *this;
}

bool 	Point::operator == (Point const& obj) const
{
    if (_x == obj.getX() && _y == obj.getY())
        return (true);
    return (false);
}

bool	Point::operator!=(Point const& obj) const {
    if (_x != obj.getX() || _y != obj.getY())
        return (true);
    return (false);
}

Point	vector(Point const& start, Point const& end) {
    return Point(end.getX() - start.getX(), end.getY() - start.getY());
}

Fixed	cross(Point const& vector1, Point const& vector2) {
    return Fixed((vector1.getX() * vector2.getY()) - (vector2.getX() * vector1.getY()));
}
