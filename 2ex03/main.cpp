#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);

    // Test points
    Point p1(1, 1);   // inside
    Point p2(0, 0);   // vertex
    Point p3(2, 0);   // edge AB
    Point p4(2, 2);   // outside
    Point p5(0, 2);   // edge AC
    Point p6(2, 1);   // inside

    std::cout << bsp(a, b, c, p1) << std::endl; // Should print 1 (true)
    std::cout << bsp(a, b, c, p2) << std::endl; // Should print 0 (false)
    std::cout << bsp(a, b, c, p3) << std::endl; // Should print 0 (false)
    std::cout << bsp(a, b, c, p4) << std::endl; // Should print 0 (false)
    std::cout << bsp(a, b, c, p5) << std::endl; // Should print 0 (false)
    std::cout << bsp(a, b, c, p6) << std::endl; // Should print 1 (true)
    return 0;
}