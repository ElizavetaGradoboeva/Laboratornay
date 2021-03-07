/*
    Author: Gradoboeva Elizaveta
    Group: SBS-001-O-01
    Task: 11
*/

#include <iostream>
#include <cmath>

using namespace   std;

double angle();
double V0();

int main()
{
    cout << "The program calculates the flight time of a body thrown at an angle to the horizon.\n" << endl;

    const double Pi = 3.14;
    const double g = 9.80665;
    
    double put_angle = angle();
    double put_V0 = V0();
    double time;
    double angle_in_radian;

    angle_in_radian = (put_angle * Pi) / 180;
    time = (2 * put_V0 * sin(angle_in_radian)) / g;

    cout << "The flight time is  " << time << " second ";

    system("pause");
    return 0;
}

double angle()
{
    while (true) 
    {
        cout << "Enter the angle in degrees from 0 to 90: "; 

        double put_angle ;
        cin >> put_angle;

        if (cin.fail() || put_angle < 0 || put_angle > 90)
        {
            cout << "Error! A letter is entered or the angle value does not lie between 0 and 90.\n" << endl;

            cin.clear(); 
            cin.ignore(32800, '\n'); 
        }
        else 
        {
            cin.ignore(32800, '\n'); 

            return put_angle;
        }
    }
}

double V0()
{
    while (true)
    {
        cout << "Enter the initial velocity of the body: ";

        double put_V0;
        cin >> put_V0;

        if (cin.fail() || put_V0 < 0 )
        {
            cout << "Error! A letter is entered or the speed is negative.\n" << endl;

            cin.clear();
            cin.ignore(32800, '\n');
        }
        else
        {
            cin.ignore(32800, '\n');

            return put_V0;
        }
    }
}

