#pragma once
#include"Point.h"
#include <iostream>

namespace CONE
{
	class Cone
	{
	private:
		Point coneCentre;
		double high;
		double radius;
	public:
		double getHigh() const;
		double getRadius() const;
		Cone(const Point& coneCentre, const double radius, const double high);
		double totalSurfaceAreaCone() const;
		bool pointOnCone(const Point& pointN) const;
	};
}