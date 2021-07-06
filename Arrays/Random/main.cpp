/*
---------------------
rand() - возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
---------------------
*/
#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");

	/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD buffer = { 120, 1000 };
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &buffer);*/

	const int n = 10;
	int arr[n] = {};	//{} - инициализируют массив нулями

	//Заполнение массива случайными числами:
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand - minRand) + minRand;	//Остаток от деления всегда на строго меньше делителя
	}

	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сортировка массива:


	//Вывод отсортированного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}