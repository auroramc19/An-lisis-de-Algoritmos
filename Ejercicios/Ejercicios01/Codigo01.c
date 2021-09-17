#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int i, j=0, n,cont=0;

    if(narg!=2){
        printf("\nIntroduce una n");
        exit(1);
    }

    n = atoi(varg[1]);

    for(i=10; i<n*5; i*=2){
        printf("\n %d Algoritmos", ++j);
    }
}


