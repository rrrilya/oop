#include"Header.h"

int main()
{
	system("chcp 1251 >> null");

	Vector vec(2);
	triad tr;
	Time tim;
	int x, y, z;

	cout << "������� ������:\n";
	cout << "������� ������ ����� ������: ";
	cin >> x;
	tr.setFirst(x);

	cout << "������� ������ ����� ������: ";
	cin >> y;
	tr.setSecond(y);

	cout << "������� ������ ����� ������: ";
	cin >> z;
	tr.setThird(z);

	cout << "������: ";
	tr.print();

	cout << "\n\n������� �����:\n";
	cin >> tim;
	cout << tim;	

	triad* pr = &tr;
	vec.fillVector(pr);

	pr = &tim;
	vec.fillVector(pr);
	
	cout << "\n\n������:\n";
	cout << vec;

	return 0;
}