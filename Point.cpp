#include <limits>
#include <cmath>
#include "Point.h"

Point::Point(double x, double y, double z) : x{ x }, y{ y }, z{ z }
{
	x = y = z = 0.0;
}

double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}
double Point::getZ() const
{
	return z;
}

bool operator==(Point& point1, Point& point2)
{
	return std::abs(point1.getX() - point2.getX()) <= std::numeric_limits<double>::epsilon()
		&& std::abs(point1.getY() - point2.getY()) <= std::numeric_limits<double>::epsilon()
		&& std::abs(point1.getZ() - point2.getZ()) <= std::numeric_limits<double>::epsilon();
}
bool operator!=(Point& point1, Point& point2)
{
	return !(point1 == point2);
}