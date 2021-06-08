#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	char s;
	int chislo = 0, colchisel = 0, proverka = 0, delenie = 10, cukl = 0, pervoechislo = 0, vtoroechislo = 0, delper1 = 10, delvtor1 = 10, delvtor2 = 1, proverkanapalindrom = 0, proverkanachetnost = 0, vupolprogramm = 0;
	cout << "Какую программу выполнить 1 - канкулятор 2 - является ли введенное число палиндромом : "; cin >> vupolprogramm;
	switch (vupolprogramm)
	{
	case 1:
		cout << "Введите простое арифметическое выражение: ";
		cin >> a >> s >> b;
		cout << a << " " << s << " " << b << endl;
		switch (s)
		{
		case '+': cout << a << " " << s << " " << b << " = " << a + b; break;
		case '-': cout << a << " " << s << " " << b << " = " << a - b; break;
		case '/': if (b != 0)
		{
			cout << a << " " << s << " " << b << " = " << a / b;
		}
				  else
		{
			cout << "На ноль делить нельзя";
		}
				  break;
		case '*': cout << a << " " << s << " " << b << " = " << a * b; break;
		default:
			cout << "Неверно введено арифметическое выражение"; break;
		}
		break;
	case 2:
		cout << "Введите число: "; cin >> chislo;
		if (chislo != 10)
		{
			do
			{
				proverka = chislo % delenie;
				delenie *= 10;
				colchisel += 1;
			} while (proverka != chislo);
		}
		else
		{
			cout << "Введенное число не является палиндромом";
		}
		delper1 *= pow(10, (colchisel - 2));
		proverkanachetnost = colchisel % 2;
		if (proverkanachetnost != 0)
		{
			colchisel = (colchisel / 2) + 1;
		}
		else
		{
			colchisel = colchisel / 2;
		}
		while (colchisel != cukl)
		{
			pervoechislo = (chislo / delper1) % 10;
			vtoroechislo = (chislo % delvtor1) / delvtor2;
			if (pervoechislo == vtoroechislo)
			{
				cukl += 1;
				proverkanapalindrom = 1;
				delvtor1 *= 10;
				delvtor2 *= 10;
				delper1 /= 10;
			}
			else
			{
				proverkanapalindrom = 0;
				cukl = colchisel;
			}
		}
		if (proverkanapalindrom == 1)
		{
			cout << "Введенное число " << chislo << " является полиндромом";
		}
		else
		{
			cout << "Введенное число " << chislo << " не является полиндромом";
		}
		break;
	default:
		break;
	}
}