#include<iostream>
//$(SolutionDir)\include;
#include"Array.h"
#include"Memory.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}