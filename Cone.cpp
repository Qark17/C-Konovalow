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
	double num1 = (pow(coneCentre.getX()-pointN.getX(),2) + pow(coneCentre.getY()-pointN.getY(),2)) / pow(radius,2) 
		- pow(coneCentre.getZ()-pointN.getZ()-high,2) / pow(high,2);
	double num2 = pow(coneCentre.getX()-pointN.getX(),2) + pow(coneCentre.getY()-pointN.getY(),2) 
		+ pow(coneCentre.getZ()-pointN.getZ(),2) - pow(radius,2);
	return (num1 - 0 <= std::numeric_limits<double>::epsilon() || num2 - 0 <= std::numeric_limits<double>::epsilon());
}