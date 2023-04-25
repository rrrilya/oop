#include <iostream>
using namespace std;

class LinearEquation { // ���������� ������ LinearEquation
private:
    double A; // ���� first - ����������� A
    double B; // ���� second - ����������� B
public:
    LinearEquation(double a, double b) { // ����������� ������ � ����� ����������� ���� double
        A = a;
        B = b;
    }
    double function(double x) { // ����� function() ��������� �������� ������� ��� ��������� x � ���������� ��� ��������
        return A*x + B;
    }
};

int main() {
    double a, b, x;
    cout << "������� ������������ ��������� ��������� (A � B): ";
    cin >> a >> b;
    LinearEquation equation(a, b); // �������� ������� ������ LinearEquation � ��������� ��������������
    cout << "������� �������� x: ";
    cin >> x;
    double result = equation.function(x); // ����� ������ function() ��� ���������� �������� ������� ��� ��������� x
    cout << "�������� ������� ��� x = " << x << ": " << result << endl; // ����� ����������
    return 0;
}