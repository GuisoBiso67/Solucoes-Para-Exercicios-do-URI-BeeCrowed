/*

    ATENÇÃO
    WARNING

    TENTATIVA 1, ESSE NÃO FUNCIONA
    TRY 1, THIS DOESN'T WORK

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int startHour, endHour, startMinute, endMinute, hours=0, minutes=0;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    if (startHour == startMinute && startHour == endHour && startHour == endMinute && startMinute == endHour && startMinute == endMinute && endHour == endMinute){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }

    if (startMinute > endMinute){
        for (int i=startMinute; i<60; i++){
            minutes++;
        }
        if(endMinute > 0){
            minutes = minutes + endMinute;
        }
    }else{
        for (int i=startMinute; i<endMinute; i++){
            if(i == 60){
                i=1;
            }else{
                minutes++;
            }
        }
    }

    if (startHour > endHour){
        for (int i=startHour; i<24; i++){
            hours++;
        }
        if(endHour > 0){
            hours = hours + endHour;
        }
    }else{
        for (int i=startHour; i<endHour; i++){
            if(i == 24){
                i=1;
            }else{
                hours++;
            }
        }
    }

    if (minutes >= 60){
        hours++;
        minutes -= 60;
    }

    if (startMinute > endMinute && startHour < endHour){
        hours--;
    }

    cout << "O JOGO DUROU " << hours <<  " HORA(S) E " << minutes << " MINUTO(S)" << endl;
}

/*
    16 2 == 10
    14 2 == 12
*/

/*else{
        if (startMinute > endMinute){
            for (int i=startMinute; i<60; i++){
                minutes++;
            }
            if(endMinute > 0){
                minutes = minutes + endMinute;
                cout << "O JOGO DUROU " << minutes <<  " HORA(S)" << endl;
            }else{
                cout << "O JOGO DUROU " << minutes <<  " HORA(S)" << endl;
            }
        }else{
            for (int i=startMinute; i<endMinute; i++){
                if(i == 60){
                    i=1;
                }else{
                    minutes++;
                }
            }
            cout << "O JOGO DUROU " << minutes <<  " HORA(S)" << endl;
        }
    }*/

/*
    SOLUÇÃO POSSÍVEL
    POSSIBLE SOLUTION

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