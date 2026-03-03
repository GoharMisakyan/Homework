// EX 3.13.cpp :

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double roundToNearestInteger(double number);

int main()
{
    double number;

    cout << fixed << setprecision(2);

    cout << "Enter numbers to round (Ctrl+Z to stop):\n";

    while (cin >> number)
    {
        cout << "Original: " << number
            << "  Rounded: "
            << roundToNearestInteger(number)
            << endl;
    }

    return 0;
}


double roundToNearestInteger(double number)
{
    return floor(number + 0.5);
}