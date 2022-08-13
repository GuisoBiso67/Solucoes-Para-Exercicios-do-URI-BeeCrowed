#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfDays, years=0, months=0;
    cin >> numberOfDays;
    while (numberOfDays >= 365){
        numberOfDays -= 365;
        years += 1;
    }
    while (numberOfDays >= 30){
        numberOfDays -= 30;
        months += 1;
    }
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << numberOfDays << " dia(s)" << endl;
}