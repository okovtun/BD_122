#include<iostream>
using namespace std;

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//Вывод значения переменной 'a' на экран.
	cout << &a << endl;	//Взятие адреса переменной 'a' прямо при выводе.
	cout << pa << endl;	//Вывод адреса переменной 'a' хранящегося в указателе 'pa'.
	cout << *pa << endl;//Разыменование указателя 'pa', и получение значения по адресу.

	int* pb;	//Объявляем указатель 'pb', не зная что мы в него положим
	int b = 3;
	//l-value = r-value;
	pb = &b;
	//(int) = (int*)
	cout << b << endl;
	cout << pb << endl;
	cout << *pb << endl;
	//int - int
	//int* - Указатель на int
	//double - double
	//double* - Указатель на double  
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS

}

/*
----------------------------------
& - Address-of operator (Оператор взятия адреса).
* - Dereference operator (Оператор разыменования).
----------------------------------
*/

/*
----------------------------------
+
-
++
--
----------------------------------
*/