#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int desk;
	int i2 = 2;
	int n2 = 1;
	cout << "¬ведите размер доски: "; cin >> desk;
	for (int t = 0; t < desk; t++)
	{
		n2++;
		for (int h = 0; h < 5; h++)
		{
			i2 = n2;
			for (int j = 0; j < desk; j++)
			{
				if (i2 % 2 == 0)
				{
					for (int i = 0; i < 5; i++)
					{
						cout << "* ";
					}
				}
				else
				{
					for (int i = 0; i < 5; i++)
					{
						cout << "  ";
					}
				}
				i2++;
			}
			cout << endl;
		}
	}
}
