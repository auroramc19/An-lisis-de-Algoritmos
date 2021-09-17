#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int i, j, n,cont=0,k;

    if(narg!=2){
        printf("\nIntroduce una n");
        exit(1);
    }

    n = atoi(varg[1]);

    for(i=1; i<4*n; i*=2){
        for(j=i; j<5*n; j+=3){
            //printf("\n %d Algoritmos",++cont);
            cont++;
        }
    }
    printf("%d",cont);
}