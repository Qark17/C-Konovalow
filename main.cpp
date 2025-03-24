#include<iostream>
#include<string>
#include"Point.h"
#include"Cone.h"

using namespace std;

double getCoordinate(std::string message);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double radius;
	double high;
	auto x = getCoordinate("¬ведите координату центра конуса x");
	auto y = getCoordinate("¬ведите координату центра конуса y");
	auto z = getCoordinate("¬ведите координату центра конуса z");
	Point coneCentre(x, y, z);

	cout << "¬ведите радиус основани¤ конуса: ";
	cin >> radius;
	cout << "¬ведите высоту конуса: ";
	cin >> high;

	CONE::Cone cone(radius, high);
	cout << "ѕлощадь полной поверхности конуса = " << cone.totalSurfaceAreaCone(radius, high) << endl;

	auto xN = getCoordinate("¬ведите координату x");
	auto yN = getCoordinate("¬ведите координату y");
	auto zN = getCoordinate("¬ведите координату z");
	Point pointN(xN, yN, zN);

	cone.pointOnCone(coneCentre, pointN, radius, high);
	return 0;
}

double getCoordinate(std::string message)
{
	cout << message << endl;
	double coordinate = 0.0;
	cin >> coordinate;
	return coordinate;
}