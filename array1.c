/*diziler*/
#include <stdio.h>

int A[100],i,n;

int main(){
    printf("dizinin elemanlan sayısını giriniz:");
    scanf("%u", &n);
    printf("\n");
    for(i=1;i<(n+1);i++){
        printf("A(%u)=", i);
        scanf("%d", &A[i]);
    }
    return 0;
}