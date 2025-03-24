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

CONE::Cone::Cone()
{
	radius = high = 1;
}
CONE::Cone::Cone(double radius, double high): radius{ radius }, high{ high }
{
	if ((radius - 0 < std::numeric_limits<double>::epsilon()) || (high - 0 < std::numeric_limits<double>::epsilon()))
	{
		std::cerr << "И радиус, и высота должны быть строго положительными!" << std::endl;
		std::exit(1);
	}
	radius = high = 1;
}

double CONE::Cone::totalSurfaceAreaCone(double radius, double high) const
{
	return M_PI * radius * (sqrt(radius * radius + high * high) + radius);
}

void CONE::Cone::pointOnCone(Point & coneCentre, Point & pointN, double radius, double high) const
{
	double num1 = sqrt(pow((coneCentre.getX() - pointN.getX()), 2) + pow((coneCentre.getY() - pointN.getY()), 2));
	double num2 = radius * (coneCentre.getZ() - pointN.getZ()) / high;
	if (num1 - num2 <= std::numeric_limits<double>::epsilon())
	{
		std::cout << "Точка лежит на поверхности конуса" << std::endl;
	}
	else
	{
		std::cout << "Точка не лежит на поверхности конуса" << std::endl;
	}
}

bool check(double num1, double num2)
{
	return num1 - num2 <= std::numeric_limits<double>::epsilon();
}
