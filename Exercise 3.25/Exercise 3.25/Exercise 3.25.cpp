// Exercise 3.25.cpp :


#include <iostream>
using namespace std;

void printDigits(int number);

int main()
{
    int number;

    cout << "Enter an integer (1 - 32767): ";
    cin >> number;

    printDigits(number);

    return 0;
}

void printDigits(int number)
{
    int divisor = 10000;

    while (number / divisor == 0)
        divisor /= 10;

    while (divisor > 0)
    {
        cout << number / divisor << "  ";
        number %= divisor;
        divisor /= 10;
    }

    cout << endl;
}