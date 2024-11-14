#include <bits/stdc++.h>
using namespace std;

unsigned long long int fatorial(int a){
    if (a == 0){
        return 1;
    }else{
        return (a*fatorial(a-1));
    }
}

int main(){
    unsigned long long int m, n, soma;
    while (cin >> m >> n){
        soma = fatorial(m) + fatorial(n);
        cout << soma << endl;
    }
}
