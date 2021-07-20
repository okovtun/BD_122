#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
#define Escape 27

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	const int m = 5;
	int arr[m][n];
	int arr1[m][n];
	double arr2[m][n]{};
	double arr3[3][3];
	int table;
	int minRand, maxRand;
	int stepl;
	int povtorpred = 0;
	int povtoreniya = 1;
	char nomer_programmu;
	double umnoshenie = 0;
	int koliter = n * m;
	int m1, n1, m2, n2;
	int opredekitel = 0;
	int min;
	int max;
	int summa;
	int sredaref;

	do
	{
		cout << "Введите номер программы" << endl << "1 - Массив из " << n * m << " элементов заполнить УНИКАЛЬНЫМИ случайными числами (Диапозон в " << n * m << " чисел не меньше)" << endl << "2 - Сортировка массива" << endl << "3 - Нахождение повторяющихся значений в массиве" << endl << "4 - Сложение и вычитание массива" << endl << "5 - Умножение массива" << endl << "6 - Определитель массива 3х3" << endl << "7 - Минимальное, Максимальное, Сумма, Среднее арифметическое" << endl << "Escape - для выхода" << endl << "Введите номер программы : "; nomer_programmu = _getch();
		if (nomer_programmu != 27)
		{
			cout << nomer_programmu << endl << endl;
		}
		else
		{
			cout << "Escape" << endl;
		}
		switch (nomer_programmu)
		{
		case '1':
		{
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;

					for (int k = 0; k <= i; k++)
					{
						if (k == i)
						{
							for (int l = 0; l < j; l++)
							{
								if (arr[i][j] == arr[k][l])
								{
									j--;
									break;
								}
							}
						}
						else
						{
							for (int l = 0; l < n; l++)
							{
								if (arr[i][j] == arr[k][l] && j == 0)
								{
									i--;
									j = n - 1;
									break;
								}
								else if (arr[i][j] == arr[k][l])
								{
									j--;
									break;
								}
							}

						}
					}
				}
			}

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;
		}
			break;
		case '2':
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					stepl = j;
					for (int k = 0 + i; k < m; k++)
					{
						for (int l = stepl; l < n; l++)
						{
							if (arr[i][j] > arr[k][l])
							{
								table = arr[i][j];
								arr[i][j] = arr[k][l];
								arr[k][l] = table;
							}
						}
						stepl = 0;
					}
				}
			}

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			break;
		case '3':
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					stepl = j + 1;
					if (i == 0 && j == 0)
					{
						for (int k = i; k < m; k++)
						{
							for (int l = stepl; l < n; l++)
							{
								if (arr[i][j] == arr[k][l])
								{
									povtoreniya++;
								}
							}
							stepl = 0;
						}
					}
					else
					{
						for (int o = 0; o <= i; o++)
						{
							for (int p = 0; p < j; p++)
							{
								if (arr[i][j] == arr[o][p])
								{
									break;
								}
							}
						}
						if (povtorpred == 0)
						{
							for (int k = i; k < m; k++)
							{
								for (int l = stepl; l < n; l++)
								{
									if (arr[i][j] == arr[k][l])
									{
										povtoreniya++;
									}
								}
								stepl = 0;
							}
						}
					}

					if (povtoreniya > 1)
					{
						cout << arr[i][j] << " повторяется " << povtoreniya << endl << endl;
						povtoreniya = 1;
					}
					povtoreniya = 0;
					povtorpred = 0;
				}
			}
			break;
		case '4':
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr1[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}

			cout << "Первая матрица: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			cout << "Вторая матрица: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr1[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr2[i][j] = arr[i][j] + arr1[i][j];
				}
			}

			cout << "Матрица после сложения: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr2[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr2[i][j] = arr[i][j] - arr1[i][j];
				}
			}

			cout << "Матрица после вычетания: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr2[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;
			break;
		case '5':
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr1[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}

			cout << "Первая матрица: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			cout << "Вторая матрица: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr1[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					m1 = i;
					n1 = 0;
					m2 = 0;
					n2 = j;
					for (int k = 0; k < n; k++, m2++, n1++)
					{
						umnoshenie += arr[m1][m2] * arr1[n1][n2];
					}
					cout << endl;
					arr2[i][j] = umnoshenie;
					umnoshenie = 0;
				}
			}

			cout << "Матрица после умножения: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr2[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			break;
		case '6':
			n1 = 0;
			n2 = 0;
			opredekitel = 0;
			umnoshenie = 1;
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;



			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr3[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr3[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if (n1 == n)
					{
						n1 = 0;
					}
					umnoshenie *= arr3[j][n1];
					n1++;
				}
				n2++;
				n1 = n2;
				opredekitel += umnoshenie;
				umnoshenie = 1;
			}
			n2 = n - 1;
			n1 = n2;
			cout << endl << umnoshenie << " " << opredekitel << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if (n1 == -1)
					{
						n1 = n - 1;
					}
					umnoshenie *= arr3[j][n1];
					n1--;
				}
				n2--;
				n1 = n2;
				cout << endl << umnoshenie << endl;
				opredekitel -= umnoshenie;
				cout << endl << opredekitel << endl;
				umnoshenie = 1;
			}
			cout << opredekitel << endl;
			break;
		case '7':
			min = 0;
			max = 0;
			summa = 0;
			sredaref = 0;
			cout << "Введите минимальное случайное число: "; cin >> minRand;
			cout << "Введите максимальное случайное число: "; cin >> maxRand;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					arr[i][j] = rand() % (maxRand - minRand) + minRand;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << arr[i][j] << tab;
				}
				cout << endl;
			}
			cout << endl;
			min = arr[0][0];
			max = arr[0][0];
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (min > arr[i][j])
					{
						min = arr[i][j];
					}
					if (max < arr[i][j])
					{
						max = arr[i][j];
					}
					summa += arr[i][j];
				}
			}
			cout << "Минимальное = " << min << " Максимальное = " << max << " Сумма = " << summa << " Среднее арифметическое = " << summa / (m * n) << endl << endl;
			break;
		default:
			if (nomer_programmu != '1' && nomer_programmu != '2' && nomer_programmu != '3' && nomer_programmu != '4' && nomer_programmu != '5' && nomer_programmu != '6' && nomer_programmu != Escape)
			{
				cout << "Нет такой программы" << endl << endl;
			}
			break;
		}
	} while (nomer_programmu != Escape);
}