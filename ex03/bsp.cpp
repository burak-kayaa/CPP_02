#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed  x = point.getX();
	Fixed  y = point.getY();
	Fixed  x1 = a.getX();
	Fixed  y1 = a.getY();
	Fixed  x2 = b.getX();
	Fixed  y2 = b.getY();
	Fixed  x3 = c.getX();
	Fixed  y3 = c.getY();
	Fixed  a1 = ((x - x1) * (y2 - y1)) - ((x2 - x1) * (y - y1));
	Fixed  a2 = ((x - x2) * (y3 - y2)) - ((x3 - x2) * (y - y2));
	Fixed  a3 = ((x - x3) * (y1 - y3)) - ((x1 - x3) * (y - y3));
	return (a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0);
}
