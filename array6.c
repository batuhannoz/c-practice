/*dizi elemanlarını sıralama*/
#include <stdio.h>

int i,j,N,g,A[100];

int main(){
    printf("dizinin eleman sayısını giriniz");
    scanf("%u",&N);
    printf("\n");
    for(i=0;i<N;i++){
        printf("A(%u)=",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[j]<A[i]){
                g=A[i];
                A[i]=A[j];
                A[j]=g;
            }
        }
    }
    printf("\nSıralı dizi:\n");
    printf("=============\n");
    for(i=0;i<N;i++){
        printf("A(%u)=%d\n",i,A[i]);
    }
    return 0;
}   