/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01 / 1 подгруппа
	Task#: 5.11
*/

#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	cout << " Программа вычисляет произведение двух матриц. \n\n ";

	int line_size_A,  column_size_B, size_A_B;
	int i, j;

	cout << " Введите колличество строк в матрице А : ";

	while (!(cin >> line_size_A))
	{
		cin.clear();
		while (cin.get() != '\n');
	  cout << " Ошибка! Введена буква " << endl;
		cout << " Введите колличество строк в матрице A : ";
	}

	cout << " Введите количество столбцов в матрице А и количество строк в матрице В :  "; 

	while (!(cin >> size_A_B))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << " Ошибка! Введена буква " << endl;
		cout << " Введите количество столбцов в матрице А и количество строк в матрице В : ";
		}

	cout << " Введите колличество столбцов в матрице В : ";

	while (!(cin >> column_size_B))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << " Ошибка! Введена буква " << endl;
		cout << " Введите колличество столбцов в матрице B : ";
	}

	int** aArr = new int* [line_size_A];

	for (i = 0; i < line_size_A; i++)
		
		aArr[i] = new int[size_A_B];

	for (i = 0; i < line_size_A; i++)
	{
		for (j = 0; j < size_A_B; j++)
		{
			aArr[i][j] = rand() % 100;
		}
	}


	cout << " Матрица А: " << endl;

	for (i = 0; i < line_size_A; i++)
	{
		for (j = 0; j < size_A_B; j++){
			cout << aArr[i][j] << '\t';
		}
		cout << endl;
	}
	
	int** bArr = new int* [size_A_B];

	for (i = 0; i < size_A_B; i++)

			bArr[i] = new int[column_size_B];

	for (i = 0; i < size_A_B; i++)
	{
		for (j = 0; j < column_size_B; j++)
		{
			bArr[i][j] = rand() % 100;
		}
	}

	cout << " Матрица В: " << endl;

	for (i = 0; i < size_A_B; i++)
	{
		for (j = 0; j < column_size_B; j++) {
			cout << bArr[i][j] << '\t';
		}
		cout << endl;
	}


	int** cArr = new int* [i];

	for (i = 0; i < line_size_A; i++)

		cArr[i] = new int[j];

	for (i = 0; i < line_size_A; i++)

		for (j = 0; j < column_size_B; j++)
		{
			cArr[i][j] = 0;

			for (int k = 0; k <= column_size_B + 1; k++) {

				cArr[i][j] += (aArr[i][k] * bArr[k][j]);
			}
		}

	cout << " Матрица С: " << endl;

	for (i = 0; i < line_size_A; i++)
	{
		for (j = 0; j < column_size_B; j++) {
			cout << cArr[i][j] << '\t';
		}
		cout << endl;
	}
	delete[] aArr;
	delete[] bArr;
	delete[] cArr;

	system ("pause");
	return 0;

}
