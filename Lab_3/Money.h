#pragma once // предотвращает множественные включения заголовочного файла
#include <iostream> // подключение стандартной библиотеки ввода-вывода

class Money { // определение класса Money
private: // модификатор доступа private
    long rubles; // поле для хранения рублей
    int kopeks; // поле для хранения копеек

public: // модификатор доступа public
    Money(); // конструктор по умолчанию
    Money(long r, int k); // конструктор с параметрами
    Money(const Money& other); // конструктор копирования

    long getRubles() const; // метод получения рублей
    int getKopeks() const; // метод получения копеек
    void setRubles(long r); // метод установки рублей
    void setKopeks(int k); // метод установки копеек

    Money operator+ (const Money& other) const; // перегрузка оператора сложения
    Money operator- (const Money& other) const; // перегрузка оператора вычитания

    friend std::ostream& operator<< (std::ostream& out, const Money& m); // перегрузка оператора вывода в поток
    friend std::istream& operator>> (std::istream& is, Money& m); // перегрузка оператора ввода из потока
}