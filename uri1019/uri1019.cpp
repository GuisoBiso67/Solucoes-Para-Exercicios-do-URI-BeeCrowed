#include <bits/stdc++.h>
using namespace std;

int main()
{
    int seconds, hours = 0, minutes = 0;
    cin >> seconds;
    while (seconds >= 3600)
    {
        seconds -= 3600;
        hours += 1;
    }
    while (seconds >= 60)
    {
        seconds -= 60;
        minutes += 1;
    }
    cout << hours << ":" << minutes << ":" << seconds << endl;
}