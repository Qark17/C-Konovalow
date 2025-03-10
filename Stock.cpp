#include "Stock.h"

Person::Person()
{}

Person::Person(const string & ln, const string & fn, const string & pn)
{
	lastName = "";
	firstName = "";
	patronymic = "";
}

void Person::Show()
{
	cout << "Введите фамилию: " << endl;
	cin >> lastName;
	cout << "Введите имя: " << endl;
	cin >> firstName;
	cout << lastName << " " << firstName << endl;
}
void Person::ShowFormal()
{
	
	cout << "Введите отчество: " << endl;
	cin >> patronymic;
	cout << "ФИО:" << lastName << " " << firstName << " " << patronymic << " " << endl;
}