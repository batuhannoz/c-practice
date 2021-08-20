/*dizi elemanları toplamı*/
#include <stdio.h>

int i,n,A[100],t=0;
int main(){
    printf("dizinin eleman sayısını giriniz:");
    scanf("%u",&n);
    for(i=1;i<(n+1);i++){
        printf("A(%u)=",i);
        scanf("%d", &A[i]);
    }
    for(i=1;i<(n+1);i++){
        t+=A[i];   
    }
    printf("dizinin elemanları toplamı %u",t);
    return 0; 
}