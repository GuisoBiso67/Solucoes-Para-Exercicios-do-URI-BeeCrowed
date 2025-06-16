#include <stdio.h>
#include <stdlib.h>

// nada funciona

int main(){
    int day, dayE, hour, hourE, minute, minuteE, seconds, secondsE; // E = end,

    scanf("Dia %d", &day);
    scanf("%d : %d : %d", &hour, &minute, &seconds);
    scanf("Dia %d", &dayE);
    scanf("%d : %d : %d", &hourE, &minuteE, &secondsE);

    day = dayE - day;
    hour = hourE - hour;
    minute = minuteE - minute;
    seconds = secondsE - seconds;

    if(seconds<0){
        seconds+=60;
        minute--;
    }
    if(minute<0){
        minute+=60;
        hour--;
    }
    if(hour<0){
        hour+=24;
        day--;
    }

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", seconds);
}