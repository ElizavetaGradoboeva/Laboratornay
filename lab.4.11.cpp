/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01
	Task#: 4.11
*/

#include <iostream>
#include <cmath>

using namespace std;

double put_matrix[2][2];
double checking_matrix_elements();
void matrix();
void calculating_the_determinant(double put_matrix[2][2]);


int main() 
{
	cout << "The program calculates the determinant of a 2x2 matrix.\n";

	matrix();

	system("pause");
	return 0;
}

double checking_matrix_elements()
{
    while (true)
    {
        double put_matrix;

        while (!(cin >> put_matrix ))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Error! A letter is entered, repeat the input" << endl;
            cout << "Enter the matrix element\n";
        }
        return put_matrix;
    }
}
void matrix()
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " Enter the " << i + 1 << " " << j + 1 << "  matrix element: ", put_matrix[i][j] = checking_matrix_elements();
        }
    }
    calculating_the_determinant( put_matrix);
}

void  calculating_the_determinant(double put_matrix[2][2])
{
    double determinant;

    determinant = put_matrix[0][0] * put_matrix[1][1] - put_matrix[0][1] * put_matrix[1][0];

    cout << "Matrix determinant = " << determinant << endl;
}

