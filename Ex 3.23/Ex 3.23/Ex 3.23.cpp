// Ex 3.23.cpp 


#include <iostream>
using namespace std;


void printPattern(int side, char fillCharacter);

int main()
{
    int side;
    char fillCharacter;

    cout << "Enter side length: ";
    cin >> side;

    cout << "Enter fill character: ";
    cin >> fillCharacter;

    printPattern(side, fillCharacter);

    return 0;
}


void printPattern(int side, char fillCharacter)
{
    for (int row = 1; row <= side; row++)
    {
        for (int col = 1; col <= side; col++)
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
}