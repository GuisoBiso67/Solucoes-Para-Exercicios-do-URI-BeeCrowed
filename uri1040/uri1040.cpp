#include <bits/stdc++.h>
using namespace std;

float mediaInicial(float n1, float n2, float n3, float n4){
    return (((n1*2)+(n2*3)+(n3*4)+(n4*1))/(10));
}

float mediaComExame(float mediaInicial, float notaExame){
    return ((mediaInicial+notaExame) / (2));
}

int main(){
    float n1,n2,n3,n4,notaExame;
    cin >> n1 >> n2 >> n3 >> n4;
    if (mediaInicial(n1,n2,n3,n4) < 7 && mediaInicial(n1,n2,n3,n4) >= 5.0){
        cout << "Media: " << fixed << setprecision(1) << mediaInicial(n1,n2,n3,n4) << endl;
        cout << "Aluno em exame." << endl;
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << endl;
        if (mediaComExame(mediaInicial(n1,n2,n3,n4),notaExame) >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << mediaComExame(mediaInicial(n1,n2,n3,n4),notaExame) << endl;
        }
        else{
            cout << "Aluno reprovado. " << endl;
            cout << "Media final: " << fixed << setprecision(1) << mediaComExame(mediaInicial(n1,n2,n3,n4),notaExame) << endl;
        }
    }
    else if(mediaInicial(n1,n2,n3,n4) >= 7.0){
        cout << "Media: " << fixed << setprecision(1) << mediaInicial(n1,n2,n3,n4) << endl;
        cout << "Aluno aprovado." << endl;
    }
    else{
        cout << "Media: " << fixed << setprecision(1) << mediaInicial(n1,n2,n3,n4) << endl;
        cout << "Aluno reprovado." << endl;
    }
}