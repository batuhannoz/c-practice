#include <stdio.h>
#include <curses.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int A[10][10],i,j,N;
int main(){
    printf("kare matrisinin tipini giriniz:");
    scanf("%u",&N);
    printf("\n A matrisi \n");
    printf("-------------\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            gotoxy(5*j+5,5+i);
            scanf("%u",&A[i][j]);
        }
    }
    return 0;
}
