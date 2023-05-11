#include <iostream>

using namespace std;

class LinearEquation { // объявление класса LinearEquation
private:
    double A; // поле first - коэффициент A
    double B; // поле second - коэффициент B
public:
    LinearEquation(double a, double b) { // конструктор класса с двумя аргументами типа double
        A = a;
        B = b;
    }
    double root() { // метод root() вычисляет корень линейного уравнения и возвращает его значение
        if (A == 0) { // проверка неравенства коэффициента A нулю
            cout << "Ошибка: коэффициент A равен нулю" << endl; // вывод сообщения об ошибке
            return -1; // возвращаем -1, так как корня нет
        }
        else {
            return -B / A; // вычисляем корень линейного уравнения и возвращаем его значение
        }
    }
};

int main() {
    double a, b;
    cout << "Введите коэффициенты линейного уравнения (A и B): ";
    cin >> a >> b;
    LinearEquation equation(a, b); // создание объекта класса LinearEquation с заданными коэффициентами
    double result = equation.root(); // вызов метода root() для вычисления корня линейного уравнения
    if (result != -1) { // если метод root() вернул значение отличное от -1, то выводим результат
        cout << "Корень линейного уравнения: " << result << endl;
    }
    return 0;
}

