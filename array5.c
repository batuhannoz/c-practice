/*dizinin en büyük ve en küçük elemanları*/

#include <stdio.h>

int i,n,enk,enkyer,enb,enbyer,A[100];

int main(){
    printf("dizinin eleman sayısını giriniz:");
    scanf("%u", &n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("A(%u)=",i);
        scanf("%d",&A[i]);       
    }
    printf("\n");
    enk = A[0];
    enkyer = 0;
    enb = A[0];
    enbyer = 0;
    for(i=0;i<n;i++){
        if(A[i]<enk){
            enk=A[i];
            enkyer=i;
        }    
        if(A[i]>enb){
            enb=A[i];
            enbyer=i;
        }
    }               
    printf("dizinin en büyük elemanı %d\'dir ve %i. sıradadır\n",enb, enbyer);
    printf("dizinin en küçük elemanı %d\'dir ve %i. sıradadır",enk, enkyer); 
    return 0;
}