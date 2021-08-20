/* iki boyutlu dizi uygulamaları*/

#include <stdio.h>

int A[10][10],i,j,N;

int main(){
    printf("kare matrisinin tipini giriniz:");
    scanf("%u",&N);
    printf("\nkare matrisi\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("A(%u,%u)=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    return 0;
}