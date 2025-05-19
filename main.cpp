#include <iostream>
#include <limits>
#include <locale>
#include "../PerMille/Piquet.h"
#include "../PerMille/PerMille.h"
using namespace std;
/**
* @brief считывает вещественное число
* @param message - сообщение
* @return вещественное число
*/
double getValue(string message);
/**
* @brief считывает вещественное число
* @param message - сообщение
* @return вещественное число
*/
int getInt(string message);
/**
* @brief составляет Пикет
* @param message - сообщение
* @return Пикет
*/
Piquet getPiquet(string message);
/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	int perMille = getInt("Введите значение уклона: ");
	Piquet startPiq = getPiquet("Введите начальный пикет");
	Piquet endPiq = getPiquet("Введите конечный пикет");
	PerMille dif = PerMille(perMille, startPiq, endPiq);
	cout << dif;
	return 0;
}

Piquet getPiquet(string message)
{
	cout << message << endl;
	int n = getInt("пикет:");
	double s = getValue("смещение:");
	int l = getValue("длину пикета");
	return Piquet(n, s, l);
}

double getValue(string message)
{
	cout << message << endl;
	double value = 0.0;
	cin >> value;
	if (cin.fail() || value < 0.0)
	{
		cout << "Вводить только положительные числа!" << endl;
		exit(1);
	}
	return value;
}
int getInt(string message)
{
	cout << message << endl;
	int value = 0;
	cin >> value;
	if (cin.fail())
	{
		cout << "Ошибка ввода!" << endl;
		exit(1);
	}
	return value;
}