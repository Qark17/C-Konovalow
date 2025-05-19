#include "Piquet.h"
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
using namespace std;

void Piquet::checkStandard()
{
	isStandard = (lengh == 100);
}

int Piquet::getNumber() const
{
	return number;
}
double Piquet::getShift() const
{
	return shift;
}
bool Piquet::getIsStandard() const
{
	return isStandard;
}
int Piquet::getLengh() const
{
	return lengh;
}

Piquet::Piquet(int number, double shift, int lengh) :number(number), shift(shift), lengh(lengh)
{
	checkStandard();
	if (lengh < 0 || shift - 0.0 < numeric_limits<double>::epsilon() || shift - 1.0 >= numeric_limits<double>::epsilon())
	{
		cerr << "Некоректность ввода!";
		exit(1);
	}
}

string Piquet::ToString() const
{
	Piquet Modificant(Piquet & other);
	string a = to_string(number);
	if (number < 0)
	{
		a = ("0" + to_string(abs(number)));
	}
	return "ПК " + a + "+" + to_string(shift) + (isStandard ? "[Мерный]" : "[Немерный]");
}

ostream& operator<<(ostream& os, const Piquet& p)
{
	os << p.number << p.shift << p.lengh;
	return os;
}
istream& operator>>(istream& is, const Piquet& p)
{
	is >> p.number;
	is >> p.shift;
	is >> p.lengh;
	return is;
}
bool Piquet::operator==(const Piquet& other) const
{
	return number == other.number && abs(shift - other.shift) <= numeric_limits<double>::epsilon();
}
bool Piquet::operator!=(const Piquet& other) const
{
	return number != other.number || abs(shift - other.shift) > numeric_limits<double>::epsilon();
}
bool Piquet::operator<=(const Piquet& other) const
{
	double piq1 = number + shift;
	double piq2 = other.number + other.shift;
	return piq1 <= piq2;
}