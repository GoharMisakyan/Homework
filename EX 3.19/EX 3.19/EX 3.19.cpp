// EX 3.19.cpp 


#include <iostream>
#include <cmath>
using namespace std;


double hypotenuse(double side1, double side2);

int main()
{
    cout << "Triangle  Side1  Side2  Hypotenuse\n";

    cout << "1         3.0    4.0    "
        << hypotenuse(3.0, 4.0) << endl;

    cout << "2         5.0    12.0   "
        << hypotenuse(5.0, 12.0) << endl;

    cout << "3         8.0    15.0   "
        << hypotenuse(8.0, 15.0) << endl;

    return 0;
}


double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2);
}