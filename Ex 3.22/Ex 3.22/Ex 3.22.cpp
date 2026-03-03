// Ex 3.22.cpp 


#include <iostream>
using namespace std;


void printSquare(int side);

int main()
{
    int side;

    cout << "Enter the side length: ";
    cin >> side;

    printSquare(side);

    return 0;
}


void printSquare(int side)
{
    for (int row = 1; row <= side; row++)
    {
        for (int col = 1; col <= side; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}