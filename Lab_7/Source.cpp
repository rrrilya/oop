#include "List.h"
#include "Pair.h"

int main()
{
	system("chcp 1251 >> null");

	List<int> a, b, c;

	for (int i = 0; i < 5; i++)
	{
		a.push_back(i + 2);
	}

	for (int i = 0; i < 4; i++)
	{
		b.push_back(i-1);
	}

	cout << "лист а:\n";
	a.show_list();

	cout << "\лист b:\n";
	b.show_list();

	cout << "\nЋист с = a*b :\n";
	c = a * b;
	c.show_list();
	cout << "\n–азмер листа c: " << c() << endl << endl;
	cout << "\nприсвоить c[5] = 150" << endl; c[5] = 150;
	cout << "\nЋист с:\n";
	c.show_list();

	List<Pair> p;
	Pair x;

	for (int i = 0; i < 3; i++)
	{
		cout << "\n¬ведите пару:\n";
		cin >> x;
		p.push_back(x);
	}

	cout << "\n—писок p: ";
	p.show_list();

	return 0;
}
