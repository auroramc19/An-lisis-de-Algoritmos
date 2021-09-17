#include <stdio.h>
#include <stdlib.h>

int main (int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int n = atoi(varg[1]);

    int i, j, n, temp=0; n_var+=3;//variables i, j y temp

    n = atoi(varg[1]);

    int A[n+1]; n_var+= n+1; //arreglo A de tamaño n+1

    for(i=1,n_inst++; i<n; i++,n_inst++){ //asignación, condición, aritmética
        n_inst++;   //true i
        for(j=n, n_inst++; j>1; j/=2, n_inst++){
            n_inst++;   //true j                               
            temp = A[j]; n_inst++; //asignacion
            A[j] = A[j+1]; n_inst+=2; //asignacion, aritmetica
            A[j+1] = temp; n_inst+=2; //asignacion
        }
        n_inst++; //false j
    }
    n_inst++; //false i

    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}

