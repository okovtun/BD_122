#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET
//#define CALC_IF_CHAIN

#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)	//Простое условие - одно сравнение
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "Вы на северном полюсе" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "Введите число: "; cin >> n;
	if (n >= 0 && n <= 10)	//Сложное условие - два сравнения, объединенные оператором AND.
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Мимо" << endl;
	}
#endif // TARGET

	double a, b;
	char s;		//Sign - знак операции
	cout << "Введите простое ариметическое выражение: ";
	cin >> a >> s >> b;
#ifdef CALC_IF_CHAIN
	//cout << a << " " << s << " " << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		if (b != 0)cout << a << " / " << b << " = " << a / b << endl;
		else cout << "Низя так делать!!!" << endl;
	}
	else
	{
		cout << "Error:NoOperation" << endl;
	}
#endif // CALC_IF_CHAIN



	int var = 0;


	switch (var)
	{
	case CONST_1: ...code1...; break;
	case CONST_2: ...code2...; break;
		//.....................;
		//.....................;
	case CONST_N: ...codeN...; break;
	default: ...code...;
	}


}