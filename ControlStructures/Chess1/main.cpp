#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"			//(char)219 << (char)219
#define BLACK_BOX			"\x20\x20"			//(char)32 << (char)32

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");	//Выставляет кодировку по умолчанию
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else
			{
				//if ((i + j) % 2 == 0)cout << WHITE_BOX;	else cout << BLACK_BOX;
				//(i + j) % 2 == 0 ? cout << WHITE_BOX : cout << BLACK_BOX;
				cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}


	/*for (int i = 170; i < 256; i++)
	{
		//if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << endl;
	}*/
}