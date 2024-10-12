#include <bits/stdc++.h>
using namespace std;

int main(){
    int j1=0, j2=0, np=1, a, b;
    while (np != 0){
        cin >> np;
        if (np == 0){
            return 0;
        }
        for (int i=0;i<np;i++){
            cin >> a >> b;
            if (a==b){
                j1+=0;
                j2+=0;
            }
            else if (a<b){
                j2+=1;
            }
            else{
                j1+=1;
            }
        }
        cout << j1 << " " << j2 << endl;
        j1 = 0;
        j2 = 0;
    }
}