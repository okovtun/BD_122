#include<iostream>
using namespace std;

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
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//Search for repeats:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1) Check for earlyer appearence (проверяем, не встречалось ли это значение ранее)
			bool appeared_earlier = false;	//Предполагаем, что выбранное значение НЕ встречалось ранее,
			//но это нужно проверить:
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])	//ЕСЛИ произошло совпадение, то
					{
						appeared_earlier = true;	//говорим что значение уже встречалось ранее, 
						//а значит мы с ним уже работали, и уже вывели его на экран.
						break;
					}
				}
				if (appeared_earlier)break;
			}
			if (appeared_earlier)continue;	//прерываем текущую итерацию цикла 'j', и переходим к следующей его итерации
			//2) Searching for repeats (ищем повторения):
			//int repeat_count = 0;	//счетчик повторений
			int appearence_count = 1;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//if (arr[i][j] == arr[k][l])repeat_count++;
					if (arr[i][j] == arr[k][l])appearence_count++;
				}
			}
			//if (repeat_count)printf("Value %d, repeats %d times\n", arr[i][j], repeat_count);
			if (appearence_count>1)printf("Value %d, appeared %d times\n", arr[i][j], appearence_count);
		}
	}
}