#include <bits/stdc++.h>
using namespace std;

int main(){
    string n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1=="vertebrado" && n2=="ave" && n3=="carnivoro"){
        cout << "aguia" << endl;
    }
    else if (n1=="vertebrado" && n2=="ave" && n3=="onivoro"){
        cout << "pomba" << endl;
    }
    else if (n1=="vertebrado" && n2=="mamifero" && n3=="onivoro"){
        cout << "homem" << endl;
    }
    else if (n1=="vertebrado" && n2=="mamifero" && n3=="herbivoro"){
        cout << "vaca" << endl;
    }
    else if (n1=="invertebrado" && n2=="inseto" && n3=="hematofago"){
        cout << "pulga" << endl;
    }
    else if (n1=="invertebrado" && n2=="inseto" && n3=="herbivoro"){
        cout << "lagarta" << endl;
    }
    else if (n1=="invertebrado" && n2=="anelideo" && n3=="hematofago"){
        cout << "sanguessuga" << endl;
    }
    else if (n1=="invertebrado" && n2=="anelideo" && n3=="onivoro"){
        cout << "minhoca" << endl;
    }
}