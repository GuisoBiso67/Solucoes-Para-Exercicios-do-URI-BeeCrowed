#include <bits/stdc++.h>
using namespace std;

double areaTriangulo(double a, double c){
    return ((a*c)/2);
}
double areaCirculo(double c){
    return ((pow(c, 2))*(3.14159));
}
double areaTrapezio(double a, double b, double c){
    return (((a+b)*c)/2);
}
double areaQuadrado(double b){
    return (b*b);
}
double areaRetangulo(double a, double b){
    return (a*b);
}

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTriangulo(a,c) << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCirculo(c) << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrapezio(a,b,c) << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQuadrado(b) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRetangulo(a,b) << endl;
}