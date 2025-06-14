#include <stdio.h>
#include <stdlib.h>

int availableSocket(int a, int b, int c, int d){
    return (a+b+c+d)-3;
}

int main(){
    int t1,t2,t3,t4;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    printf("%d\n", availableSocket(t1,t2,t3,t4));
}