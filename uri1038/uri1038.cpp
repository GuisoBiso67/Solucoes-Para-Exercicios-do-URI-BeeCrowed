#include <bits/stdc++.h>
using namespace std;

float cachorroQuente(int amount){
    return 4.00*amount;
}
float xSalada(int amount){
    return 4.50*amount;
}
float xBacon(int amount){
    return 5.00*amount;
}
float torradaSimples(int amount){
    return 2.00*amount;
}
float refrigerante(int amount){
    return 1.50*amount;
}

int main(){
    int product,amount;
    cin >> product >> amount;
    if (product==1){
        cout << "Total: R$ " << fixed << setprecision(2)<< cachorroQuente(amount) << endl;
    }
    if (product==2){
        cout << "Total: R$ " << fixed << setprecision(2) << xSalada(amount) << endl;
    }
    if (product==3){
        cout << "Total: R$ " << fixed << setprecision(2) << xBacon(amount) << endl;
    }
    if (product==4){
        cout << "Total: R$ " << fixed << setprecision(2) << torradaSimples(amount) << endl;
    }
    if (product==5){
        cout << "Total: R$ " << fixed << setprecision(2) << refrigerante(amount) << endl;
    }
}