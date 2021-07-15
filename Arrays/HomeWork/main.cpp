#include<iostream>
#include<conio.h>
#include <Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Для вывод меню программ нажмите на Enter: " << endl;

	char program;
	do
	{
		const int n = 10;
		int arr[n];
		program = _getch();
		switch (program)
		{
		case '1':
			system("CLS");
			for (int i = 0; i < 10; )
			{
				int proverka = 0;
				int new_chislo = rand() % 10;
				for (int j = 0; j < n; j++)
				{
					int chislo = arr[j];
					if (new_chislo == chislo)
					{
						proverka++;
					}
				}
				if (proverka == 0)
				{
					arr[i] = new_chislo;
					i++;
				}
			}

			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << "\t";
			}
			cout << endl;
			cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: ";
			break;
		case '2':

			system("CLS");
			for (int i = 0; i < 10; i++)
			{
				arr[i] = rand() % 10;
				cout << arr[i] << "\t";
			}
			cout << endl;

			int pov[n];
			int collm[n];
			for (int i = 0; i < n; i++)
			{
				system("CLS");
				char work[n] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int coll = 0;
				int proverka = 0;
				for (int j = 0; j < n; j++)
				{
					cout << arr[j] << "\t";
				}
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					if (arr[j] == arr[i])
					{
						coll++;
						work[j] = '!';
					}
					if (pov[j] == arr[i])
					{
						proverka++;
					}

				}
				if (coll > 0 && proverka == 0)
				{
					pov[i] = arr[i];
					collm[i] = coll;
					for (int j = 0; j < n; j++)
					{
						Sleep(400);
						cout << work[j] << "\t";
					}
				}

			}
			cout << endl;
			cout << "Значения массива и колличество их повторений: ";
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				if (pov[i] != -858993460)
					cout << pov[i] << " = ";
				if (collm[i] != -858993460)
					cout << collm[i] << "(coll)" << "\t";
			}
			cout << endl;
			cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: ";
			break;
		case '3':
			system("CLS");
			cout << "Проинициализируйте массив из 10 значений: ";
			for (int i = 0; i < 10; i++)
			{
				cin >> arr[i];
			}
			cout << endl;


			for (int i = 0; i < n; i++)
			{
				system("CLS");
				char work[n] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int coll = 0;
				int proverka = 0;
				for (int j = 0; j < n; j++)
				{
					cout << arr[j] << "\t";
				}
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					if (arr[j] == arr[i])
					{
						coll++;
						work[j] = '!';
					}
					if (pov[j] == arr[i])
					{
						proverka++;
					}

				}
				if (coll > 0 && proverka == 0)
				{
					pov[i] = arr[i];
					collm[i] = coll;
					for (int j = 0; j < n; j++)
					{
						Sleep(400);
						cout << work[j] << "\t";
					}
				}

			}
			cout << endl;
			cout << "Значения массива и колличество их повторений: ";
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				if (pov[i] != -858993460)
					cout << pov[i] << " = ";
				if (collm[i] != -858993460)
					cout << collm[i] << "(coll)" << "\t";
			}
			cout << endl;
			cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: ";
			break;
		case 13:
			system("CLS");
			cout << "Программа №1 ""\"Массив из десяти элементов заполненный УНИКАЛЬНЫМИ случайными числами в диапазоне от 0 до 10""\": " << endl;
			cout << "Программа №2 ""\"Поиск повторяющихся значений массива и колличества их повторений""\": " << endl;
			cout << "Программа №3 ""\"Поиск повторяющихся введённых значений массива и колличества их повторений""\": " << endl;
			cout << "Введите номер программы: " << endl;
			break;
		default:
			system("CLS");
			cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: " << endl;
			break;
		}
	} while (program != 27);
}