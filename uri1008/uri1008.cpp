#include <bits/stdc++.h>
using namespace std;

float salary(float hour, float moneyPerHour){
    return (hour*moneyPerHour);
}

int main(){
    float number, hour, moneyPerHour;
    cin >> number >> hour >> moneyPerHour;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary(hour, moneyPerHour) << endl;
}