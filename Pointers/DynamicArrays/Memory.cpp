
template<typename T>T** allocate(const int rows, const int cols)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		���������� ���������� ������������� �������		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) ������� ������ ����������:
	T** arr = new T*[rows] {};
	//2) ������� ������:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}
template<typename T>void  clear(T** arr, const int rows)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		��������� ���������� ������������� �������		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) ������� ������:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) ������� ������ ����������:
	delete[] arr;
}

template<typename T>T* push_back(T arr[], int& n, int value)
{
	//1) ������� �������� ������ ������� �������:
	T* buffer = new T[n + 1]{};
	//2) ��������� ��� �������� �� ��������� ������� � ���������.
	//�������� �������� ������ � �������� ��������������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� �������� ������:
	delete[] arr;
	//4) ��������� ������ ������ �� �����
	arr = buffer;
	//5) ������ ����� ����� �����, ����� �������� �������� � ����� �������, 
	//��������� � ����� ������� �������� �������, � ������� ����� ��������� ��������:
	arr[n] = value;
	//6) ����� ���������� �������� � ������, ���������� ��� ��������� ������������� �� 1:
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

template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	//�������������� ������ ����������:
	//1) ������� �������� ������ ����������, �������� �� 1 ������� ������:
	T** buffer = new T*[rows + 1]{};
	//2) �������� ������ ����� �� ��������� ������� ����������, � ��������:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� �������� ������ ����������:
	delete[] arr;
	//4) ������� ����� ������, � ��������� �� ����� � ����� ������� ����������:
	buffer[rows] = new T[cols]{};
	//5) ����� ����, ��� � ������ ���������� ������, ���������� ��� ����� ����������� �� 1:
	rows++;
	//6) ���������� ����� ������ �� ����� ������:
	return buffer;
}
template<typename T>T** pop_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T*[--rows]{};
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr[rows];	//������� ������ �� ������
	delete[] arr;
	return buffer;
}

template<typename T>void  push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template<typename T>void  pop_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}