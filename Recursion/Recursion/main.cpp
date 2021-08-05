#include<iostream>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DEBUG
	cout << "Hello World";
	main();	//main() function call
	//push - поместить элемент на вершину стэка
	//pop  - удалить элемент с вершины стэка  
#endif // DEBUG

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Мы в подвале, выход платный :-D" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	cout << floor << endl;
}

//Stack (Стопка) - это модель памяти, 
//из которой последний записанный элемент считывается первым.