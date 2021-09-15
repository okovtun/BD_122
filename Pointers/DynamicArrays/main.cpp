//DynamicArrays
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	//Stack
	setlocale(LC_ALL, "");
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];//Heap

	//Обращаться к элементам массива можно
	FillRand(arr, n);
	Print(arr, n);

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