/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01
	Task#: 6.11
*/

#include <iostream>
#include <cmath> 
#include <stdlib.h>


using namespace std;

struct complex_1
{
	double Re;
	double Im;
};

struct complex_2
{
	double Re_2;
	double Im_2;
};

complex_1 entering_complex_1()
{
	complex_1 number_1;

	cout << "Введите действительную часть комплексного числа 1 : ";

	while (!(cin >> number_1.Re))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка! Введена буква" << endl;
		cout << "Введите действительную часть комплексного числа 1 :";
	}

	cout << "Введиет мнимую часть комплексного числа 1 : ";

	while (!(cin >> number_1.Im))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка! Введена буква" << endl;
		cout << "Введите действительную часть комплексного числа 1 :";
	}

	return number_1;
}

complex_2 entering_complex_2()
{
	complex_2 number_2;

	cout << "Введите действительную часть комплексного числа 2 : ";

	while (!(cin >> number_2.Re_2))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка! Введена буква" << endl;
		cout << "Введите действительную часть комплексного числа 2 :";
	}


	cout << "Введиет мнимую часть комплексного числа 2 : ";

	while (!(cin >> number_2.Im_2))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка! Введена буква" << endl;
		cout << "Введите действительную часть комплексного числа 2 :";
	};

	return number_2;
}

void output_a_complex_number_1(complex_1 chislo_1)
{
	cout << chislo_1.Re;
	if (chislo_1.Im >= 0)
		cout << " + " << chislo_1.Im << "i " << endl;
	else
		cout << " " << chislo_1.Im << "i " << endl;
}

void output_a_complex_number_2(complex_2 chislo_2)
{
	cout << chislo_2.Re_2;
	if (chislo_2.Im_2 >= 0)
		cout << " + " << chislo_2.Im_2 << "i " << endl;
	else
		cout << "  " << chislo_2.Im_2 << " i " << endl;

}

complex_1 summa(complex_1 chislo1, complex_2 chislo2, bool right = true)
{
	complex_1 sum_of_numbers;
	sum_of_numbers.Re = chislo1.Re + chislo2.Re_2;
	sum_of_numbers.Im = chislo1.Im + chislo2.Im_2;
	if (right) output_a_complex_number_1(sum_of_numbers);
	return sum_of_numbers;
}

complex_1 subtraction(complex_1 chislo1, complex_2 chislo2, bool right = true)
{
	complex_1 subtraction_of_number;
	subtraction_of_number.Re = chislo1.Re - chislo2.Re_2;
	subtraction_of_number.Im = chislo1.Im - chislo2.Im_2;
	if (right) output_a_complex_number_1(subtraction_of_number);
	return subtraction_of_number;
}

complex_1 multiplication(complex_1 chislo1, complex_2 chislo2, bool right = true)
{
	complex_1 multiplication_of_number;
	multiplication_of_number.Re = chislo1.Re * chislo2.Re_2 - chislo1.Im * chislo2.Im_2;
	multiplication_of_number.Im = chislo1.Im * chislo2.Re_2 + chislo1.Re * chislo2.Im_2;
	if (right) output_a_complex_number_1(multiplication_of_number);
	return multiplication_of_number;
}

complex_1 division (complex_1 chislo1, complex_2 chislo2, bool right = true)
{
	complex_1 temp;
	temp.Re = (chislo1.Re * chislo2.Re_2 + chislo1.Im * chislo2.Im_2) / (chislo2.Re_2 * chislo2 .Re_2 + chislo2.Im_2 * chislo2.Im_2);
	temp.Im = (chislo1.Im * chislo2.Re_2 - chislo1.Re * chislo2.Im_2) / (chislo2.Re_2 * chislo2.Re_2 + chislo2.Im_2 * chislo2.Im_2);
	if (right) output_a_complex_number_1(temp);
	return temp;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << " Программа для реализации комплексных чисел в алгебраической форме. Функции для сложения, вычитания, умножения, деления комплексных чисел. \n";

	complex_1 chislo1;
	complex_2 chislo2;

	chislo1 = entering_complex_1();
	chislo2 = entering_complex_2();
	
	cout << "Комплексное число 1 :";
	output_a_complex_number_1(chislo1);

	cout << "Комплексное число 2 : ";

	output_a_complex_number_2(chislo2);

	cout << "Сумма комплексных чисел: ";

	summa(chislo1, chislo2, true);

	cout << "Разность комплексных чисел:";

	subtraction(chislo1, chislo2,  true);

	cout << "Произведение комплексных чисел: ";

	multiplication(chislo1, chislo2,  true);
	
	cout << "Деление комплексных чисел: ";

	division (chislo1, chislo2,  true);

	return 0;
}
