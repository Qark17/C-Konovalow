#pragma once
#include <String.h>
#include <iostream>
using namespace std;
class Person
{
private:
	string lastName;
	string firstName;
	string patronymic;
public:
	Person();
	Person(const string& ln, const string& fn, const string& pn);
	void Show(); //lastName + firstName
	void ShowFormal();
};