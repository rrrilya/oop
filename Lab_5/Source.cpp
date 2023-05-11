#include"Header.h"

int main()
{
	system("chcp 1251 >> null");

	Vector vec(2);
	triad tr;
	Time tim;
	int x, y, z;

	cout << "¬ведите триаду:\n";
	cout << "¬ведите первое число триады: ";
	cin >> x;
	tr.setFirst(x);

	cout << "¬ведите второе число триады: ";
	cin >> y;
	tr.setSecond(y);

	cout << "¬ведите третье число триады: ";
	cin >> z;
	tr.setThird(z);

	cout << "“риада: ";
	tr.print();

	cout << "\n\n¬ведите врем€:\n";
	cin >> tim;
	cout << tim;	

	triad* pr = &tr;
	vec.fillVector(pr);

	pr = &tim;
	vec.fillVector(pr);
	
	cout << "\n\n¬ектор:\n";
	cout << vec;

	return 0;
}
