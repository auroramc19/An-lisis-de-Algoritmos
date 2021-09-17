#include <stdio.h>
#include <stdlib.h>

int main(int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int n = atoi(varg[1]);
    
    int anterior, actual, aux; n_var+=3;
   
    anterior = 1; n_inst++;
    actual = 1; n_inst++;

    while(n > 2){
        n_inst++;//true while
        aux = anterior + actual; n_inst+=2;
        anterior = actual; n_inst++;
        actual = aux; n_inst++;
        n = n - 1; n_inst+=2;
    }
    n_inst++; //false while
    
    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}
