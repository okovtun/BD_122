#include<iostream>
using namespace std;

//#define TASK_1
//define - определить.
//definition - определение.
//ƒиректива #define создает макроопределенеие (макрос)

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
//если определено TASK_1, то нижеследующий код, до директивы #endif будет виден компил€тору
//он будет компилироватьс€ и запускатьс€.
	double money;
	cout << "¬ведите денежную сумму: "; cin >> money;
	cout << money << endl;
	int grn = money;	//«десь происходит не€вное преобразование типов из 'double' в 'int'
						//Ёто преобразование выполн€ет оператор "присвоить" (=),
						//ѕри этом происходт потер€ данных - тер€етс€ дробна€ часть.
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
#endif // TASK_1

}