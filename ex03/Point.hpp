#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"
class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(Point const &p);
		Point &operator=(Point const &p);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
