#include <bits/stdc++.h>
using namespace std;

float liters(float hours, float speed){
    return ((hours*speed)/(12));
}

int main(){
    float hours, speed;
    cin >> hours >> speed;
    cout << fixed << setprecision(3) << liters(hours,speed) << endl;
}