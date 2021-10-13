//DynamicTemplated
#include<iostream>
using namespace std;

template<typename T>T** allocate(const int rows, const int cols);
template<typename T>void  clear(T** arr, const int rows);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(char** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int rows, const int cols);

template<typename T>T* push_back(T arr[], int& n, T value);
template<typename T>T* insert(T arr[], int& n, T value, int index);
template<typename T>T* pop_back(T arr[], int& n);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** push_row_front(T** arr, int& rows, const int cols);
template<typename T>T** pop_row_back(T** arr, int& rows, const int cols);

template<typename T>void  push_col_back(T** arr, const int rows, int& cols);
template<typename T>void  pop_col_back(T** arr, const int rows, int& cols);

#define delimiter "\n------------------------------------------------\n"

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	//Stack
	cout << int() << endl;//Выводим значение по умолчанию для типа данных 'int'
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};//Heap

	//Обращаться к элементам массива можно
	FillRand(arr, n);
	Print(arr, n);

	//TODO:
	//Добавить значение в конец массива
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);
	int index;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс добавляемого значения: "; cin >> index;
	arr = insert(arr, n, value, index);
	Print(arr, n);
	//delete[] buffer;
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int rows;	//Количество строк
	int cols;	//Количество элементов строки
	cout << "Введите кодичество строк: "; cin >> rows;
	cout << "Введите кодичество элементов строки: "; cin >> cols;
	
	char** arr = allocate<char>(rows, cols);

	//////////////////////////////////////////////////////////////////////////////////
	//////////////	  Использование двумерного динамического массива	//////////////
	//////////////////////////////////////////////////////////////////////////////////

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;
	cout << "Добавление строки в конец:\n";
	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 200, 1000);
	Print(arr, rows, cols);
	cout << "Удавление строки с конца:\n";
	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "Добавление столбца в конец:\n";
	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1]=rand();
	Print(arr, rows, cols);
	cout << "Удавление столбца с конца:\n";
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);
	
	clear(arr, rows);
}

template<typename T>T** allocate(const int rows, const int cols)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		Объявление двумерного динамического массива		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) Создаем массив указателей:
	T** arr = new T*[rows] {};
	//2) Создаем строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols] {};
	}
	return arr;
}
template<typename T>void  clear(T** arr, const int rows)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		Удавление двумерного динамического массива		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) Удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{

	for (int i = 0; i < n; i++)
	{
		//Используя арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//Используя арифметику указателей и оператор разыменования:
		*(arr + i) = rand();
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		//Используя арифметику указателей и оператор разыменования:
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
		*(arr + i) /= 100;
	}
}
void FillRand(int** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(char** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand();
		}
	}
}
void FillRand(double** arr, const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//или же, через оператор индексирования[]:
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
template<typename T>T* push_back(T arr[], int& n, T value)
{
	//1) Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1]{};
	//2) Переносим все значения из исходного массива в буфферный.
	//Копируем исходный массив в буферный СООТВЕТСТВЕННО:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем старый массив на новый
	arr = buffer;
	//5) Только после всего этого, можно добавить значение в конец массива, 
	//поскольку в конце массива появился элемент, в который можно сохранить значение:
	arr[n] = value;
	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;
	//arr[n] = 0xfdfdfdfd;
	return arr;
}
template<typename T>T* insert(T arr[], int& n, T value, int index)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[index] = value;
	n++;
	return buffer;
}
template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}

template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
#ifdef FULL_CODE
	//Переопределяем массив указателей:
	//1) Создаем буферный массив указателей, размером на 1 элемент больше:
	T** buffer = new T*[rows + 1]{};
	//2) Копируем адреса строк из исходного массива указателей, в буферный:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Создаем новую строку, и добавляем ее адрес в конец массива указателей:
	buffer[rows] = new T[cols]{};
	//5) После того, как в массив добавилась строка, количество его строк увеличилось на 1:
	rows++;
	//6) Возвращаем новый массив на место вызова:
	return buffer;
#endif // FULL_CODE
	return push_back(arr, rows, new T[cols]{});
}
template<typename T>T** pop_row_back(T** arr, int& rows, const int cols)
{
#ifdef FULL_CODE
	T** buffer = new T*[--rows]{};
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr[rows];	//Удаляем строку из памяти
	delete[] arr;
	return buffer;
#endif // FULL_CODE

	delete[] arr[rows - 1];		//Удаляем последнюю строку из памяти
	return pop_back(arr, rows);	//Возвращаем переопределенный массив указателей
}

template<typename T>void  push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		/*T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;*/
		arr[i] = push_back(arr[i], cols, T());
		cols--;
	}
	cols++;
}
template<typename T>void  pop_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		/*T* buffer = new T[cols - 1];
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;*/
		arr[i] = pop_back(arr[i], cols);
		cols++;
	}
	cols--;
}