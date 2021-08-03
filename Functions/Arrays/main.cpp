#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;

	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, B_SIZE) << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;


	int i_arr_2[ROWS][COLS];	//int array 2D
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}