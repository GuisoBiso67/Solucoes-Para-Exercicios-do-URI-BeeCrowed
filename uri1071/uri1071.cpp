#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,soma=0;
    cin >> x >> y;
    if (x > y){
        for (int i=y+1;i<x;i++){
            if(i%2 != 0){
                soma += i;
            }
        }
    }
    else if (x == y){
        cout << 0 << endl;
    }
    else{
        for (int i=x;i<y;i++){
            if(i%2 != 0){
                soma += i;
            }
        }
    }
    cout << soma << endl;
}