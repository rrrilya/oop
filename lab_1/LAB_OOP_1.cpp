#include <iostream>
using namespace std;

class LinearEquation { // объ€вление класса LinearEquation
private:
    double A; // поле first - коэффициент A
    double B; // поле second - коэффициент B
public:
    LinearEquation(double a, double b) { // конструктор класса с двум€ аргументами типа double
        A = a;
        B = b;
    }
    double function(double x) { // метод function() вычисл€ет значение функции дл€ заданного x и возвращает его значение
        return A*x + B;
    }
};

int main() {
    double a, b, x;
    cout << "¬ведите коэффициенты линейного уравнени€ (A и B): ";
    cin >> a >> b;
    LinearEquation equation(a, b); // создание объекта класса LinearEquation с заданными коэффициентами
    cout << "¬ведите значение x: ";
    cin >> x;
    double result = equation.function(x); // вызов метода function() дл€ вычислени€ значени€ функции дл€ заданного x
    cout << "«начение функции дл€ x = " << x << ": " << result << endl; // вывод результата
    return 0;
}