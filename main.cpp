#include <iostream>
#include <locale>
#include "Stock.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Person person("Иванов", "Иван", "Иванович");
	person.Show();
	person.ShowFormal();
    return 0;
}