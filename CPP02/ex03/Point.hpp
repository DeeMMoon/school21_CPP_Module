#ifndef POINT_H
#define POINT_H

#include <ostream>
#include "Fixed.hpp"

class Point {
private:
    Fixed const	_x;
    Fixed const	_y;
public:

    Point();
    Point(float const x, float const y);
    Point(Fixed const& x, Fixed const& y);
    Point(Point const& obj);
    ~Point(void);

    Point&	operator=(Point const& obj);
    bool	operator==(Point const& obj) const;
    bool	operator!=(Point const& obj) const;

    Fixed const& getX(void) const;
    Fixed const& getY(void) const;
};
Point vector(Point const& start, Point const& end);
Fixed cross(Point const& vector1, Point const& vector2);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif