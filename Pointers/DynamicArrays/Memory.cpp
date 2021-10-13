int** allocate(const int rows, const int cols)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		Объявление двумерного динамического массива		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) Создаем массив указателей:
	int** arr = new int*[rows] {};
	//2) Создаем строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
void  clear(int** arr, const int rows)
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

int* push_back(int arr[], int& n, int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};
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
int* insert(int arr[], int& n, int value, int index)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[index] = value;
	n++;
	return buffer;
}

int** push_row_back(int** arr, int& rows, const int cols)
{
	//Переопределяем массив указателей:
	//1) Создаем буферный массив указателей, размером на 1 элемент больше:
	int** buffer = new int*[rows + 1]{};
	//2) Копируем адреса строк из исходного массива указателей, в буферный:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Создаем новую строку, и добавляем ее адрес в конец массива указателей:
	buffer[rows] = new int[cols] {};
	//5) После того, как в массив добавилась строка, количество его строк увеличилось на 1:
	rows++;
	//6) Возвращаем новый массив на место вызова:
	return buffer;
}
int** pop_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int*[--rows]{};
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr[rows];	//Удаляем строку из памяти
	delete[] arr;
	return buffer;
}

void  push_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
void  pop_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols - 1];
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}