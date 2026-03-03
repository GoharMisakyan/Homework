// EX 3.14.cpp 


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);

int main()
{
    double number;

    cout << fixed << setprecision(4);
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nOriginal number:        " << number << endl;
    cout << "Rounded to integer:     " << roundToInteger(number) << endl;
    cout << "Rounded to tenths:      " << roundToTenths(number) << endl;
    cout << "Rounded to hundredths:  " << roundToHundredths(number) << endl;
    cout << "Rounded to thousandths: " << roundToThousandths(number) << endl;

    return 0;
}


double roundToInteger(double number)
{
    return floor(number + 0.5);
}

double roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(double number)
{
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number)
{
    return floor(number * 1000 + 0.5) / 1000;
}