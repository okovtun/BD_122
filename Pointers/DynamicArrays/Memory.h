#pragma once

template<typename T>T** allocate(const int rows, const int cols);
template<typename T>void  clear(T** arr, const int rows);

template<typename T>T* push_back(T arr[], int& n, T value);
template<typename T>T* insert(T arr[], int& n, T value, int index);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** push_row_front(T** arr, int& rows, const int cols);
template<typename T>T** pop_row_back(T** arr, int& rows, const int cols);

template<typename T>void  push_col_back(T** arr, const int rows, int& cols);
template<typename T>void  pop_col_back(T** arr, const int rows, int& cols);
#include"Memory.cpp"