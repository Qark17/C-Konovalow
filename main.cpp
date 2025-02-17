#include <iostream>
#include "Stock.h"
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Person person;
	person.Show();
	person.ShowFormal();
    return 0;
}