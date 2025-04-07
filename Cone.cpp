#define _USE_MATH_DEFINES
#include <limits>
#include "Cone.h"
#include<cmath>
#include<iostream>

using namespace CONE;

double CONE::Cone::getHigh() const
{
	return high;
}
double CONE::Cone::getRadius() const
{
	return radius;
}

CONE::Cone::Cone(const Point& coneCentre, const double radius, const double high): coneCentre{coneCentre},radius {radius}, high{high}
{
	if ((radius - 0 <= std::numeric_limits<double>::epsilon()) || (high - 0 <= std::numeric_limits<double>::epsilon()))
	{
		std::cout << "И радиус, и высота должны быть строго положительными!" << std::endl;
	}
}

double CONE::Cone::totalSurfaceAreaCone() const
{
	return M_PI * radius * (sqrt(radius * radius + high * high) + radius);
}

bool CONE::Cone::pointOnCone(const Point& pointN) const
{
	double num1 = sqrt(pow((coneCentre.getX() - pointN.getX()), 2) + pow((coneCentre.getY() - pointN.getY()), 2));
	double num2 = radius * (coneCentre.getZ() - pointN.getZ()) / high;
	if (num1 - num2 <= std::numeric_limits<double>::epsilon())
	{
		return false;
	}
	else
	{
		return true;
	}
}