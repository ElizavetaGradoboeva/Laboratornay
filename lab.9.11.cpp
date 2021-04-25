/*
	Author: Градобоева Елизавета
	Group: СБС-001-о-01
	Task#: 9.11
*/

#include <iostream>

using namespace std;

class V_Coss {

public:
	int n;
	double* p;
	V_Coss(int i, double x) {
    
		n = i;
		p = new double[n + 1];
		p[0] = 1;
		for (int k = 1; k <= n; k++) p[k] = p[k - 1] * -x * x / (2 * k * (2 * k - 1));
    
  }
	~V_Coss() { delete[] p; }
};

int main() {

	setlocale(LC_ALL, "rus");

	cout << " Программа вычисляет значение Cos." << endl;

	int n, i;
	double x, s = 0;
  
	cout << "Введите значение переменной N= ";
  
	while (!(cin >> n ))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной N= ";
	}
  
	cout << "Введите значение переменной X = ";
  
	while (!(cin >> x ))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nОшибка! Введена буква" << endl;
		cout << "ВВедите значение переменной X= ";
	}

	V_Coss obj(n, x);
  
	for (i = 0; i <= n; i++)
	  s += obj.p[i];
  
	cout << " Cos (" << x << ") = " << s << endl;
  
	return 0;
}
