#include <iostream>
#include <cmath>


using namespace std;

class Algebraic_form
{
public:
    double Re;
    double Im;
};

class Trigonometric_form
{
public:
    double phi;
    double r;
};

void ShowA(Algebraic_form a)
{
    if (a.Im >= 0)
    {
        cout << "В алгебраической форме получилось комплексное число вида: " << a.Re << " + " << a.Im << "i" << endl;
    }
    else
    {
        cout << "В алгебраической форме получилось комплексное число вида: " << a.Re << " - " << (a.Im) * (-1) << "i" << endl;
    }
}

void ShowT(Trigonometric_form a)
{
    cout << "В тригонометрической форме получилось комплексное число вида: " << a.r << "*( cos(" << a.phi << ") + i*(sin(" << a.phi << ")) )" << endl;
}

Algebraic_form trigonometric_to_algebraic(Trigonometric_form a)
{
    Algebraic_form tmp;

    tmp.Re = a.r * cos(a.phi);
    tmp.Im = a.r * sin(a.phi);

    return tmp;
}

Trigonometric_form algebraic_to_trigonometric(Algebraic_form a)
{
    Trigonometric_form tmp;

    tmp.r = sqrt((a.Re) * (a.Re) + (a.Im) * (a.Im));
    tmp.phi = atan(a.Im / a.Re);

    return tmp;
}

Trigonometric_form operator^ (Trigonometric_form a, int b)
{
    Trigonometric_form z;

    z.r = pow(a.r, b);
    z.phi = a.phi * b;

    return z;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\tПрограмма для реализации комплексных чисел в алгебраической и тригонометрической формах.\nПутем перегрузки операторов предусмотреть возможность возведения чисел в целочисленную степень. Результат- число в алгебраической форме." << endl;

    cout << "\nВведите один, если число в алгебраической форме или другую цифру, если число в тригометрической форме" << endl;

    int k; 

    Algebraic_form alg;
    Trigonometric_form trig;

    cin >> k;

    if (k == 1)
    {
        cout << "Введите действительную часть числа:" << endl;

        while (!(cin >> alg.Re))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введенна буква, повторите попытку." << endl;
            cout << "Введите действительную часть числа: ";
        }

        cout << "Введите мнимую часть числа:" << endl;

        while (!(cin >> alg.Im))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введенна буква, повторите попытку." << endl;
            cout << "Введите мнимую часть числа: ";
        }

        ShowA(alg);

        trig = algebraic_to_trigonometric(alg);
        ShowT(trig);
    }
    else
    {
        cout << "Введите модуль r комплексного числа: " << endl;

        while (!(cin >> trig.r))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введенна буква, повторите попытку." << endl;
            cout << "Введите модуль r комплексного числа: ";
        }

        cout << "Введите угол phi комплексного числа: " << endl;
       
        while (!(cin >> trig.phi))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Ошибка! Введенна буква, повторите попытку." << endl;
            cout << "Введите угол phi комплексного числа: ";
        }

        ShowT(trig);
    }
    cout << "\nВведите в какую степень возвести число:" << endl;

    int a;

    while (!(cin >> a))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Ошибка! Введенна буква, повторите попытку." << endl;
        cout << "Введите в какую степень возвести число: ";
    }

    trig = trig ^ a;

    ShowT(trig);

    alg = trigonometric_to_algebraic(trig);
    cout << "\nРезультат работы программы : " << endl;

    ShowA(alg);

    return 0;
}
