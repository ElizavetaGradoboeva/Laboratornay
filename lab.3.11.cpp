/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01 / 1 подгруппа
	Task#: 3.11

*/
#include <iostream>

using namespace   std;

int limit();

int main()
{	 
	
	cout << "The program calculates the arithmetic mean for the array elements" << endl;

	int i;
	double array[1000], sum = 0;
	int put_limit = limit();


	for (i = 0; i < put_limit; i++)
	{
		cout << "Enter the array elements[" << i << "]\n" ;

		while (!(cin >> array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error! A letter is entered, repeat the input" << endl;
			cout << "Enter the variable array[" << i << "]\n";
		}

		sum += array[i];
	}

	cout << "Arithmetic mean: \n" << sum / put_limit << endl;

	system("pause");
	return 0;

}

 int limit()
{
	while (true)
	{
		cout << "Enter the dimension of the array: \n";

		int put_limit;

		cin >> put_limit;

		if (cin.fail() || put_limit <= 0)
		{
			cin.clear();
			cin.ignore(32800, '\n');
		}
		else
		{
			cin.ignore(32800, '\n');

			return put_limit;
		}
	}
} 

