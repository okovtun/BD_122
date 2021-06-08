#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//Число, вводимое с клавиатуры
	int reverse_number=0;//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int copy = number;	//Копия числа, введенного с клавиатуры
	while (copy > 0)
	{
		reverse_number *= 10;	//Освобождаем младший разряд для следующей цифры
		reverse_number += copy % 10;	//Получаем младший разряд исходного числа
		copy /= 10;
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Это палиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
}