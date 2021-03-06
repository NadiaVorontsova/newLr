#include "pch.h"
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <time.h>			

using namespace std;

int main()
{
	setlocale(0, "");

	int n;
	cout << "Введите количество рядков от 2 до 100: ";
	cin >> n;
	int m;
	cout << "Введите количество столбиков от 2 до 100: ";
	cin >> m;
	int generatedArray[100][100];
	srand(time(NULL));// от текущего времени 

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			generatedArray[i][j] = rand() % 201 - 100;
			cout << setw(4) << generatedArray[i][j] << " "; // setw задає різну ширину поля виведення рядків
		}
		cout << endl;
	}

	int A[100];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < m; j++)
		{
			A[i*n + j] = generatedArray[i][j];
			cout << A[i*n + j] << "\t";//горизонтальная табуляция
		}
	}
	cout << endl;

	int B[100];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			B[i*n + j] = generatedArray[i][j];
			cout << B[i*n + j] << "\t";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
