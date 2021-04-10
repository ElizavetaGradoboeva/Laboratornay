/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01 / 1 подгруппа
	Task#: 5.11
*/

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");

    cout << "\n     Программа вычисляет произведение двух матриц. \n\n ";

    int line_size_A, size_A_B, column_size_B;
   
    cout << " Введите колличество строк в матрице А : ";

    while (!(cin >> line_size_A))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Ошибка! Введена буква " << endl;
        cout << "Введите колличество строк в матрице A : ";
    }

    cout << "" Введите количество столбцов в матрице А и количество строк в матрице В : "";

    while (!(cin >> size_A_B))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Ошибка! Введена буква " << endl;
        cout << "Введите количество столбцов в матрице А и количество строк в матрице В : ";
    }

    cout << " Введите количество столбцов в матрице А и количество строк в матрице В : ";

    while (!(cin >> column_size_B))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Ошибка! Введена буква " << endl;
        cout << "Введите колличество столбцов в матрице B : ";
    }

    int** A, ** B, ** C;

    A = new int* [line_size_A];
    
    for (int i = 0; i < line_size_A; i++)
    {
        A[i] = new int[size_A_B];
       
        for (int j = 0; j < size_A_B; j++)
        {
            A[i][j] = rand() % 10;
           
        }
    }
  
    B = new int* [size_A_B];
   
    for (int i = 0; i < size_A_B; i++)
    {
        B[i] = new int[column_size_B];
     
        for (int j = 0; j < column_size_B; j++)
        {
            B[i][j] = rand() % 10;
        }
    }
  
    C = new int* [line_size_A];
    for (int i = 0; i < line_size_A; i++)
    {
        C[i] = new int[column_size_B];
        for (int j = 0; j < column_size_B; j++)
        {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < line_size_A; i++)
        for (int j = 0; j < column_size_B; j++)
            for (int v = 0; v < size_A_B; v++)
                C[i][j] += A[i][v] * B[v][j];


    cout << "\n Матрица А :" << endl;
    for (int i = 0; i < line_size_A; i++)
    {
        for (int j = 0; j < size_A_B; j++)
            cout << A [i][j] << " ";
        cout << endl;
    }

    cout << "\n Матрица В : "<< endl;
    for (int i = 0; i < size_A_B; i++)
    {
        for (int j = 0; j < column_size_B; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    cout << "\n Матрица С = (А*В)" << endl;
    for (int i = 0; i < line_size_A; i++)
    {
        for (int j = 0; j < column_size_B; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < line_size_A; i++)
    {
        delete[]A[i];
        delete[]B[i];
        delete[]C[i];
    }
    delete[]A;
    delete[]B;
    delete[]C;

    return 0;
}
