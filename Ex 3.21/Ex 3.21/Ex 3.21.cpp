// Ex 3.21.cpp 


#include <iostream>
using namespace std;


bool even(int number);

int main()
{
    int value;

    cout << "Enter integers (Ctrl+Z to stop):\n";

    while (cin >> value)
    {
        if (even(value))
            cout << value << " is even\n";
        else
            cout << value << " is odd\n";
    }

    return 0;
}

bool even(int number)
{
    return (number % 2 == 0);
}