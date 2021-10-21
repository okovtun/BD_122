//NULL Terminated Lines
//	'\0'
#include<iostream>
#include<Windows.h>
using namespace std;

int StringLength(char str[]);	//Принимает строку, и возвращает размер строки (количество символов в строке)

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
}
int StringLength(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}