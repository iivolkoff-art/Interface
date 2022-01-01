#include "main.h"

void PrintFirst()
{
	setlocale(LC_ALL, "RUS");

	cout << "                                                  "; 
	cout << "Первое задание: Yesy" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << endl;
}

void First()
{
	setlocale(LC_ALL, "RUS");
	 int x = 0, y = 0;

	PrintFirst();

	cout << "                                                  ";
	cout << "Введите два числа: " << endl;

	cout << "                                                        ";
	cout << "x = ";
	cin >> x;
	cout << endl;
	cout << "                                                        ";
	cout << "y = ";
	cin >> y;

	cout << endl;
	cout << endl;

	if (x > y)
	{
		cout << "                                                        ";
		cout << x << " > " << y << endl;
	}
	else if(x == y)
	{
		cout << "                                                        ";
		cout << x << " = " << y << endl;
	}
	else if (x < y)
	{
		cout << "                                                        ";
		cout << x << " < " << y << endl;
	}

	x = NULL, y = NULL;

	cout << endl;
}