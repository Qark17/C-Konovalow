#include "Stock.h"

Person::Person()
{
	cout << "������� �������" << endl;
	cin >> lastName;
	cout << "������� ���" << endl;
	cin >> firstName;
	cout << "������� ��������" << endl;
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
	cout << "���:" << endl;
	cout << lastName << endl
	cout << firstName << endl;
	cout << patronymic << endl;
}