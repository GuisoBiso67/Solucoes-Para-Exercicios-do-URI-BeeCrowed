#include <bits/stdc++.h>
using namespace std;

float mediaDeGasto(int x, float y){
    return (x/y);
}

int main(){
    int x;
    float y;
    cin >> x >> y;
    cout << fixed << setprecision(3) << mediaDeGasto(x,y) << " km/l" << endl;
}