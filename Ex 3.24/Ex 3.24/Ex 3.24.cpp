// Ex 3.24.cpp 



#include <iostream>
using namespace std;


void printSquare(int side, char fill);
void printRectangle(int width, int height, char fill);
void printTriangle(int height, char fill);

int main()
{
    cout << "Square:\n";
    printSquare(4, '*');

    cout << "\nRectangle:\n";
    printRectangle(6, 3, '#');

    cout << "\nRight Triangle:\n";
    printTriangle(5, '@');

    return 0;
}

void printSquare(int side, char fill)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
            cout << fill;
        cout << endl;
    }
}

void printRectangle(int width, int height, char fill)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            cout << fill;
        cout << endl;
    }
}

void printTriangle(int height, char fill)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
            cout << fill;
        cout << endl;
    }
}