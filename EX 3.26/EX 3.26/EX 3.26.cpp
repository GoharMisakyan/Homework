// EX 3.26.cpp :


#include <iostream>
using namespace std;

int secondsSince12(int hours, int minutes, int seconds);

int main()
{
    int h, m, s;

    cout << "Enter time (hh mm ss): ";
    cin >> h >> m >> s;

    if (h < 1 || h > 12 || m < 0 || m > 59 || s < 0 || s > 59)
    {
        cout << "Invalid time input.\n";
    }
    else
    {
        cout << "Seconds since last 12: "
            << secondsSince12(h, m, s) << endl;
    }

    return 0;
}

int secondsSince12(int hours, int minutes, int seconds)
{
    if (hours == 12)
        hours = 0;

    return hours * 3600 + minutes * 60 + seconds;
}