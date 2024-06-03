#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y) {}

Point::Point(Point const &p) : x(p.x), y(p.y) {}

Point &Point::operator=(Point const &p)
{
	if (this != &p)
	{
		this->x = p.getX();
		this->y = p.getY();
	}
	return *this;
}

Point::~Point() {}

Fixed Point::getX() const { return this->x; }

Fixed Point::getY() const { return this->y; }