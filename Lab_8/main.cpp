#include "Dialog.h"
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "���������: " << endl << endl;
	cout << "-----------------------------------" << endl;
	cout << endl << "1. ������� ������: (m6, ��� 6-������)\n2. �������� �������: +\n3. ������� �������: -\n4. ����� ����� ���������: s\n5. ������� �������: z\n6. �����: q\n\n";
	cout << "-----------------------------------" << endl;
	cout << endl;
	Dialog D;
	D.Execute();
	return 0;


}