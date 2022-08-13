#include <bits/stdc++.h>
using namespace std;

float totalPrice(int q1, int q2, float price1, float price2){
    return ((q1*price1)+(q2*price2));
}

int main(){
    int code1, code2, qu1, qu2;
    float price1, price2;
    cin >> code1 >> qu1 >> price1 >> code2 >> qu2 >> price2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalPrice(qu1,qu2,price1,price2) << endl;
}