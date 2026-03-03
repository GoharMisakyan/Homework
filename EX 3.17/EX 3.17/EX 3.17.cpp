// EX 3.17.cpp :



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    // a) 2, 4, 6, 8, 10
    cout << 2 + 2 * (rand() % 5) << endl;

    // b) 3, 5, 7, 9, 11
    cout << 3 + 2 * (rand() % 5) << endl;

    // c) 6, 10, 14, 18, 22
    cout << 6 + 4 * (rand() % 5) << endl;

    return 0;
}