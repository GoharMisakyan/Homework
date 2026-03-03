// Ex 3.29.cpp



#include <iostream>
using namespace std;


bool perfect(int number);

int main()
{
    cout << "Perfect numbers between 1 and 1000:\n\n";

    for (int i = 1; i <= 1000; i++)
    {
        if (perfect(i))
        {
            cout << i << " = ";

            int sum = 0;

            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    cout << j;

                    sum += j;

                    if (sum < i)
                        cout << " + ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}

bool perfect(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return (sum == number);
}