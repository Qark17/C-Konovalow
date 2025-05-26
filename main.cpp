#include "D:\VScode\Code on C++\Сredit codes\C++ Code 4\Stack\Stack\Stack.h"
#include <iostream>
using namespace std;
/**
* @brief считывает вещественное число
* @param message - сообщение
* @return вещественное число
*/
int getValueInt(string message);
/**
* @brief считывает вещественное число
* @param message - сообщение
* @return вещественное число
*/
size_t getValue(string message);
/**
* @brief множественный выбор
*/
enum Action
{
	push = 1,
	pop  = 2,
	peek = 3
};
/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	Stack normStack;
	size_t lengh = getValue("Введите размер стэка: ");
	normStack.cinStack(lengh);
	normStack.coutStack();
	cout << "Какое действие выполнить со стэком? Добавить элемент - введите " << Action::push << 
		", удалить элемент - " << Action::pop << ", посмотреть последний элемент - " << Action::peek;
	int choice = getValueInt("");
	switch ((enum Action)choice)
	{
	case Action::push:
	{
		int new_elmnt = getValueInt("Введите новый элемент: ");
		normStack.push(new_elmnt);
		break;
	}
	case Action::pop:
	{
		normStack.pop();
		break;
	}
	case Action::peek:
	{
		cout << "Головной элемент: " << normStack.peek();
		break;
	}
	default:
	{
		normStack.~Stack();
		exit(1);
	}
	}
	normStack.coutStack();
	return 0;
}

int getValueInt(string message)
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
size_t getValue(string message)
{
	cout << message << endl;
	int value = 0;
	cin >> value;
	if (cin.fail() || value <= 0)
	{
		cout << "Длина строго положительна!" << endl;
		exit(1);
	}
	return value;
}