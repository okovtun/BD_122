#include<iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	int n, f;

	f = 1; // исходим из того, что факториал даже 0! = 1

	cout << "¬ведите число и мы вычислим дл€ ¬ас его факториал: "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		f = f * i;
		//cout << f << "\t";
	}

	cout << endl << "‘акториал числа " << n << " равен: " << f << endl;
#endif // TASK_1

#ifdef TASK_2
	int a, n, s;

	s = 1; // исходим из того, что любое число в степени 0 будет равно 1

	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		s = s * a;
		//cout << s << "\t";
	}

	cout << endl << "„исло " << a << " в степени " << n << " равн€етс€: " << s << endl;
#endif // TASK_2

#ifdef TASK_3
	int a = 0;
	cout << (int)'\t' << endl;
	cout << (int)'\n' << endl;
	for (int i = 1; i < 17; i++)
	{
		for (int j = 1; j < 17; j++)
		{
			//cout << a << "\t" << (char)a << endl;
			if (a == 9)cout << "t ";
			else if (a == 10)cout << "  ";
			else cout << char(a) << " "; // с ascii- кодами как-то криво.
			a++;
			//cout << a++ - 1 << " "; // с цыфрами всЄ как надо, 16 на 16, с 0 до 255.
		}
		cout << endl;
	}
#endif // TASK_3

}