#include <bits/stdc++.h>
using namespace std;

int high(int a, int b, int c){
    int high;
    high = a;
    if (high < b){
        high = b;
    }
    if (high < c){
        high = c;
    }
    return high;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << high(a,b,c) << " eh o maior" << endl;
}