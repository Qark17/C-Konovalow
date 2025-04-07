#include<iostream>
#include<string>
#include"Point.h"
#include"Cone.h"
#include<windows.h>

using namespace std;

double getCoordinate(std::string message);

int main()
{
	//setlocale(LC_ALL, "RU");
	double radius = getCoordinate("Введите радиус основания конуса: ");
	double high = getCoordinate("Введите высоту конуса: ");

	cout << "Введите координаты центра основания конуса:" << endl;
	Point coneCentre = getPoint();

	CONE::Cone cone(coneCentre, radius, high);
	cout << "Площадь полной поверхности конуса = " << cone.totalSurfaceAreaCone() << endl;
	cout << "Введите координаты новой точки для проверки:" << endl;
	Point pointN = getPoint();

	if (cone.pointOnCone(pointN))
	{
		cout << "Точка лежит на поверхности конуса";
	}
	else
	{
		cout << "Точка не лежит на поверхности конуса";
	}
	return 0;
}

double getCoordinate(std::string message)
{
	cout << message << endl;
	double coordinate = 0.0;
	if (!(cin >> coordinate) || coordinate - 0 <= std::numeric_limits<double>::epsilon())
	{
		cerr << "Вводить только положительные числа!" << endl;
		exit(1);
	}
	return coordinate;
}