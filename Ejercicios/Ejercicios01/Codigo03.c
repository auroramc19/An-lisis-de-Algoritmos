#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int i, j, n,cont=0,k;

    if(narg!=2){
        printf("\nIntroduce una n");
        exit(1);
    }

    n = atoi(varg[1]);

    for(i=0; i<n*5; i+=2){
        for(j=0; j<2*n; j++){
            for(k=j; k<n; k++){
                printf("\n%d Argoritmos",++cont);
                //++cont;
            }
        }
    }
    //printf("%d",cont);
}


