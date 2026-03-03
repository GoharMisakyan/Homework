// Ex 3.30.cpp 



#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int count = 0;

    for (int i = 2; i <= 10000; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            count++;
        }
    }

    cout << "\n\nTotal primes: " << count << endl;

    return 0;
}

//for ex 3.30(b)
//bool isPrime(int n)
//{
//    if (n <= 1)
//        return false;
//
//    for (int i = 2; i <= n / 2; i++)
//    {
//        if (n % i == 0)
//            return false;
//    }
//
//    return true;
//}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}