/*sayı tahmin*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bs, tahmin, s=0;

int main(){
    srand ( time(NULL) );
    int bs = rand() % 100;
    do{
        printf("tahmininiz:");
        scanf("%u", &tahmin);
        s++;
        if(tahmin>bs){
            printf("daha küçük bir sayı giriniz...");
        }
        if(tahmin<bs){
            printf("daha büyük bir sayı giriniz...");
            
        }
        printf("\n");

    } while(tahmin!=bs);

    printf(" %u. tahimininde buldun" , s);

    return 0;
    
}

