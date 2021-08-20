#include <stdio.h>

int N,satirs,sutuns,i,x,a,Z;

int main(){
    printf("bir tek sayi giriniz:");
    scanf("%u", &N);
    
    
    if((N-1) % 2 == 0){
        x = (N-1)/2;
        sutuns = x;
        satirs = 0;

        Z = N;
        for(x=x+1;x>0;x--){
            printf("\n");

            satirs = satirs + 1;
            sutuns = (N-1)/2;
            for(sutuns = x-1; sutuns>0 ; sutuns--){
                printf(" ");
            }

            for(i=0;i<(satirs*2)-1;i++){
                printf("*");
            }
        
        }
        for(int i=0;i<(N-1)/2;i++){
            Z = Z-2;
            printf("\n");
            for(int j=0;j<i+1;j++){
                printf(" ");
            }
            for(a=0;a<Z;a++){
                printf("*");

            }
        }   
    }
    else{
        printf("yanlis veri girisi!");
    }
    return 0;
}