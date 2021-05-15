#include <iostream>
#include <math.h>

using namespace std;

class Polynome

{
public:

    Polynome()
    {
        do
        {
            cout << "Введите действительный коэффициент А: ";
            
            while (!(cin >> A))
            {
                cin.clear();
                while (cin.get() != '\n');
                cout << "Ошибка! Введена буква, повторите попытку." << endl;
                cout << "Введите действительный коэффициент А:";
            }

            if (A == 0)
            {
                cout << "Для полинома третьей степени коэффициент А не должен быть равен 0!" << endl;
            }
        } while (A == 0);

        cout << "Введите действительный коэффициент B: ";

        while (!(cin >> B))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введена буква, повторите попытку." << endl;
            cout << "Введите действительный коэффициент B: ";
        }
        cout << "Введите действительный коэффициент C: ";

        while (!(cin >> C))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введена буква, повторите попытку." << endl;
            cout << "Введите действительный коэффициент C:";
        }

        cout << "Введите действительный коэффициент D: ";

        while (!(cin >> D))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введена буква, повторите попытку." << endl;
            cout << "Введите действительный коэффициент D: ";
        }
    }

    void Extremum()
    {
      double a, b, c; 
      double Discriminant;
      
        a = A * 3;
        b = B * 2;
        c = C;

        Discriminant = b * b - 4 * a * c;

        if (Discriminant < 0)
        {
            cout << "\nДискрименант < 0. Точек экстремума нет" << endl;
        }

        if (Discriminant == 0)
        {
            double x, y;

            x = (-b) / (2 * a);

            y = A * x * x * x + B * x * x + C * x + D;

            if (a > 0)
            {
                cout << "\nВ точке (x,y) = " << "(" << x << "," << y << ")" << " минимум" << endl;
            }
            if (a < 0)
            {
                cout << "\nВ точке (x,y) = " << "(" << x << "," << y << ")" << " максимум" << endl;
            }
        }

        if (Discriminant > 0)
        {
            double x_1, y_1, x_2, y_2;
            double  result_1, result_2;

            x_1 = ((-b) + abs(sqrt(Discriminant))) / (2 * a);

            y_1 = A * x_1 * x_1 * x_1 + B * x_1 * x_1 + C * x_1 + D;

            x_2 = ((-b) - abs(sqrt(Discriminant))) / (2 * a);

            y_2 = A * x_2 * x_2 * x_2 + B * x_2 * x_2 + C * x_2 + D;

            result_1 = a * 2 * x_1 + b;
            result_2 = a * 2 * x_2 + b;

            if (result_1 > 0)
            {
                cout << "\nВ точке (x,y) = " << "(" << x_1 << "," << y_1 << ")" << " минимум" << endl;
            }
            else
            {
                cout << "\nВ точке (x,y) = " << "(" << x_1 << "," << y_1 << ")" << " максимум" << endl;
            }
            if (result_2 < 0)
            {
                cout << "\nВ точке (x,y) = " << "(" << x_2 << "," << y_2 << ")" << " максимум" << endl;
            }
            else
            {
                cout << "\nВ точке (x,y) = " << "(" << x_2 << "," << y_2 << ")" << " минимум" << endl;
            }
        }
    }
private:
 
    double A;
    double B;
    double C;
    double D;
};


int main()
{
    setlocale(LC_ALL, "rus");
    
    cout << "\tПрограмма вычисляет точки экстремума полинома третьей степени.\n" << endl;
    cout << "Введите коэффициенты A,B,C,D полинома третей степени Ax^3 + Bx^2 + Cx + D: " << endl;

    Polynome x;
    x.Extremum();
}
