#pragma once // ������������� ������������� ��������� ������������� �����
#include <iostream> // ����������� ����������� ���������� �����-������

class Money { // ����������� ������ Money
private: // ����������� ������� private
    long rubles; // ���� ��� �������� ������
    int kopeks; // ���� ��� �������� ������

public: // ����������� ������� public
    Money(); // ����������� �� ���������
    Money(long r, int k); // ����������� � �����������
    Money(const Money& other); // ����������� �����������

    long getRubles() const; // ����� ��������� ������
    int getKopeks() const; // ����� ��������� ������
    void setRubles(long r); // ����� ��������� ������
    void setKopeks(int k); // ����� ��������� ������

    Money operator+ (const Money& other) const; // ���������� ��������� ��������
    Money operator- (const Money& other) const; // ���������� ��������� ���������

    friend std::ostream& operator<< (std::ostream& out, const Money& m); // ���������� ��������� ������ � �����
    friend std::istream& operator>> (std::istream& is, Money& m); // ���������� ��������� ����� �� ������
}