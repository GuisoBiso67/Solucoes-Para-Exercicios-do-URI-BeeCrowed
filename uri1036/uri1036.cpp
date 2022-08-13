#include <bits/stdc++.h>
using namespace std;

double eqX1(double a, double b, double c){
    double delta;
    delta = (pow(b,2) - (4*a*c));
    if(delta < 0){
        return false;
    }
    else{
        return (((-b) + (sqrt(delta))) / (2*a));
    }
}

double eqX2(double a, double b, double c){
    double delta;
    delta = (pow(b,2) - (4*a*c));
    if(delta < 0){
        return false;
    }
    else{
        return (((-b) - (sqrt(delta))) / (2*a));
    }
}

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    if(a==0 || eqX1(a,b,c)==false){
        cout << "Impossivel calcular" << endl;
    }
    else{
        cout << "R1 = " << fixed << setprecision(5) << eqX1(a,b,c) << endl;
        cout << "R2 = " << fixed << setprecision(5) << eqX2(a,b,c) << endl;
    }    
}