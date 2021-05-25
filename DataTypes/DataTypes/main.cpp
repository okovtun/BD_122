#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << sizeof(int) << endl;
	//cout << INT_MIN << "\t" << INT_MAX << endl;
	//cout << 0 << "\t\t" << UINT_MAX << endl;
	//cout << sizeof(float) << endl;
	//cout << FLT_MIN << "\t" << FLT_MAX << endl;

	int speed = 0;
	const int MAX_SPEED = 250;
	cout << sizeof(250) << endl;
	cout << typeid(250u).name() << endl;
	//http://cplusplus.com/doc/tutorial/constants/
	
	double Price;	//Объявление переменной Price
	Price = 0;	//Инициализация переменной Price присвоением.
	//Проинициализировать
	//Инициализация - это присвоение начального значения.
	cout << Price << endl;	//Использование (чтение) переменной Price
	int a;
	int t;
	double price_of_coffee;	//snake_case_style
	double priceOfCoffee;	//CamelCaseStyle, PascalCaseStyle
	int smallCammel;	//Маленький верблюд начинается с маленькой буквы
	int BigCammel;		//Большой верблюд начинается с большой буквы
	cout << "Сколько стоит чашка кофе: "; 
	cin >> price_of_coffee;	//Инициализация вводом с клавиатуры
	cout << price_of_coffee << endl;
	price_of_coffee;
	int number_of_cups;
}