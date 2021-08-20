#include <stdio.h>

int main(){
    int n;
    printf("agacin uzunlugunu giriniz:");
    scanf("%u",&n);
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<i+1;j++){
            printf("*");
        }
    }
    return 0;
}