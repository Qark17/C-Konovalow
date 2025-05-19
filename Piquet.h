#pragma once
#include <iostream>
#include <string>
using namespace std;

class Piquet
{
private:
	/**
	* @brief пикет
	*/
	int number;
	/**
	* @brief смещение
	*/
	double shift;
	/**
	* @brief длина пикета
	*/
	int lengh;
	/**
	* @brief показатель мерности пикетажа
	*/
	bool isStandard;
	/**
	* @brief определялет мерность пикетажа в зависимости от длины
	*/
	void checkStandard();
public:
	/**
	* @brief возвращает значение пикетажа
	* @return возвращает значение пикетажа
	*/
	int getNumber() const;
	/**
	* @brief возвращает значение смещения
	* @return возвращает значение смещения
	*/
	double getShift() const;
	/**
	* @brief возвращает мерность
	* @return возвращает мерность
	*/
	bool getIsStandard() const;
	/**
	* @brief возвращает значение длины
	* @return возвращает значение длины
	*/
	int getLengh() const;
	/**
	* @brief конструктор с параметрами
	* @param number - пикет
	* @param shift - смещение
	* @param lengh - длина
	*/
	Piquet(int number = 0, double shift = 0, int lengh = 100);
	/**
	* @brief метод вывода Пикета
	*/
	string ToString() const;
	/**
	* @brief перенаправление объекта в поток вывода
	* @param os - поток вывода
	* @param p - пикет
	* @return результирующий поток вывода
	*/
	friend ostream& operator<<(ostream& os, const Piquet& p);
	/**
	* @brief перенаправление объекта в поток ввода
	* @param is - поток ввода
	* @param p - пикет
	* @return результирующий поток ввода
	*/
	friend istream& operator>>(istream& is, const Piquet& p);
	/**
	* @brief проверка на равенство объектов
	* @param other - объект Пикета
	* @return равенство объектов
	*/
	bool operator==(const Piquet& other) const;
	/**
	* @brief проверка на неравенство объектов
	* @param other - объект Пикета
	* @return неравенство объектов
	*/
	bool operator!=(const Piquet& other) const;
	/**
	* @brief вычитание объектов
	* @param other - объект Пикета
	* @return первый объект меньше второго
	*/
	bool operator<=(const Piquet& other) const;
};