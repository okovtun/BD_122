//UniqueRandom
#include<iostream>
using namespace std;

#define tab "\t"

//#define UNIQUE_1
#define UNIQUE_2

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];

#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		bool unique;	//Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true;	//Предположим, что сгенеририровалось уникальное случайное число, 
			//но это нужно проветрить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;	//прерывает текущую итерацию цикла, и все последующие
				}
			}
		} while (!unique);
	}
#endif // UNIQUE_1
	
#ifdef UNIQUE_2
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
#endif // UNIQUE_2

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}