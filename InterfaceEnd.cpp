#include "main.h"

int InterfaceEnd()
{
	setlocale(LC_ALL, "RUS");

	int choice;

	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "                                                  ";
	cout << endl << endl;

	cout << "   ����� - 0 ";

	cout << "                                           ";
	
	cout << "                                           ";
	cout << "������� ���� - 1" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;

	cin >> choice;

	if (choice == 1)
	{
		system("cls");
		dz();
	}
	else if (choice == 0)
	{
		system("cls");
		return 0;
	}
	else
	{

	}
}