#include <bits/stdc++.h>
using namespace std;

double areaTrapezio(double x, double y, double z){
    return (((x+y)*z)/2);
}

int main(){
    double a, b, c, s;
    cin >> a >> b >> c;

    if (a >= b && a >= c){
        s = b+c;
        if (s > a){
            cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
            return 0;
        }else{
            cout << "Area = " << fixed << setprecision(1) << areaTrapezio(a, b, c) << endl;
            return 0;
        }
    }

    if (b >= a && b >= c){
        s = a+c;
        if (s > b){
            cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
            return 0;
        }else{
            cout << "Area = " << fixed << setprecision(1) << areaTrapezio(a, b, c) << endl;
            return 0;
        }
    }

    if (c >= a && c >= b){
        s = a+b;
        if (s > c){
            cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
            return 0;
        }else{
            cout << "Area = " << fixed << setprecision(1) << areaTrapezio(a, b, c) << endl;
            return 0;
        }
    }
}