#include<iostream>
using namespace std;

#define ARITHMETICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "Russian");
	//Expression
	//Unary - выполн€ют действие над одним операндом
	//Binary - могут работать только с двум€ операндами
	//Ternary - работают только с трем€ операндами
	3;
	-3;		//”нарный минус
	8 - 3;	//Ѕинарный минус
	8 * 3;	//ќператор * может быть только бинарным
	//*3;	//”нарного имножени€ Ќ≈ существует

	//1) Arithmetical operators:
	/*
	-------------------------------
	Unary: +, -
	Binary:+, -, *, /, %
	% - остаток от делени€
	-------------------------------
	*/

	cout << 17 / 5 << endl;
	cout << 17 % 5 << endl;
	cout << 5 / 17 << endl;
	cout << 5. % 17 << endl;
}