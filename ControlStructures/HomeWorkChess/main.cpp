#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int polosa_kasaya_sverhu = 218;
	int polosa_kasaya_snizy = 192;
	int polosa_kasaya_naoborot_sverhu = 191;
	int polosa_kasaya_naoborot_snizy = 217;
	int polosa_gorizontalnaya = 196;
	int polosa_vertekalnaya = 179;
	int kvadrat = 219;
	int colichestvo_strok;
	int colichestvo_kvadratov;
	int kakoi_kvadrat;
	char nomer_programmu;

	do
	{
		setlocale(LC_ALL, "Rus");
		cout << "1. Шахмотная доска из (*)" << endl << "2. Шахмотная доска усложнённая" << endl << "Введите номер программы: "; nomer_programmu = _getch();
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
			setlocale(LC_ALL, "Rus");
			kakoi_kvadrat = 0;
			cout << "Введите высоту шахматной доски: "; cin >> colichestvo_strok;
			cout << "Введите ширину шахматной доски: "; cin >> colichestvo_kvadratov;
			setlocale(LC_ALL, ".866");
			cout << endl;
			for (int i = 0; i < colichestvo_strok; i++)
			{
				for (int i = 0; i < 5; i++)
				{
					if (colichestvo_kvadratov % 2 == 0)
					{
						for (int j = 0; j < colichestvo_kvadratov; j++)
						{
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "* ";
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
						}
					}
					else
					{
						for (int j = 0; j < colichestvo_kvadratov; j++)
						{
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "* ";
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
						}
						if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
						else kakoi_kvadrat = 0;

					}
					cout << endl;
				}
				if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
				else kakoi_kvadrat = 0;
			}
			cout << endl;
			break;
		case '2':
			setlocale(LC_ALL, "Rus");
			kakoi_kvadrat = 0;
			cout << "Введите высоту шахматной доски: "; cin >> colichestvo_strok;
			cout << "Введите ширину шахматной доски: "; cin >> colichestvo_kvadratov;
			setlocale(LC_ALL, ".866");
			cout << endl;
			cout << (char)polosa_kasaya_sverhu;
			for (int i = 0; i < (colichestvo_kvadratov * 10) + 4; i++)
			{
				cout << (char)polosa_gorizontalnaya;
			}
			cout << (char)polosa_kasaya_naoborot_sverhu << endl;
			for (int i = 0; i < colichestvo_kvadratov; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "  ";
				for (int k = 0; k < 5; k++)
				{
					cout << "  ";
				}
				if (i == colichestvo_kvadratov - 1)cout << "  " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			for (int i = 0; i < colichestvo_strok; i++)
			{
				for (int i = 0; i < 5; i++)
				{
					if (colichestvo_kvadratov % 2 == 0)
					{
						for (int j = 0; j < colichestvo_kvadratov; j++)
						{
							if (j == 0)cout << (char)polosa_vertekalnaya << "  ";
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 10; k++)
								{
									cout << (char)kvadrat;
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
							if (j == colichestvo_kvadratov - 1)cout << "  " << (char)polosa_vertekalnaya;
						}
					}
					else
					{
						for (int j = 0; j < colichestvo_kvadratov; j++)
						{
							if (j == 0)cout << (char)polosa_vertekalnaya << "  ";
							if (kakoi_kvadrat == 0)
							{
								for (int k = 0; k < 10; k++)
								{
									cout << (char)kvadrat;
								}
								kakoi_kvadrat = 1;
							}
							else
							{
								for (int k = 0; k < 5; k++)
								{
									cout << "  ";
								}
								kakoi_kvadrat = 0;
							}
							if (j == colichestvo_kvadratov - 1)cout << "  " << (char)polosa_vertekalnaya;
						}
						if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
						else kakoi_kvadrat = 0;

					}
					cout << endl;
				}
				if (kakoi_kvadrat == 0) kakoi_kvadrat = 1;
				else kakoi_kvadrat = 0;
			}
			for (int i = 0; i < colichestvo_kvadratov; i++)
			{
				if (i == 0)cout << (char)polosa_vertekalnaya << "  ";
				for (int k = 0; k < 5; k++)
				{
					cout << "  ";
				}
				if (i == colichestvo_kvadratov - 1)cout << "  " << (char)polosa_vertekalnaya;
			}
			cout << endl;
			cout << (char)polosa_kasaya_snizy;
			for (int i = 0; i < (colichestvo_kvadratov * 10) + 4; i++)
			{
				cout << (char)polosa_gorizontalnaya;
			}
			cout << (char)polosa_kasaya_naoborot_snizy << endl;
			cout << endl;
			break;
		default:
			setlocale(LC_ALL, "Rus");
			if (nomer_programmu == 27)
			{
				cout << "Выход";
			}
			else
			{
				cout << "Нет такой программы" << endl;
			}
			break;
		}
	} while (nomer_programmu != 27);

}