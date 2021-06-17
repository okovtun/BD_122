#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define MULTIPLICATION_TABLE
//#define PYTHAGORUS_TABLE
//#define ROMBUS

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10;
#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= n; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORUS_TABLE
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << tab;
		}
		cout << endl;
	}
#endif // PYTHAGORUS_TABLE

	//int n;
	cout << "Введите размер фигуры: "; cin >> n;

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}