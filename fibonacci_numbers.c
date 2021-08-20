#include <stdio.h>
unsigned N,i,t1,t2,t3;

void main(){
    printf("fibonacci sayıları\n");
    printf("terim sayısını giriniz:");
    scanf("%u",&N);
    t1 = 1;
    t2 = 1;
    printf("\n%u\t%u\t", t1, t2);
    for(i=1;i<=N;i++){
        t3 = t1 + t2;
        printf("%u\t", t3);
        t1 = t2;
        t2 = t3;

    }
}