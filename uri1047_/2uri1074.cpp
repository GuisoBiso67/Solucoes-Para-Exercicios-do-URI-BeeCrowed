/*

    ATENÇÃO
    WARNING

    TENTATIVA 2, ESSE NÃO FUNCIONA
    TRY 2, THIS DOESN'T WORK

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int startHour, endHour, startMinute, endMinute, hours, minutes;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    if (startHour == startMinute && startHour == endHour && startHour == endMinute && startMinute == endHour && startMinute == endMinute && endHour == endMinute){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }

    hours = endHour - startHour;
    if (hours < 0){
        hours = 24 + (endHour - startHour);
    }

    minutes = endMinute - startMinute;
    if (minutes < 0){
        minutes = 60 + (endMinute - startMinute);
        hours--;
    }

    cout << "O JOGO DUROU " << hours <<  " HORA(S) E " << minutes << " MINUTO(S)" << endl;
}

/*
    OUTRA SOLUÇÃO POSSÍVEL
    OTHER POSSIBLE SOLUTION

#include <stdio.h>

void main() {
    int h1, m1, s1, h2, m2, s2, tempo, hr, min;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (h2 <= h1 && m2 <= m1) {
    h2 = h2 + 24;
    } else if (m2 <= m1) {
    m2 = m2 + 60;
    h2 = h2 - 1;
    }

    s1 = (h1 * 3600) + (m1 * 60);
    s2 = (h2 * 3600) + (m2 * 60);

    tempo = (s2 - s1);
    hr = tempo / 3600;
    min = (tempo - (hr * 3600)) / 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
}
*/
