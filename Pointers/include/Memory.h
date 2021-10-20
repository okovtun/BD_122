#pragma once
int** allocate(const int rows, const int cols);
void  clear(int** arr, const int rows);

int* push_back(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value, int index);

int** push_row_back(int** arr, int& rows, const int cols);
int** push_row_front(int** arr, int& rows, const int cols);
int** pop_row_back(int** arr, int& rows, const int cols);

void  push_col_back(int** arr, const int rows, int& cols);
void  pop_col_back(int** arr, const int rows, int& cols);