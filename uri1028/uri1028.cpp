#include <bits/stdc++.h>
using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main(){
    int a, b, ng; // ng = numeros de partidas
    cin >> ng;
    for (int i=0;i<ng;i++){
        cin >> a >> b;
        cout << mdc(a,b) << endl;
    }
    
}