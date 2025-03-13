#include "Stock.h"

Person::Person()
{
	lastName = "";
	firstName = "";
	patronymic = "";
}

Person::Person(const string & ln, const string& fn, const string& pn)
{
	lastName = ln;
	firstName = fn;
	patronymic = pn;
}

void Person::Show()
{
	cout << Person::lastName << " " << Person::firstName << endl;
}
void Person::ShowFormal()
{
	cout << Person::lastName << " " << Person::firstName << " " << Person::patronymic << " " << endl;
}