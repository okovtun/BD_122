//DynamicArrays
#include<iostream>
using namespace std;

#include"Array.h"
#include"Memory.h"

#define delimiter "\n------------------------------------------------\n"

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
	
	int** arr = allocate(rows, cols);

	//////////////////////////////////////////////////////////////////////////////////
	//////////////	  Использование двумерного динамического массива	//////////////
	//////////////////////////////////////////////////////////////////////////////////

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;
	cout << "Добавление строки в конец:\n";
	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 200, 1000);
	Print(arr, rows, cols);
	cout << "Удавление строки с конца:\n";
	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "Добавление столбца в конец:\n";
	push_col_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "Удавление столбца с конца:\n";
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);
	
	clear(arr, rows);
}