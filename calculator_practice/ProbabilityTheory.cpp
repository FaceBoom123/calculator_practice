#include  "ProbabilityTheory.h"
#include <iostream>
using namespace std;

void Menu_probability__theory()
{
	bool quite = 0;
	while (!quite)
	{
		system("cls");
		cout << "\t\t������� ����������� � ���. ����������:" << endl;
		cout << "1)����������� m/n" << endl;
		cout << "2)��������� ��� ����������� ������������� �������" << endl;
		cout << "3)���.�������� ��� ����������� ������������� �������" << endl;
		cout << "4)�����" << endl;
		cout << "�������� ����� �������: ";
		unsigned short a;

		cin >> a;
		switch (a)
		{
		case 1:
			Probability();
			break;

		case 2:
			Variance();
			break;

		case 3:
			Mat_waiting();
			break;
		case 0: 
			quite = true;
			break;
		}
	}

}

void Probability()
{
}

void Variance()
{
}

void Mat_waiting()
{
}
