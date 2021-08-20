/*girilen dizinin elemanlarını girilen katsayıyla çarpan program*/
#include <stdio.h>

 
int A[100], n, k, B[100];


int main(){
    printf("eleman sayısını giriniz:");
    scanf("%u", &n);
    for(int i=1;i<(n+1);i++){
        printf("A(%u)=",i);
        scanf("%d", &A[i]);
    }
    printf("\nkatsayı giriniz:");
    scanf("%u", &k);
    printf("\n\nyeni diziniz:");
    for(int i=1;i<(n+1);i++){
        B[i] = k*A[i];
        printf("\n");
        printf("B[%u] = %u", i,B[i]);

    }
    return 0;
}