/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01
	Task#: 1.11

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "The program calculates the square root of a complex number." << endl;

	const double PI = 3.1416;
	double x, y, z, iph, X1, Y1, X, Y;

	cout << "Enter the variable X =";

	while (!(cin >> x))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error! A letter is entered, repeat the input" << endl;
			cout << "Enter the variable X =";
		}

	cout << "Enter the variable Y =";

	while (!(cin >> y))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error!A letter is entered, repeat the input" << endl;
			cout << "Enter the variable Y =";
		}


	iph = atan2(y, x) * 180 / PI;
	z = sqrt(x * y + y * y);
	X = sqrt(z) * cos((iph + 2 * PI) / 2);
	Y = sqrt(z) * sin((iph + 2 * PI) / 2);

	cout << "X =" << X << "\t" "Y =" << Y << endl;

	X1 = sqrt(z) * cos(iph / 2);
	Y1 = sqrt(z) * sin(iph / 2);

	cout << "X1 =" << X1 << "\t" "Y1 =" << Y1 << endl;

	system("pause");
	return 0;
}
