//DynamicArrays
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(int** arr, const int rows, const int cols);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value, int index);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	//Stack
	cout << int() << endl;//Выводим значение по умолчанию для типа данных 'int'
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};//Heap

	//Обращаться к элементам массива можно
	FillRand(arr, n);
	Print(arr, n);

	//TODO:
	//Добавить значение в конец массива
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);
	int index;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс добавляемого значения: "; cin >> index;
	arr = insert(arr, n, value, index);
	Print(arr, n);
	//delete[] buffer;
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int rows;	//Количество строк
	int cols;	//Количество элементов строки
	cout << "Введите кодичество строк: "; cin >> rows;
	cout << "Введите кодичество элементов строки: "; cin >> cols;
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		Объявление двумерного динамического массива		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) Создаем массив указателей:
	int** arr = new int*[rows] {};
	//2) Создаем строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}

	//////////////////////////////////////////////////////////////////////////////////
	//////////////	  Использование двумерного динамического массива	//////////////
	//////////////////////////////////////////////////////////////////////////////////

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);

	//////////////////////////////////////////////////////////////////////////////////
	//////////////		Удавление двумерного динамического массива		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) Удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
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
void FillRand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] <<"\t";
		}
		cout << endl;
	}
}
int* push_back(int arr[], int& n, int value)
{
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
	return arr;
}
int* insert(int arr[], int& n, int value, int index)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[index] = value;
	n++;
	return buffer;
}