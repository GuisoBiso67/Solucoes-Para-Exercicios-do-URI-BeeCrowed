#include <bits/stdc++.h>
using namespace std;

double media(double a, double b){
    return ((((a*3.5)+(b*7.5))/(11)));
}

int main(){
    double a,b;
    cin >> a >> b;
    cout << "MEDIA = " << fixed << setprecision(5) << media(a,b) << endl;
}