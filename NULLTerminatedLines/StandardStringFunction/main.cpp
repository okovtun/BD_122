#include<iostream>
#include<string.h>
using namespace std;

//string.h	- ���������� �������� �������, ���������� �� ����� C
//cstring	- ���������� ������� ����� �� �������, ���������� �� ����� C++

//#define COPY_AND_LENGTH
//#define COPY_MEMORY
//#define CONCATENATION
//#define COMPARISON

void main()
{
	setlocale(LC_ALL, "");
#ifdef COPY_AND_LENGTH
	const unsigned int SIZE = 256;
	char str[SIZE] = {};
	cout << "������� ������: ";
	cin.getline(str, SIZE);
	cout << str << endl;
	cout << "����� ��������� ������: " << strlen(str) << endl;

	//����������� �����:
	char dst[SIZE] = {};
	strcpy(dst, str);//string copy
	//strcpy(dst, src);	
	//dst (destination) - ������-����������, � ������� ����������� ������ ������.
	//src (source)		- ������-��������, ���������� ������� ����� ����������.
	cout << "����� ������: " << dst << endl;
#endif // COPY_AND_LENGTH

#ifdef COPY_MEMORY
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8,13,21 };
	int brr[SIZE] = {};
	memcpy(brr, arr, SIZE * sizeof(int));
	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
#endif // COPY_MEMORY

#ifdef CONCATENATION
	//������������ (�����������/�������) �����:
	const size_t SIZE = 256;
	char str1[SIZE] = {};
	char str2[SIZE] = {};
	cout << "������� ������ ������: "; cin >> str1;
	cout << "������� ������ ������: "; cin >> str2;
	strncat(str1, str2, 2/*����� �������� ������ ������, ������� ����� �����������*/);	//+=
	cout << "str1:\t" << str1 << endl;
	cout << "str2:\t" << str2 << endl;
#endif // CONCATENATION

#ifdef COMPARISON
	/*char str1[] = "Hello";
char str2[] = "Hello";
cout << strcmp(str1, str2) << endl;*/

	const char* movie[] =
	{
		"Hello",
		"World",
		"Avatar",
		"Terminator",
		"Captain America",
		"Tor",
		"Loki"
	};
	for (int i = 0; i < sizeof(movie) / sizeof(const char*); i++)
	{
		cout << movie[i] << endl;
	}

	for (int i = 0; i < sizeof(movie) / sizeof(const char*); i++)
	{
		for (int j = i + 1; j < sizeof(movie) / sizeof(const char*); j++)
		{
			if (strcmp(movie[i], movie[j]) > 0)
			{
				const char* buffer = movie[i];
				movie[i] = movie[j];
				movie[j] = buffer;
			}
		}
	}
	cout << "\n---------------------------------------------------------------------\n" << endl;
	for (int i = 0; i < sizeof(movie) / sizeof(const char*); i++)
	{
		cout << movie[i] << endl;
	}
#endif // COMPARISON

	const size_t n = 5;
	int arr[n];
	memset(arr, 0x000000FE, n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}