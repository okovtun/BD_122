#include<iostream>
#include<conio.h>
using namespace std;

enum Key
{
	up_arrow = 72,
	down_arrow = 80,
	escape = 27,
	enter=13
};

const char* menu[] =
{
	" 1. Factorial;",
	" 2. Power;",
	" 3. Fibonacci;",
};

int Menu()
{
	int selected = 0;
	char key;
	do
	{
		system("CLS");
		for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
		{
			if (i+1 == selected)cout << "[";
			else cout << " ";
			cout << menu[i];
			if (i+1 == selected)cout << "]";
			cout << endl;
		}
		cout << selected << endl;
		key = _getch();
		//cout << (int)key << endl;
		switch (key)
		{
		case up_arrow:if(selected>0)selected--; break;
		case down_arrow:	if(selected< sizeof(menu) / sizeof(menu[0]))selected++; break;

		}
	} while (key != 27);
	return	selected+1;
}
long long int factorial(long long int n)
{
	/*if (n == 0)return 1;
	int f = n * factorial(n - 1);
	return f;*/
	/*if (n == 0)return 1;
	return n * factorial(n - 1);*/

	return (n == 0) ? 1 : n * factorial(n - 1);
}

double Power(double a, int n)
{
	/*if (n == 0)return 1;
	if (n < 0)
	{
		int N = 1 / a * Power(a, n + 1);
	}
	else
	{

int N = a * Power(a, n - 1);
	}*/

	return n == 0 ? 1 : n > 0 ? a * Power(a, n - 1) : 1 / a * Power(a, n + 1);
}

void Fibonacci(int n/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	//Fibonacci(n, b, a + b);
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a = b) + (b = c);
	Fibonacci(n);
}
void main()
{
	setlocale(LC_ALL, "");
	switch (Menu())
	{
	case 1: 
	}
}