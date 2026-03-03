// Ex 3.28.cpp 


#include <iostream>
using namespace std;


double smallest(double a, double b, double c);

int main()
{
    double x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Smallest number is: "
        << smallest(x, y, z) << endl;

    return 0;
}


double smallest(double a, double b, double c)
{
    double min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    return min;
}