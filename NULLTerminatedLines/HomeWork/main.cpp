//NULL Terminated Lines
// '\0'
#include<iostream>
#include<Windows.h>

using namespace std;

int StringLenght(char str[]); // ��������� ������ � ���������� ������ ������
void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[]);

bool is_palindrome(char str[]);
bool is_int_number(char str[]);
bool is_bin_number(char str[]);
bool is_hex_number(char str[]);

int string_to_int(char str[]);
int bin_to_int(char str[]);
int hex_to_int(char str[]);


void main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251); // ���������� ��������� �� ����
	SetConsoleOutputCP(1251); // ���������� ��������� �� �����

	//char str[] = {'H', 'e', 'l', 'l', 'o','\0'}; // 1 ������
	/*char str[] = "Hello";						   // 2 ������
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << str[1] << endl;*/

	const int n = 30;								// 3 ������
	char str[n] = {};
	cout << "������� ������: "; // ������� ������� � ��������� 866
	//cin >> str; // �� ����� ������ ������ (����� ������� ��� cin - ������ ����������)

	cin.getline(str, n); // ����� ������ ������
	cout << endl;
	//cout << str << endl;
	//cout << StringLenght(str) << endl;
	//to_upper(str);
	//to_lower(str);
	//shrink(str);
	//cout << str << endl;

	cout << "�������� �� �������� ������ �����������? " << is_palindrome(str) << endl;
	cout << "�������� �� �������� ������ �������� ������? " << is_bin_number(str) << " ����������: " << bin_to_int(str) << endl;
	cout << "�������� �� �������� ������ ���������� ������? " << is_int_number(str) << " ����������: " << string_to_int(str) << endl;
	cout << "�������� �� �������� ������ ����������������� ������? " << (is_hex_number(str)) << " ����������: " << hex_to_int(str) << endl;
	cout << (is_hex_number(str));
	cout << " ����������: "
		<< hex_to_int(str) << endl;

}

int StringLenght(char str[])
{
	/*cout << typeid(str).name() << endl;
	return sizeof(str);*/
	int i = 0;
	for (; str[i]; i++);
	return i;
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= '�') && (str[i] <= '�'))
		{
			str[i] = str[i] - 32;
		}
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= '�') && (str[i] <= '�'))
		{
			str[i] = str[i] + 32;
		}
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] == ' '))
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}

bool is_palindrome(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			for (int j = i; str[j]; j++) str[j] = str[j + 1];
			i--;
		}
	}
	to_lower(str);

	int N = StringLenght(str); // ������� 2
	int middle = N / 2;

	for (int i = 0; i < middle; i++)
	{
		if (str[i] == str[N - i - 1]) continue;
		else return false;
	}

	//int N = StringLenght(str); // ������� 1
	//const int n = 30;
	//char str_buffer[n] = {};
	// 
	//for (int i = 0; str[i]; i++)
	//{
	//	str_buffer[i] = str[N - i - 1];
	//	if (str_buffer[i] == str[i]) continue;
	//	else return false;
	//}

	return true;
}

bool is_int_number(char str[])
{
	if (StringLenght(str) > 1 && str[0] == '0') return false; // ������������, ��� ���������� ����� �� ����� ���������� � ����
	int N = 0; // ������� �������� �� 0 �� 9
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			N++;
		}
	}
	if (N == StringLenght(str))
	{
		return true;
	}
	else return false;
}

bool is_bin_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] != '0') && (str[i] != '1'))
		{
			return false;
		}
	}
	return true;
}

//bool is_hex_number(char str[])
//{
//	int N = 0; // ������� �������� �� 0 �� 9 � �� a(A) �� f(F)
//	for (int i = 0; str[i]; i++)
//	{
//		if ((str[i] >= 48) && (str[i] <= 57))
//		{
//			N++;
//		}
//		if ((str[i] >= 'A') && (str[i] <= 'F'))
//		{
//			N++;
//		}
//		if ((str[i] >= 'a') && (str[i] <= 'f'))
//		{
//			N++;
//		}
//	}
//	if (N == StringLenght(str))
//	{
//		return true;
//	}
//	else return false;
//}

bool is_hex_number(char str[])
{
	bool hex_number = true;
	//int n = StringLenght(str);
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] > '9' || str[i] < '0') && (str[i] < 'A' || str[i] > 'F') && (str[i] < 'a' || str[i] > 'f'))
		{
			return false;
			hex_number = false;
			break;
		}
	}
	return true;
	return hex_number;
}

int string_to_int(char str[])
{
	if (is_int_number(str) == true)
	{
		int N = 1;
		int S = 0;
		int Lenght = StringLenght(str);
		for (int i = 0; str[i]; i++)
		{
			for (int j = Lenght - 1 - i; j > 0; j--)
			{
				N = N * 10;
			}
			S = S + (N * (str[i] - 48));
			N = 1;
		}
		return S;
	}
	else return false;
}

int bin_to_int(char str[])
{
	if (is_bin_number(str) == true)
	{
		int N = 1;
		int S = 0;
		int Lenght = StringLenght(str);
		for (int i = 0; str[i]; i++)
		{
			for (int j = Lenght - 1 - i; j > 0; j--)
			{
				N = N * 2;
			}
			S = S + (N * (str[i] - 48));
			N = 1;
		}
		return S;
	}
	else return false;
}

int hex_to_int(char str[])
{
	if (is_hex_number(str) == true)
	{
		int N = 1;
		int S = 0;
		//int Lenght = StringLenght(str);
		for (int i = 0; str[i]; i++)
		{
			for (int j = StringLenght(str) - 1 - i; j > 0; j--)
			{
				N = N * 16;
			}
			if ((str[i] >= 48) && (str[i] <= 57))
			{
				str[i] = str[i] - 48;
			}
			if ((str[i] >= 'a') && (str[i] <= 'f'))
			{
				str[i] = str[i] - 87;
			}
			S = S + (N * (str[i]));
			N = 1;
		}
		return S;
	}
	else return false;
}