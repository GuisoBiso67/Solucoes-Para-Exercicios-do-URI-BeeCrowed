#include <bits/stdc++.h>
using namespace std;

int main(){
    double value, reajuste, newValue;
    cin >> value;

    if (value <= 400){
        reajuste = ((value*15)/100);
        newValue = value + reajuste;
        
        cout << "Novo salario: " << fixed << setprecision(2) << newValue << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (value >= 400.01 && value <= 800){
        reajuste = ((value*12)/100);
        newValue = value + reajuste;
        
        cout << "Novo salario: " << fixed << setprecision(2) << newValue << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (value >= 800.01 && value <= 1200){
        reajuste = ((value*10)/100);
        newValue = value + reajuste;
        
        cout << "Novo salario: " << fixed << setprecision(2) << newValue << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (value >= 1200.01 && value <= 2000){
        reajuste = ((value*7)/100);
        newValue = value + reajuste;
        
        cout << "Novo salario: " << fixed << setprecision(2) << newValue << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else{
        reajuste = ((value*4)/100);
        newValue = value + reajuste;
        
        cout << "Novo salario: " << fixed << setprecision(2) << newValue << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }
}