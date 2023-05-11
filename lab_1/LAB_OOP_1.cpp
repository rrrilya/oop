#include <iostream>
using namespace std;

class LinearEquation { 
private:
    double A; 
    double B; 
public:
    LinearEquation(double a, double b) { 
        A = a;
        B = b;
    }
    double function(double x) { 
        return A*x + B;
    }
};

int main() {
    double a, b, x;
    cout << "Ââåäèòå êîýôôèöèåíòû ëèíåéíîãî óðàâíåíèÿ (A è B): ";
    cin >> a >> b;
    LinearEquation equation(a, b);
    cout << "Ââåäèòå çíà÷åíèå x: ";
    cin >> x;
    double result = equation.function(x); 
    cout << "Çíà÷åíèå ôóíêöèè äëÿ x = " << x << ": " << result << endl; 
    return 0;
}
