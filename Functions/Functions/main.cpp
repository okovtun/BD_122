//Functions
//lib - static link library
//dll - dynamic link library
#include<iostream>
using namespace std;

int Add(int a, int b);		//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Параметры по умолчанию (default arguments)
double Power(double a, int n = 2);	//Возводит число в степень
//Если в функцию передать одно число, то она возведет его в квадрат.
//UNRESOLVED EXTERNALS
//(LNK - ошибка компоновки, Linker - компоновщик, сборщик)
//Unresoled external sybol found

int factorial(int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << Power(5) << endl;
	cout << factorial(5) << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	//int c = a + b;
	int c = Add(a, b);	//Использование функции (Вызов функции - Function call)
	//Function doesn't take N arguments
	//Too few arguments in function call - если мы передали меньше параметров, чем функция принимает
	//Too many arguments in function call - если мы передали больше параметров, чем функция принимает
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}

int Add(int a, int b)	//Реализация функции (Определение функции - Function definition)
{
	//В теле функции мы определеяем что делает эта функция
	//Реализуем алгоритм, возложенный на функцию.
	int c = a + b;
	return c;
	//В теле функции можно писаит все что угодно, кроме РЕАЛИЗАЦИИ другой функции.
}
int Sub(int a, int b)	//subtraction - вычитание
{
	return a - b;
}
int Mul(int a, int b)	//multiplication - уножение
{
	return a * b;
}
double Div(int a, int b)//division - деление
{
	return (double)a / b;
}

double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}