#include "Money.h" // ����������� ������������� �����

Money::Money() { // ���������� ������������ �� ���������
    rubles = 0;
    kopeks = 0;
}

Money::Money(long r, int k) { // ���������� ������������ � �����������
    rubles = r;
    kopeks = k;
}

Money::Money(const Money& other) { // ���������� ������������ �����������
    rubles = other.rubles;
    kopeks = other.kopeks;
}

long Money::getRubles() const { // ���������� ������ ��������� ������
    return rubles;
}

int Money::getKopeks() const { // ���������� ������ ��������� ������
    return kopeks;
}

void Money::setRubles(long r) { // ���������� ������ ��������� ������
    rubles = r;
}

void Money::setKopeks(int k) { // ���������� ������ ��������� ������
    kopeks = k;
}

Money Money::operator+ (const Money& other) const { // ���������� ���������� ��������� ��������
    long r = rubles + other.rubles;
    int k = kopeks + other.kopeks;
    if (k >= 100) {
        r += k / 100;
        k %= 100;
    }
    return Money(r, k);
}

Money Money::operator- (const Money& other) const { // ���������� ���������� ��������� ���������
    long r = rubles - other.rubles;
    int k = kopeks - other.kopeks;
    if (k < 0) {
        r -= 1;
        k += 100;
    }
    return Money(r, k);
}

std::ostream& operator<< (std::ostream& out, const Money& m) { // ���������� ���������� ��������� ������ � �����
    out << m.rubles << "," << m.kopeks;
    return out;
}

std::istream& operator>> (std::istream& is, Money& m) { // ���������� ���������� ��������� ����� �� ������
    long r;
    int k;
    char comma;
    is >> r >> comma >> k;
    m.setRubles(r);
    m.setKopeks(k);
    return is;
}