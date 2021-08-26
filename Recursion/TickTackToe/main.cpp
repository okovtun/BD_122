#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

#define VERTICAL_OFFSET		"\n\n\n\n\n\n"
#define HORIZONTAL_OFFSET	"\t\t\t\t\t"

void InitField(char field[], const unsigned int n);
void PrintField(char field[], const unsigned int n);
void Move(char field[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD buffer = { 80, 50 };
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN, &buffer);

	//COORD coord;
	//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, &coord);

	setlocale(LC_ALL, "");

	const unsigned int n = 9;	//Размер игрового поля
	char field[n] = {};	//Игровое поле
	//InitField(field, n);
	PrintField(field, n);
}

void InitField(char field[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		field[i] = i + 1;
	}
}

void PrintField(char field[], const unsigned int n)
{
	system("CLS");
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if (i > 0)cout << "--- --- ---";
		cout << endl;
	}
	Move(field, n);
}

void Move(char field[], const unsigned int n)
{
	char key;
	key = _getch();
	if (key == 27)return;
	field[key - '1'] = key;
	PrintField(field, n);
}