#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, initialValue;
    int banknotes100=0, banknotes50=0, banknotes20=0, banknotes10=0, banknotes5=0, banknotes2=0, banknotes1=0;
    cin >> value;
    initialValue = value;
    while(value >=100){
        value -= 100;
        banknotes100 += 1;
    }
    while(value >= 50){
        value -= 50;
        banknotes50 += 1;
    }
    while(value >= 20){
        value -= 20;
        banknotes20 += 1;
    }
    while(value >= 10){
        value -= 10;
        banknotes10 += 1;
    }
    while(value >= 5){
        value -= 5;
        banknotes5 += 1;
    }
    while(value >= 2){
        value -= 2;
        banknotes2 += 1;
    }
    while(value >= 1){
        value -= 1;
        banknotes1 += 1;
    }
    cout << initialValue << endl;
    cout << banknotes100 << " nota(s) de R$ 100,00" << endl;
    cout << banknotes50 << " nota(s) de R$ 50,00" << endl;
    cout << banknotes20 << " nota(s) de R$ 20,00" << endl;
    cout << banknotes10 << " nota(s) de R$ 10,00" << endl;
    cout << banknotes5 << " nota(s) de R$ 5,00" << endl;
    cout << banknotes2 << " nota(s) de R$ 2,00" << endl;
    cout << banknotes1 << " nota(s) de R$ 1,00" << endl;
}