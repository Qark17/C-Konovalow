#include "Stock.h"

Person::Person()
{
	cout << "Введите фамилию" << endl;
	cin >> lastName;
	cout << "Введите имя" << endl;
	cin >> firstName;
	cout << "Введите отчество" << endl;
	cin >> patronymic;
}

Person::Person(const string& ln, const string& fn, const string& pn)
{
	lastName = ln;
	firstName = fn;
	patronymic = pn;
}

void Person::Show()
{
	cout << lastName << endl;
	cout << firstName << endl;
}

void Person::ShowFormal()
{
	cout << "ФИО:" << endl;
	cout << lastName << endl
	cout << firstName << endl;
	cout << patronymic << endl;
}