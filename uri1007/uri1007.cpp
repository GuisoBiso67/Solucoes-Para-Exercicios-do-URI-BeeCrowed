#include <bits/stdc++.h>
using namespace std;

int diferenca(int a, int b, int c, int d){
    return (((a*b)-(c*d)));
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << diferenca(a,b,c,d) << endl;
}