#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    int cont=0;
    for(int i=0;i<6;i++){
        cin >> x;
        if (x > 0){
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;
}