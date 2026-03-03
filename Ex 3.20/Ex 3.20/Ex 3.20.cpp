// Ex 3.20.cpp 

#include <iostream>
using namespace std;


bool multiple(int firstNum, int secondNum);

int main()
{
    int num1, num2;

    cout << "Enter pairs of integers (Ctrl+Z to stop):\n";

    while (cin >> num1 >> num2)
    {
        if (multiple(num1, num2))
            cout << num2 << " is a multiple of " << num1 << endl;
        else
            cout << num2 << " is NOT a multiple of " << num1 << endl;
    }

    return 0;
}


bool multiple(int firstNum, int secondNum)
{
    return (secondNum % firstNum == 0);
}