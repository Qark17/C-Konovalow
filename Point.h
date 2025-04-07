#pragma once
class Point
{
private:
	double x;
	double y;
	double z;
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0);
	double getX() const;
	double getY() const;
	double getZ() const;
};

bool operator==(Point& point1, Point& point2);
bool operator!=(Point& point1, Point& point2);
Point getPoint();