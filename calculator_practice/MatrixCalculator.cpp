#include "MatrixCalculator.h"
#include<iostream>
using namespace std;

void Menu_matrix_calculator()
{
	bool quite = false;
	while (!quite)
	{
		system("cls");
		cout << "\t\t\t��������� ����������:" << endl;
		cout << "1)�������� ������"<<endl;
		cout << "2)��������� ������" << endl;
		cout << "3)��������� ������" << endl;
		cout << "4)��������� ������ �� �����" << endl;
		cout << "5)�������� ������� � ������" << endl;
		cout << "6)���������������� �������" << endl; 
		cout << "7)�������� �������" << endl;
		cout << "8)������������" << endl;
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
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 0:
			quite = true;
			break;
		}
	}

}

void addition_matrix()
{
}

void subtraction_matrix()
{
}

void multiplication_matrix()
{
}

void multiplication_by_number()
{
}

void multiplication_with_number()
{
}

void subtraction_with_number()
{
}

void matrix_transpose()
{
}

void inverse_matrix()
{
}

void determinant()
{
}
