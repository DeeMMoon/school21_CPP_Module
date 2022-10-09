#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

void	printTest(Point const a, Point const b, Point const c, Point const point) {
    bool result = bsp(a, b, c, point);
    if (result == 1)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}

int	main( int argc, char const *argv[] )
{
        std::cout << "False tests:" << std::endl;

        Point const a(0.0f, 0.0f);
        Point const b(0.0f, 3.0f);
        Point const c(4.0f, 3.0f);
        Point const p(100.0f, 200.0f);

        printTest(a, b, c, p);
        printTest(a, c, b, p);
        printTest(b, a, c, p);
        printTest(b, c, a, p);
        printTest(c, a, b, p);
        printTest(c, b, a, p);

        Point const a2(0.1f, 0.2f);
        Point const b2(-22.0f, 3.1f);
        Point const c2(4.0f, 3.0f);

        printTest(a2, b2, c2, a2);
        printTest(a2, b2, c2, b2);
        printTest(a2, b2, c2, c2);

        Point const a3(0.0f, 0.0f);
        Point const b3(0.0f, 3.0f);
        Point const c3(3.0f, 3.0f);
        Point const p1(0.0f, 2.0f);
        Point const p2(3.0f, 2.0f);
        Point const p3(1.5f, 1.5f);

        printTest(a3, b3, c3, p1);
        printTest(a3, b3, c3, p2);
        printTest(a3, b3, c3, p3);

        std::cout << "True tests:" << std::endl;

        Point const a_(0.0f, 0.0f);
        Point const b_(0.0f, 3.0f);
        Point const c_(4.0f, 3.0f);
        Point const p_(1.0f, 2.0f);
        printTest(a_, b_, c_, p_);
        printTest(a_, c_, b_, p_);
        printTest(b_, a_, c_, p_);
        printTest(b_, c_, a_, p_);
        printTest(c_, a_, b_, p_);
        printTest(c_, b_, a_, p_);

        Point const a2_(-1234.4321f, -42.0f);
        Point const b2_(500.2f, -5.0f);
        Point const c2_(4.2f, 6.9f);
        Point const p2_(0.1f, 0.0f);
        printTest(a2_, b2_, c2_, p2_);
    return (0);
}
