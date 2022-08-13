#include <bits/stdc++.h>
using namespace std;

double media0(double a, double b, double c){
    double media, x=2, y=3, z=5;
    media = (((a*x) + (b*y) + (c*z)) / (x+y+z));
    return media;
}

int main(){
    double a,b,c,media;
    cin >> a >> b >> c;
    media = media0(a,b,c);
    cout << "MEDIA = " << fixed << setprecision(1) << media <<endl;
}