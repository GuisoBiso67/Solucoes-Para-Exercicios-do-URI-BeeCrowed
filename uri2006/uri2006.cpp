#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, winner=0;
    int a,b,c,d,e;

    cin >> t;
    cin >> a >> b >> c >> d >> e;

    if (a == t){
        winner++;
    }
    if (b == t){
        winner++;
    }
    if (c == t){
        winner++;
    }
    if (d == t){
        winner++;
    }
    if (e == t){
        winner++;
    }

    cout << winner << endl;
}