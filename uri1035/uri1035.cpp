#include <bits/stdc++.h>
using namespace std;

int calculations(int a, int b, int c, int d){
    int trueOrFalse;
    if ((b > c) && (d > a) && ((c+d) > (a+b)) && (c && d >= 0) && (a % 2 == 0)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (calculations(a,b,c,d) == true){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }
}