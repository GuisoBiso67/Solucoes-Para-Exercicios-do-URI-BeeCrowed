#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, r[3];
    cin >> a >> b >> c;

    if (a >= b && a >= c){
        r[2] = a;
        if (b >= c){
            r[1] = b;
            r[0] = c;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }else{
            r[1] = c;
            r[0] = b;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }
    }

    if (b >= a && b >= c){
        r[2] = b;
        if (a >= c){
            r[1] = a;
            r[0] = c;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }else{
            r[1] = c;
            r[0] = a;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }
    }

    if (c >= a && c >= b){
        r[2] = c;
        if (a >= b){
            r[1] = a;
            r[0] = b;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }else{
            r[1] = b;
            r[0] = a;
            for(int i=0;i<3;i++){
                cout << r[i] << endl;
            }
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            return 0;
        }
    }
}