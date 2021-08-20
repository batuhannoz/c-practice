#include <stdio.h>

int i,n,A[100];
int main(){
    n = 3;
   for(i=1;i<(n+1);i++){
        printf("A(%u)= %d\n",i,A[i]);
    }
    return 0;
}