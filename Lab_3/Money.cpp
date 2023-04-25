#include "Money.h" // подключение заголовочного файла

Money::Money() { // реализация конструктора по умолчанию
    rubles = 0;
    kopeks = 0;
}

Money::Money(long r, int k) { // реализация конструктора с параметрами
    rubles = r;
    kopeks = k;
}

Money::Money(const Money& other) { // реализация конструктора копирования
    rubles = other.rubles;
    kopeks = other.kopeks;
}

long Money::getRubles() const { // реализация метода получения рублей
    return rubles;
}

int Money::getKopeks() const { // реализация метода получения копеек
    return kopeks;
}

void Money::setRubles(long r) { // реализация метода установки рублей
    rubles = r;
}

void Money::setKopeks(int k) { // реализация метода установки копеек
    kopeks = k;
}

Money Money::operator+ (const Money& other) const { // реализация перегрузки оператора сложения
    long r = rubles + other.rubles;
    int k = kopeks + other.kopeks;
    if (k >= 100) {
        r += k / 100;
        k %= 100;
    }
    return Money(r, k);
}

Money Money::operator- (const Money& other) const { // реализация перегрузки оператора вычитания
    long r = rubles - other.rubles;
    int k = kopeks - other.kopeks;
    if (k < 0) {
        r -= 1;
        k += 100;
    }
    return Money(r, k);
}

std::ostream& operator<< (std::ostream& out, const Money& m) { // реализация перегрузки оператора вывода в поток
    out << m.rubles << "," << m.kopeks;
    return out;
}

std::istream& operator>> (std::istream& is, Money& m) { // реализация перегрузки оператора ввода из потока
    long r;
    int k;
    char comma;
    is >> r >> comma >> k;
    m.setRubles(r);
    m.setKopeks(k);
    return is;
}