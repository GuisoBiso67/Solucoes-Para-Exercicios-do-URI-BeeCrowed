#include <bits/stdc++.h>
using namespace std;

int main(){
    int start, end, hours=0;
    cin >> start >> end;

    if (start == end){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }else{
        if (start > end){
            for (int i=start; i<24; i++){
                hours++;
            }
            if(end > 0){
                hours = hours + end;
                cout << "O JOGO DUROU " << hours <<  " HORA(S)" << endl;
            }else{
                cout << "O JOGO DUROU " << hours <<  " HORA(S)" << endl;
            }
        }else{
            for (int i=start; i<end; i++){
                if(i == 24){
                    i=1;
                }else{
                    hours++;
                }
            }
            cout << "O JOGO DUROU " << hours <<  " HORA(S)" << endl;
        }
    }
}

/*
    16 2 == 10
    14 2 == 12    
*/