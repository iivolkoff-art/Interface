#include "main.h"

void StartMenu()
{
	setlocale(LC_ALL, "RUS");

	int speed = 200;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                  ";
	string Words("����� ����������!");

	for (int i = 0; i < Words.length(); i++)
	{
		cout << Words[i];
		Sleep(speed);
	}

	cout << endl;
}