#include<iostream>
#include<conio.h>
using namespace std;

int const ROWS = 4;
int const COLS = 6;

int summa(const int n, int arr[]);
int AVG(const int n, int arr[]);
void randArr(const int n, int arr[]);
void println(const int n, int arr[]);
int minValueIn(const int n, int arr[]);
int maxValueIn(const int n, int arr[]);

double summa(const int n, double arr[]);
double AVG(const int n, double arr[]);
void randArr(const int n, double arr[]);
void println(const int n, double arr[]);
double minValueIn(const int n, double arr[]);
double	maxValueIn(const int n, double arr[]);

long long summa(const int n, long long arr[]);
long long AVG(const int n, long long arr[]);
void randArr(const int n, long long arr[]);
void println(const int n, long long arr[]);
long long minValueIn(const int n, long long arr[]);
long long maxValueIn(const int n, long long arr[]);

char Abc(char abc, int j);
float Abc(float abc, int j);

void randArr(int arr[ROWS][COLS]);
void println2x2(int arr[ROWS][COLS]);
void sort(int arr[ROWS][COLS]);

void randArr(double arr[ROWS][COLS]);
void println2x2(double arr[ROWS][COLS]);
void sort(double arr[ROWS][COLS]);

void main()
{
	char program;
	setlocale(LC_ALL, "Rus");
	cout << "Äëÿ âûâîä ìåíþ ïðîãðàìì íàæìèòå íà Enter: " << endl;
	do {
		const int n = 10;
		const int k = 4;
		int arr[n];
		double arr2[n];
		long long arr3[k];
		char abcd = 't';
		float abcdf = 'y';
		int a = 0;
		int const ROWS = 4;
		int const COLS = 6;
		int arr2x2[ROWS][COLS] = {};
		double arr2x22[ROWS][COLS] = {};

		program = _getch();
		switch (program)
		{
		case '1':
			do {
				switch (program)
				{
					program = _getch();
					cout << "Ïðîãðàììû ¹1 ""\"int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"double""\": " << endl;
					cout << "Ïðîãðàììà ¹3 ""\"long long ""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
				case '1':
					do {
						switch (program)
						{
						case '1':
							system("CLS");
							randArr(n, arr);
							println(n, arr);
							cout << "Ñóììà âñåõ ýëåìåíòîâ ìàññèâà : " << summa(n, arr);
							cout << endl;
							cout << "Ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà : " << AVG(n, arr);
							cout << endl;
							break;
						case '2':
							randArr(n, arr);
							println(n, arr);
							cout << "Ìèíèìàëüíîå çíà÷åíèå ìàññèâà: " << minValueIn(n, arr) << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;
							break;
						case '3':
							println(n, arr);
							cout << "Ìàêñèìàëüíîå çíà÷åíèå ìàññèâà: " << maxValueIn(n, arr) << endl;
							break;
						case 13:
							system("CLS");
							cout << "int" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;
						default: if (program != 27)
							system("CLS");
							cout << "int" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;
						}
					} while (program != 27);
					break;
				case '2':
					do {
						switch (program)
						{
						case '1':
							system("CLS");
							randArr(n, arr2);
							println(n, arr2);
							cout << "Ñóììà âñåõ ýëåìåíòîâ ìàññèâà : " << summa(n, arr2);
							cout << endl;
							cout << "Ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà : " << AVG(n, arr2);
							cout << endl;
							break;
						case'2':
							randArr(n, arr2);
							println(n, arr2);
							cout << "Ìèíèìàëüíîå çíà÷åíèå ìàññèâà: " << minValueIn(n, arr2) << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;
							break;
						case'3':
							println(n, arr2);
							cout << "Ìàêñèìàëüíîå çíà÷åíèå ìàññèâà: " << maxValueIn(n, arr2) << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;

						case 13:
							system("CLS");
							cout << "double" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;
						default: if (program != 27)
							system("CLS");
							cout << "double" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;
						}
					} while (program != 27);
					break;
				case '3':
					do {
						switch (program)
						{
							cout << "long long" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
						case '1':
							system("CLS");
							randArr(k, arr3);
							println(k, arr3);
							cout << "Ñóììà âñåõ ýëåìåíòîâ ìàññèâà : " << summa(k, arr3);
							cout << endl;
							cout << "Ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà : " << AVG(k, arr3);
							cout << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;
							break;
						case '2':
							randArr(k, arr3);
							println(k, arr3);
							cout << "Ìèíèìàëüíîå çíà÷åíèå ìàññèâà: " << minValueIn(k, arr3) << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;
							break;
						case'3':
							println(k, arr3);
							cout << "Ìàêñèìàëüíîå çíà÷åíèå ìàññèâà: " << maxValueIn(k, arr3) << endl;
							cout << "Ââåäèòå íîìåð ñëåäþùåé ïðîãðàììû èëè íàæìèòå Enter, ÷òîáû âûéòè â ìåíþ: " << endl;
						case 13:
							system("CLS");
							cout << "long long" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;
						default: if (program != 27)
							system("CLS");
							cout << "long long" << endl;
							cout << "Ïðîãðàììû ¹1 ""\"Ñðåíåå àðèôìåòè÷åñêîå è ñóììà ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹2 ""\"Ìèíèìàëüíîå çíà÷åíèå ìàññèâà""\": " << endl;
							cout << "Ïðîãðàììà ¹3 ""\"Ìàêñèìàëüíîå çíà÷åíèÿ ìàññèâà""\": " << endl;
							cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
							break;

						}
					} while (program != 27);
					break;
				case 13:
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"double""\": " << endl;
					cout << "Ïðîãðàììà ¹3 ""\"long long ""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				default: if (program != 27)
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"double""\": " << endl;
					cout << "Ïðîãðàììà ¹3 ""\"long long ""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				}
			} while (program != 27);
			break;
		case '2':
			do {
				switch (program)
				{
				case '1':
					cout << "Ââåäèòå ïîðÿäêîâûé íîìåð ýëåìåíòà êîä-êè ASCII êîòîðûé õîòèòå âûâåñòè íà ýêðàí: " << endl;; cin >> a;
					cout << Abc(abcd, a) << endl;
					break;
				case '2':
					cout << "Ââåäèòå ëþáîå ÷èñëî êîòîðîå õîòèòå âûâåñòè íà ýêðàí: " << endl;; cin >> a;
					cout << Abc(abcdf, a) << endl;
					break;
				case 13:
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"D int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå double""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				default: if (program != 27)
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå double""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				}
			} while (program != 27);
		case '3':
			do {
				switch (program)
				{
					cout << "Ïðîãðàììû ¹1 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå double""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
				case '1':
					randArr(arr2x2);
					println2x2(arr2x2);
					sort(arr2x2);
					println2x2(arr2x2);
					break;

				case '2':
					randArr(arr2x22);
					println2x2(arr2x22);
					sort(arr2x22);
					println2x2(arr2x22);
					break;
				case 13:
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå double""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				default: if (program != 27)
					system("CLS");
					cout << "Ïðîãðàììû ¹1 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå int""\": " << endl;
					cout << "Ïðîãðàììà ¹2 ""\"Ñîðòèðîâêà äâóìåðíîãî ìàññèâà â ôîðìàòå double""\": " << endl;
					cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
					break;
				}
			} while (program != 27);
		case 13:
			system("CLS");
			cout << "Ïðîãðàììû ¹1 ""\"Îäíîìåðíûå ìàññèâû""\": " << endl;
			cout << "Ïðîãðàììà ¹2 ""\"Äâóìåðíûå ìàññèâû ""\": " << endl;
			cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
			break;
		default: if (program != 27)
			system("CLS");
			cout << "Ïðîãðàììû ¹1 ""\"Îäíîìåðíûå ìàññèâû""\": " << endl;
			cout << "Ïðîãðàììà ¹2 ""\"Äâóìåðíûå ìàññèâû ""\": " << endl;
			cout << "Ââåäèòå íîìåð ïðîãðàììû: " << endl;
			break;
		}
	} while (program != 27);

}
int summa(const int n, int arr[])
{
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
int AVG(const int n, int arr[])
{
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	y = (double)y / n;
	return y;
}
int minValueIn(const int n, int arr[])
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(const int n, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void randArr(const int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
}
void println(const int n, int arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

double summa(const int n, double arr[])
{
	double y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
double AVG(const int n, double arr[])
{
	double y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];
	}
	y /= n;
	return y;
}
void randArr(const int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n / 3.08;
	}
}
void println(const int n, double arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
double minValueIn(const int n, double arr[])
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double	maxValueIn(const int n, double arr[])
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

long long summa(const int n, long long arr[])
{
	long long y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
long long AVG(const int n, long long arr[])
{
	long long  y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];
	}
	y /= n;
	return y;
}
void randArr(const int n, long long arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (3500000000 - 3000000000) + 3000000000;
	}
}
void println(const int n, long long arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
long long minValueIn(const int n, long long arr[])
{
	long long min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
long long maxValueIn(const int n, long long arr[])
{
	long long max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

char Abc(char abc, int j)
{
	abc = (char)j;
	return abc;
}

float Abc(float abc, int j)
{
	abc = (float)j;
	return abc;
}

void randArr(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
		}
	}
}

void println2x2(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void sort(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = 0; x < ROWS; x++)
			{
				for (int d = 0; d < COLS; d++)
				{
					if (arr[i][j] < arr[x][d])
					{
						int el = arr[x][d];
						arr[x][d] = arr[i][j];
						arr[i][j] = el;
					}
				}
			}
		}
	}
}

void randArr(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
		}
	}
}
void println2x2(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void sort(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = 0; x < ROWS; x++)
			{
				for (int d = 0; d < COLS; d++)
				{
					if (arr[i][j] < arr[x][d])
					{
						int el = arr[x][d];
						arr[x][d] = arr[i][j];
						arr[i][j] = el;
					}
				}
			}
		}
	}
}