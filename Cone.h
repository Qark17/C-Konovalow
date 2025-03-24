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
		Cone();
		Cone(double radius, double high);
		double totalSurfaceAreaCone(double radius, double high) const;
		void pointOnCone(Point& coneCentre, Point& pointN, double radius, double high) const;
	};
}
bool check(double num1, double num2);