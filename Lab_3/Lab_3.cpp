﻿#include <iostream> // подключение стандартной библиотеки ввода-вывода
#include "Money.h" // подключение заголовочного файла

using namespace std; // использование пространства имен std

int main() { // точка входа в программу
    Money m1, m2; // создание двух объектов класса Money
    cout << "Введите первую сумму: "; // вывод на экран приглашения к вводу
    cin >> m1; // ввод первой суммы с клавиатуры
    cout << "Введите вторую сумму: "; // вывод на экран приглашения к вводу
    cin >> m2; // ввод второй суммы с клавиатуры

    Money sum = m1 + m2; // сложение двух сумм
    cout << "Сумма: " << sum << endl; // вывод результата на экран

    Money diff = m1 - m2; // вычитание двух сумм
    cout << "Разность: " << diff << endl; // вывод результата на экран

    return 0; // завершение программы
}