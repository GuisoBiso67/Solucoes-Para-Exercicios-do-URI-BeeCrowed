#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, winner=0;
    int p[5];

    cin >> t;
    for (int i=0;i<5;i++){
        cin >> p[i];
        if (p[i] == t){
            winner++;
        }
    }
    cout << winner << endl;
}