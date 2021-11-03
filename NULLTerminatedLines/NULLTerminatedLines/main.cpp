//NULL Terminated Lines
//	'\0'
#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;

int StringLength(char str[]);	//Принимает строку, и возвращает размер строки (количество символов в строке)
void to_upper(char str[]);
//string.h	- библиотека содержит функции, написанные на языке C
//cstring	- библиотека содерит такие же функции, написанные на языке C++


void main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);			//Выставляет кодировку на ввод
	SetConsoleOutputCP(1251);	//Выставляет кодировку на вывод
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	/*char str[16] = "Hello";
	cout << str << endl;
	cout << str[1] << endl;
	cout << sizeof(str) << endl;*/
	const int n = 20;
	char str[n] = {};
	cout << "Введите строку: ";
	//cin >> str;
	cin.getline(str, n);
	cout << str << endl;
	cout << StringLength(str) << endl;
	to_upper(str);
	cout << str << endl;
}
int StringLength(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void to_upper(char str[])
{
	/*for (int i = 0; i < 256; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}*/
	for (int i = 0; str[i]; i++)
	{
		//if(str[i]>='a' && str[i]<='z')str[i] -= 32;
		str[i] = toupper(str[i]);	//Функция toupper() возвращает принятую букву в верхнем регистре
		//Функции toupper() и tolower() находятся в библиотеке ctype.h (cctype)
		//http://cplusplus.com/reference/cctype/
	}
}