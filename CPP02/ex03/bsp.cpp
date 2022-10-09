#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

    //Create vectors
    Point const	ap = vector(a, point);
    Point const	bp = vector(b, point);
    Point const	cp = vector(c, point);

    //Create triangle
    Point const	ab = vector(a, b);
    Point const	bc = vector(b, c);
    Point const	ca = vector(c, a);

    //Find search
    Fixed const abXap = cross(ab, ap);
    Fixed const bcXbp = cross(bc, bp);
    Fixed const caXcp = cross(ca, cp);

    if (point == a || point == b || point == c)
        return (false);

    if ((abXap < 0 && bcXbp < 0 && caXcp < 0)
        || (abXap > 0 && bcXbp > 0 && caXcp > 0)) {
        return true;
    }
    return false;
}

