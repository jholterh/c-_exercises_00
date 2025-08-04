#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y)
    : _x(x), _y(y)
{}

Point::Point(const Point &copy)
    : _x(copy._x), _y(copy._y)
{}

Point::~Point() {}

Fixed Point::getFixedX() const { return _x; }
Fixed Point::getFixedY() const { return _y; }
