#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int i, j, n,cont=0;

    if(narg!=2){
        printf("\nIntroduce una n");
        exit(1);
    }

    n = atoi(varg[1]);

    for(j=n; j>1; j/=2){
        if(j<(n/2)){
            for(i=0;i<n;i+=2){
                printf("\n %d Algoritmos", ++cont);
            }
        }
    }
}


