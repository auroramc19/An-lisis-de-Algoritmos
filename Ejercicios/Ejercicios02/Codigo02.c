#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int i; n_var++;

    int n = atoi(varg[1]);

    int polinomio = 0; n_var++; n_inst++;
    int A[n]; n_var+=n;
    int z = 1; n_var++;

    for(i=0, n_inst++; i<=n ; i++,n_inst++){
        n_inst++; //true i
        polinomio = polinomio * z + A[n-i]; n_inst+=4;
    }
    n_inst++; //false i

    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}