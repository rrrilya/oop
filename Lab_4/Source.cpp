#include"Header.h"

int main()
{
	system("chcp 1251 >> null");
	int x, y, z;
	cout << "������� ��� ����� �����: ";
	cin >> x >> y >> z;
	triad tr1(x, y, z);
	cout << "\n������ ������: ";
	tr1.print();

	cout << "\n\n������� ��� ����� �����: ";
	cin >> x >> y >> z;
	triad tr2(x, y, z);
	cout << "\n������ ������: ";
	tr2.print();

	if (tr1 == tr2)
		cout << "\n������ �����\n";
	else
		cout << "\n������ �� �����\n";

	Time t1;
	cin >> t1;
	cout << "\n�������� �����: " << t1;

	Time t2;
	cout << "\n\n������� ����� �����\n";
	cin >> t2;
	cout << "\n�������� �����: " << t2;

	if (t1 > t2)
		cout << "\n\n������ ����� ������\n" << t1;
	else if (t1 < t2)
		cout << "\n\n������ ����� ������\n" << t2;
	else
		cout << "\n��������� ���������� �����" << t1 << " = " << t2;



	return 0;
}
