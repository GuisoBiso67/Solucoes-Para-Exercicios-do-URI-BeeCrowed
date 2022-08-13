#include <bits/stdc++.h>
using namespace std;

int main(){
    float value;
    int banknotes100=0, banknotes50=0, banknotes20=0, banknotes10=0, banknotes5=0, banknotes2=0;
    int coins1=0, coins0_50=0, coins0_25=0, coins0_10=0, coins0_05=0, coins0_01=0;
    cin >> value; 
    value += 0.001; // sem somar 0.001, fica faltando 1 moeda de R$ 0.01 em todos os casos, não sei pq
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
        coins1 += 1;
    }
    while(value >= 0.5){
        value -= 0.5;
        coins0_50 += 1;
    }
    while(value >= 0.25){
        value -= 0.25;
        coins0_25 += 1;
    }
    while(value >= 0.1){
        value -= 0.1;
        coins0_10 += 1;
    }
    while(value >= 0.05){
        value -= 0.05;
        coins0_05 += 1;
    }
    while(value >= 0.01){
        value -= 0.01;
        coins0_01 += 1;
    }
    cout << "NOTAS:" << endl;
    cout << banknotes100 << " nota(s) de R$ 100.00" << endl;
    cout << banknotes50 << " nota(s) de R$ 50.00" << endl;
    cout << banknotes20 << " nota(s) de R$ 20.00" << endl;
    cout << banknotes10 << " nota(s) de R$ 10.00" << endl;
    cout << banknotes5 << " nota(s) de R$ 5.00" << endl;
    cout << banknotes2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << coins1 << " moeda(s) de R$ 1.00" << endl;
    cout << coins0_50 << " moeda(s) de R$ 0.50" << endl;
    cout << coins0_25 << " moeda(s) de R$ 0.25" << endl;
    cout << coins0_10 << " moeda(s) de R$ 0.10" << endl;
    cout << coins0_05 << " moeda(s) de R$ 0.05" << endl;
    cout << coins0_01 << " moeda(s) de R$ 0.01" << endl;
}