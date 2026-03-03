// Ex 3. 31.cpp 


#include <iostream>
using namespace std;

int reverseNumber(int number);

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Reversed number: "
        << reverseNumber(num) << endl;

    return 0;
}

int reverseNumber(int number)
{
    int reversed = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return reversed;
}