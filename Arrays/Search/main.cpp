//Search (Поиск)
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Поиск повторений:
	for (int i = 0; i < n; i++)
	{
		//arr[i] - выбранный элемент. Нужно выяснить, сколько раз он встречается в массиве.

		//1) Проверяем, не встречался ли выбранный элемент ранее:
		bool have_been_earlyer = false;	//Уже был раньше?
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				have_been_earlyer = true;
				break;	//Прерывает текущую итерацию, и все последующие
			}
		}
		if (have_been_earlyer)continue;//Прерывает текущую итерацию, и переходит к следующей
		//int count = 0;	//Счетчик повторений
		int count = 1;	//Счетчик вхождений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		//if (count > 0)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
		//if (count > 1)cout << "Значение " << arr[i] << " встречается " << count << " раз" << endl;
		if (count > 1)printf("Значение %d встречается %d раз.\n", arr[i], count);	//Форматирование строк
	}
}