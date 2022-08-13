#include <bits/stdc++.h>
using namespace std;

double distancia(double x1, double x2, double y1, double y2){
    return sqrt((pow((x2-x1),(2)))+(pow((y2-y1),(2))));
}

int main(){
    double x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(4) << distancia(x1,x2,y1,y2) << endl;
}