#include "Fixed.hpp"
#include "Point.hpp"

Fixed triangleArea(const Fixed &x1, const Fixed &y1,
                   const Fixed &x2, const Fixed &y2,
                   const Fixed &x3, const Fixed &y3)
{
    Fixed result = (x1 * (y2 - y3) +
                    x2 * (y3 - y1) +
                    x3 * (y1 - y2)) / Fixed(2);
    // Absolute value
    return (result < Fixed(0)) ? result * Fixed(-1) : result;
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    // Get all coordinates
    Fixed x1 = a.getFixedX(), y1 = a.getFixedY();
    Fixed x2 = b.getFixedX(), y2 = b.getFixedY();
    Fixed x3 = c.getFixedX(), y3 = c.getFixedY();
    Fixed x  = point.getFixedX(), y  = point.getFixedY();

    Fixed areaABC = triangleArea(x1, y1, x2, y2, x3, y3);
    Fixed areaPBC = triangleArea(x,  y,  x2, y2, x3, y3);
    Fixed areaAPC = triangleArea(x1, y1, x,  y,  x3, y3);
    Fixed areaABP = triangleArea(x1, y1, x2, y2, x,  y);

    // Point is inside if sum of sub-areas equals total area and none are zero
    return (areaPBC > Fixed(0) && areaAPC > Fixed(0) && areaABP > Fixed(0) &&
            (areaABC == areaPBC + areaAPC + areaABP));
}

