// Ex 3.27.cpp



#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int f);
int fahrenheit(int c);

int main()
{
    cout << "Celsius to Fahrenheit\n";
    cout << "C     F\n";

    for (int c = 0; c <= 100; c += 10)
    {
        cout << setw(3) << c
            << setw(6) << fahrenheit(c) << endl;
    }

    cout << "\nFahrenheit to Celsius\n";
    cout << "F     C\n";

    for (int f = 32; f <= 212; f += 18)
    {
        cout << setw(3) << f
            << setw(6) << celsius(f) << endl;
    }

    return 0;
}

int celsius(int f)
{
    return 5 * (f - 32) / 9;
}

int fahrenheit(int c)
{
    return 9 * c / 5 + 32;
}