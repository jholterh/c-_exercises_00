#pragma once
#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &copy);
    ~Point();

    Fixed getFixedX() const;
    Fixed getFixedY() const;

private:
    Point &operator=(const Point &source);
    const Fixed _x;
    const Fixed _y;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
