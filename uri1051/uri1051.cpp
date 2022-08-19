#include <bits/stdc++.h>
using namespace std;

int main(){
    double renda;
    cin >> renda;

    if (renda >= 0 && renda <= 2000){
        cout << "Isento" << endl;
    }
    else if (renda >= 2000.01 && renda <= 3000){
        cout << "R$ " << fixed << setprecision(2) << ((renda-2000) *0.08) << endl;
    }
    else if (renda >= 3000.01 && renda <= 4500){
        cout << "R$ " << fixed << setprecision(2) << 1000*0.08 + ((renda-3000) *0.18) << endl;
    }
    else if (renda >= 4500){
        cout << "R$ " << fixed << setprecision(2) << (1000*0.08) + (1500*0.18) + ((renda-4500) *0.28) << endl;
    }
}