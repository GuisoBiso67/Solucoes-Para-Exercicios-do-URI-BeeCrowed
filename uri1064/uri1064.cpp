#include <bits/stdc++.h>
using namespace std;

int main(){
    float x, soma=0, media;
    int cont=0;
    for (int i=0;i<6;i++){
        cin >> x;
        if (x > 0){
            cont++;
            soma = soma + x;
        }
    }
    media = (soma/cont);
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
}