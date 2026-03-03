// Ex 3.18.cpp :



#include <iostream>
using namespace std;


int integerPower(int base, int exponent);

int main()
{
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (positive integer): ";
    cin >> exponent;

    cout << base << "^" << exponent
        << " = " << integerPower(base, exponent) << endl;

    return 0;
}


int integerPower(int base, int exponent)
{
    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}