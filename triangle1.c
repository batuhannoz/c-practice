#include <stdio.h>

int main(){
    char batuhan[7] = "batuhan";
    for(int i=0;i<7;i++){
        printf("\n");
        for(int j=0;j<i+1;j++){
            printf("%c", batuhan[j]);
        }
    }
    return 0;
}