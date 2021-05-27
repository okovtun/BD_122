#include<iostream>
using namespace std;

#define tab "\t"
//#define что_заменить то, чем заменить.
//define - определить
//Директива #define содает макроопределение (макрос).
//#define показывает компилятору что заменить, чем заменить

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//Оператор ПРИСВАИВАНИЯ =
//#define INCREMENT_DECREMENT
#define COMPOUND_ASSIGNMENTS

void main()
{
	setlocale(LC_ALL, "Russian");
	//Expression
	//Unary - выполняют действие над одним операндом
	//Binary - могут работать только с двумя операндами
	//Ternary - работают только с тремя операндами
	3;
	-3;		//Унарный минус
	8 - 3;	//Бинарный минус
	8 * 3;	//Оператор * может быть только бинарным
	//*3;	//Унарного имножения НЕ существует

#ifdef ARITHMETICAL_OPERATORS
			//1) Arithmetical operators:
/*
-------------------------------
Unary: +, -
Binary:+, -, *, /, %
% - остаток от деления
-------------------------------
*/

	cout << 17 / 5 << endl;
	cout << 17 % 5 << endl;
	cout << 5 / 17 << endl;
	cout << 5. % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//						l-value = r-value;
	//int a = 2;	//Инициализируем переменную 'a' значением '2'
				//Присваиваем переменной 'a' значение '2' при объявлении
	//a = 3;	//Присваиваем переменной 'a' значение '3'.
			//В таком случае старое значение переменной 'a' (2) будет удалено(затерто) новым значением (3)

	int a, b, c;
	a = b = c = 0;
	cout << a << tab << b << tab << c << endl;
#endif // ASSIGNMENT_OPERATOR
	/*cout << "\n";
	cout << endl;
	cout << "\t";
	cout << tab;*/

#ifdef INCREMENT_DECREMENT
	//Increment (++)
	//Decrement (--)
	//int i = 0;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Postfix (Suffix) decrement

	/*int j = ++i;
	cout << j << endl;
	cout << i << endl;*/

	int i = 3;
	i = ++i + ++i;
	cout << i << endl;
#endif

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;
	a += b;
	/*
	------------------------
	+=
	-=
	*=
	/=
	%=
	------------------------
	*/
#endif // COMPOUND_ASSIGNMENTS

}