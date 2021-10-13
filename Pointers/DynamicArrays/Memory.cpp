int** allocate(const int rows, const int cols)
{
	//////////////////////////////////////////////////////////////////////////////////
	//////////////		���������� ���������� ������������� �������		//////////////
	//////////////////////////////////////////////////////////////////////////////////
	//1) ������� ������ ����������:
	int** arr = new int*[rows] {};
	//2) ������� ������:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
void  clear(int** arr, const int rows)
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

int* push_back(int arr[], int& n, int value)
{
	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1]{};
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
	//�������������� ������ ����������:
	//1) ������� �������� ������ ����������, �������� �� 1 ������� ������:
	int** buffer = new int*[rows + 1]{};
	//2) �������� ������ ����� �� ��������� ������� ����������, � ��������:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� �������� ������ ����������:
	delete[] arr;
	//4) ������� ����� ������, � ��������� �� ����� � ����� ������� ����������:
	buffer[rows] = new int[cols] {};
	//5) ����� ����, ��� � ������ ���������� ������, ���������� ��� ����� ����������� �� 1:
	rows++;
	//6) ���������� ����� ������ �� ����� ������:
	return buffer;
}
int** pop_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int*[--rows]{};
	for (int i = 0; i < rows; i++)
		buffer[i] = arr[i];
	delete[] arr[rows];	//������� ������ �� ������
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