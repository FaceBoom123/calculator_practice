#include "Functions.h"
#include<iostream>
using namespace std;
void Menu_functions()
{
	bool quite = false;
	while (!quite)
	{
		system("cls");
		cout << "\t\t\t������ � ���������:" << endl;
		cout << "1)���������� ������������� ��������� �� �������" << endl;
		cout << "2)���������� �������" << endl;
		cout << "3)����� ����� Y=0 �� �������" << endl;
		cout << "4)����� ����������� �� �������" << endl;
		cout << "0)�����" << endl;
		cout << "�������� ����� �������: ";
		unsigned short a;

		cin >> a;
		switch (a)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			quite = true;
			break;
		}
	}

}