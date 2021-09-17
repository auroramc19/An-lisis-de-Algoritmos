#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int i, j, n,cont=0,k;

    if(narg!=2){
        printf("\nIntroduce una n");
        exit(1);
    }

    n = atoi(varg[1]);

    i=n;
    while(i>=0){
        //printf("j= %d i= %d",j,i);
        for(j=n; i<j; i-=2,j/=2){
            printf("\n%d Algoritmos",++cont);
        }
    }
}