//DynamicArrays
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	//Stack
	cout << int() << endl;//Выводим значение по умолчанию для типа данных 'int'
	setlocale(LC_ALL, "");
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n]{};//Heap

	//Обращаться к элементам массива можно
	FillRand(arr, n);
	Print(arr, n);

	//TODO:
	//Добавить значение в конец массива
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};
	//2) Переносим все значения из исходного массива в буфферный.
	//Копируем исходный массив в буферный СООТВЕТСТВЕННО:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем старый массив на новый
	arr = buffer;
	//5) Только после всего этого, можно добавить значение в конец массива, 
	//поскольку в конце массива появился элемент, в который можно сохранить значение:
	arr[n] = value;
	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;
	//arr[n] = 0xfdfdfdfd;
	Print(arr, n);
	delete[] buffer;
	delete[] arr;
}

void FillRand(int arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		//Используя арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//или же, через оператор индексирования[]:
		cout << arr[i] << "\t";
	}
	cout << endl;
}