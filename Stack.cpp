#include "Stack.h"
#include <iostream>
#include <random>
#include <sstream>
using namespace std;
size_t Stack::getLengh() const
{
    return lengh;
}
Stack::Stack()
{
	data = nullptr;
	lengh = 0;
}
Stack::Stack(const Stack& other)
{
    lengh = other.lengh;
    data = new int[lengh];
    for (size_t s = 0; s < lengh; ++s)
        data[s] = other.data[s];
}
Stack::Stack(initializer_list<int> List)
{
    lengh = List.size();
    data = new int[lengh];
    for (size_t s = 0; int elmnt: List)
        data[s++] = elmnt;
}
Stack::~Stack()
{
    delete[] data;
}

void Stack::checkEmpty() const
{
    if (lengh == 0)
    {
        cerr << "В стэке ничего нет...";
        exit(1);
    }
}
void Stack::push(int new_elmnt)
{
    checkEmpty();
    int* new_data = new int[lengh + 1];
    for (size_t s = 0; s < lengh; ++s)
        new_data[s] = data[s];
    delete[] data;
    data = new_data;
    data[lengh++] = new_elmnt;
}
void Stack::pop()
{
    checkEmpty();
    int* new_data = new int[lengh - 1];
    for (size_t s = 0; s < lengh-1; ++s)
        new_data[s] = data[s];
    delete[] data;
    data = new_data;
    --lengh;
    if (lengh == 0)
        cout << "Теперь в стэке ничего нет." << endl;

}
int Stack::peek() const
{
    checkEmpty();
    return data[lengh - 1];
}

void Stack::cinStack(int lengh)
{
    data = new int[lengh];
    this->lengh = lengh;
    checkEmpty();
    for (size_t s = 0; s < lengh; ++s)
    {
        cout << "Введите " << s + 1 << "-й элемент: ";
        cin >> data[s];
    }
}
void Stack::coutStack() const
{
    checkEmpty();
    cout << "[";
    for (size_t s = 0; s < lengh; ++s)
    {
        cout << data[s];
        if (s != lengh - 1) cout << " ";
    }
    cout << "]" << endl;
}

Stack& Stack::operator=(const Stack& other)
{
    if (this != &other)
    {
        delete[] data;
        lengh = other.lengh;
        data = new int[lengh];
        for (size_t s = 0; s < lengh; ++s)
            data[s] = other.data[s];
    }
    return *this;
}
Stack& Stack::operator<<(int elmnt)
{
    push(elmnt);
    return *this;
}
Stack& Stack::operator>>(int& elmnt)
{
    elmnt = data[lengh - 1];
    return *this;
}