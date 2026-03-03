// Ex 3.32.cpp 


#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Greatest Common Divisor: "
        << gcd(num1, num2) << endl;

    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}