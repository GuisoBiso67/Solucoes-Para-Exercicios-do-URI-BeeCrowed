#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, cont=1, i;
    cin >> x;
    i=x;
    do{
        if(i%2 != 0){
            cout << i << endl;
            cont++;
        }
        i++;
    }while(cont<=6);
}