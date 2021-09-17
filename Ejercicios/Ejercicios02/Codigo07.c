#include <stdio.h>
#include <stdlib.h>

int main(int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int n = atoi(varg[1]);
    
    int i, j, temp; n_var+=3; 
    int lista[n-1]; n_var+= (n-1);
    printf("%d", lista[n-2]);
    for(i=0,n_inst++; i<n; i++,n_inst){
        n_inst++;//true i
        for(j=0,n_inst++; j<n-1; j++,n_inst++){
            n_inst++; //true j
            if(lista[j] > lista[j+1]){
                n_inst++;
                temp = lista[j]; n_inst++;
                lista[j] = lista[j+1]; n_inst+=2;
                lista[j+1] = temp; n_inst+=2;
            }
            n_inst++;//false if
        }
        n_inst++;//false j
    }
    n_inst++;//false i
    
    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}
