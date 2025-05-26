#pragma once
#include<stack>
#include <initializer_list>
using namespace std;
class Stack
{
private:
    /**
    * @brief указатель на массив элементов стека
    */
    int* data;
    /**
    * @brief размер стека
    */
    size_t lengh;
public:
    /**
    * @brief возвращает размер стека
    * @return размер стека
    */
    size_t getLengh() const;
    /**
    * @brief конструктор по умолчанию
    */
    Stack();
    /**
    * @brief конструктор копирования
    */
    Stack(const Stack& other);
    /**
    * @brief конструктор инициализации списком
    */
    Stack(initializer_list<int> List);
    /**
    * @brief деструктор
    */
    ~Stack();
    /**
    * @brief проверяет, пуст ли стек
    */
    void checkEmpty() const;
    /**
    * @brief добавляет новый элемент в стек
    * @param new_elmnt - новый элемент
    */
    void push(int new_elmnt);
    /**
    * @brief удаляет головной элемент стэка
    */
    void pop();
    /**
    * @brief считывает головной элемент стэка
    * @return головной элемент
    */
    int peek() const;
    /**
   * @brief 
   * @param new_elmnt - новый элемент
   */
    void cinStack(int lengh);
    /**
    * @brief печатает стэк
    */
    void coutStack() const;
    /**
    * @brief присваивание
    * @return другой стэк
    */
    Stack& operator=(const Stack& other);
    /**
    * @brief перенаправление объекта в поток ввода
    * @param elmnt - элемент стэка
    * @return результирующий поток ввода
    */
    Stack& operator<<(int elmnt);
    /**
    * @brief перенаправление объекта в поток ввода
    * @param elmnt - элемент стэка
    * @return результирующий поток ввода
    */
    Stack& operator>>(int& elmnt);
};