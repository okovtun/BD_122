#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 3;
	const int COLS = 5;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;	//Флаг уникальности
			do
			{
				arr[i][j] = rand() % (ROWS*COLS);
				unique = true;	//Понадеемся на то, что сгенерировалось уникальное случайное число,
				//но это нужно проверить:
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

}