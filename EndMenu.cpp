#include "main.h"

int EndMenu()
{
	setlocale(LC_ALL, "RUS");

	int speed = 200;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                  ";
	string Words("До свидания");

	for (int i = 0; i < Words.length(); i++)
	{
		cout << Words[i];
		Sleep(speed);
	}
	cout << endl;
	return 0;
}