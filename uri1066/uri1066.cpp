#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, contPar=0, contImpar=0, contPos=0, contNeg=0;
    for (int i=0;i<5;i++){
        cin >> x;
        if (x%2==0){
            contPar++;
        }
        else{
            contImpar++;
        }

        if (x>0){
            contPos++;
        }
        if (x<0){
            contNeg++;
        }
    }
    cout << contPar << " valor(es) par(es)" << endl;
    cout << contImpar << " valor(es) impar(es)" << endl;
    cout << contPos << " valor(es) positivo(s)" << endl;
    cout << contNeg << " valor(es) negativo(s)" << endl;
}