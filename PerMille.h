#pragma once
#include "Piquet.h"
#include <string>
#include <iostream>
using namespace std;

class PerMille
{
private:
	/**
	* @brief уклон
	*/
	int perMille;
	/**
	* @brief начальный Пикет
	*/
	Piquet startPiq;
	/**
	* @brief конечный Пикет
	*/
	Piquet endPiq;
public:
	/**
	* @brief возвращает значение уклона
	* @return возвращает значение уклона
	*/
	int getPerMille() const;
	/**
	* @brief конструктор с параметрами
	* @param perMille - уклон
	* @param startPiq - начальный Пикет
	* @param endPiq - конечный Пикет
	*/
	PerMille(const int perMille, const Piquet& startPiq, const Piquet& endPiq);
	/**
	* @brief метод вывода Решателя
	*/
	string ToString() const;
	/**
	* @brief перенаправление объекта в поток вывода
	* @param os - поток вывода
	* @param s - решатель
	* @return результирующий поток вывода
	*/
	friend ostream& operator<<(ostream& os, const PerMille& s);
};