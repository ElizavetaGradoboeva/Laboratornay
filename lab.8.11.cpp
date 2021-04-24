/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01
	Task#: 8.11
*/

#include <iostream>
#include <cmath>


using namespace std;

class Vector {
	public:
		double x, y, z;
		double x1, y1, z1;
	
		void show_1() {

			cout << "Вектор 1 : " ;
			cout << "( " << x << "; " << y << "; " << z << " )";
		}
		void show_2() {

			cout << "Вектор 2 : " ;
			cout << "( " << x1 << "; " << y1 << "; " << z1 << " )";
		}
	};

int main() {

	setlocale(LC_ALL, "rus");

	cout << "Программа вычисяет значение угла между векторами."<< endl;

	Vector vector_A;

	cout << "\nВВедите значение переменной X : ";
	
	while (!(cin >> vector_A.x ))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной X :";
	}

	cout << "ВВедите значение переменной  Y : ";

	while (!(cin >> vector_A.y))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной Y :";
	}
	cout << "ВВедите значение переменной Z : ";

	while (!(cin >> vector_A.z))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной Z :";
	}
	
	vector_A.show_1();

	Vector vector_B;

	cout << "\nВВедите значение переменной X : ";
	
	while (!(cin >> vector_B.x1))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной X :";
	}
	cout << "ВВедите значение переменной  Y : ";
	
	while (!(cin >> vector_B.y1))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной Y :";
	}
	cout << "ВВедите значение переменной Z : ";
	
	while (!(cin >> vector_B.z1))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной Z :";
	}

	vector_B.show_2();

	double phi;
	double numerator , denominator ;

	numerator =  (vector_A.x * vector_B.x1)+(vector_A.y * vector_B.y1) + (vector_A.z * vector_B.z1);

	denominator = (sqrt( pow(vector_A.x,2) + pow(vector_A.y, 2) + pow (vector_A.z, 2))) * (sqrt(pow(vector_B.x1, 2) + pow(vector_B.y1, 2) + pow(vector_B.z1, 2)));

	phi = ((acos(numerator / denominator) * 180) / 3.14);

	cout << "\n Результат вычисления : " << phi << endl;

	return 0;
}
