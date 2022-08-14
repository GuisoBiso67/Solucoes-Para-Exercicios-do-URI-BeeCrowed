#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c, order[3];
    cin >> a >> b >> c;

    if (a >= b && a >= c){
        order[0] = a;
        if (b > c){
            order[1] = b;
            order[2] = c;
        }else{
            order[1] = c;
            order[2] = b;
        }
    }
    if (b >= a && b >= c){
        order[0] = b;
        if (a > c){
            order[1] = a;
            order[2] = c;
        }else{
            order[1] = c;
            order[2] = a;
        }
    }
    if (c >= a && c >= b){
        order[0] = c;
        if (a > b){
            order[1] = a;
            order[2] = b;
        }else{
            order[1] = b;
            order[2] = a;
        }
    }

    if (order[0] >= (order[1] + order[2])){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if ((order[0]*order[0]) == ((order[1]*order[1]) + (order[2]*order[2]))){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if ((order[0]*order[0]) > ((order[1]*order[1]) + (order[2]*order[2]))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ((order[0]*order[0]) < ((order[1]*order[1]) + (order[2]*order[2]))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (a == b && a == c && b == c){
        cout << "TRIANGULO EQUILATERO" << endl;
        return 0;
    }
    if (a == b || a == c || b == c){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}