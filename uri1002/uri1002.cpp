#include <bits/stdc++.h>
using namespace std;

double areaCirculo(double raio){
    return (pow(raio,2)*(3.14159));
}

int main(){
    double raio;
    cin >> raio;
    cout << "A=" << fixed << setprecision(4) << areaCirculo(raio) << endl;
}