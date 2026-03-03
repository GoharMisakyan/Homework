// Ex3.12.cpp 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double calculateCharges(double hours);

int main()
{
    double hours1, hours2, hours3;
    double charge1, charge2, charge3;
    double totalHours, totalCharges;

    cout << "Enter hours parked for car 1: ";
    cin >> hours1;

    cout << "Enter hours parked for car 2: ";
    cin >> hours2;

    cout << "Enter hours parked for car 3: ";
    cin >> hours3;


    charge1 = calculateCharges(hours1);
    charge2 = calculateCharges(hours2);
    charge3 = calculateCharges(hours3);

    totalHours = hours1 + hours2 + hours3;
    totalCharges = charge1 + charge2 + charge3;

    cout << fixed << setprecision(2);
    cout << "\nCar\tHours\tCharge\n";

    cout << "1\t" << hours1 << "\t" << charge1 << endl;
    cout << "2\t" << hours2 << "\t" << charge2 << endl;
    cout << "3\t" << hours3 << "\t" << charge3 << endl;

    cout << "TOTAL\t" << totalHours << "\t" << totalCharges << endl;

    return 0;
}

double calculateCharges(double hours)
{
    double charge = 2.00;

    if (hours > 3.0)
        charge += 0.50 * ceil(hours - 3.0);

    if (charge > 10.00)
        charge = 10.00;

    return charge;
}