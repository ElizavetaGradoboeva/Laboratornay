#include <iostream>

using namespace   std;

int limit();

int main()
{
	cout << "The program calculates the arithmetic mean for the array elements.\n" << endl;
 
	int put_limit = limit();
	int i, *array;
	double sum = 0;

	cout << "Enter the array elements:";

	for (i = 0; i < put_limit; i++)
	{
		cin >> array [i];

		while (!(cin >> array [i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error! A letter is entered, repeat the input" << endl;
			cout << "Enter the variable a[i] =";
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

		if (cin.fail() || put_limit < 0)
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
