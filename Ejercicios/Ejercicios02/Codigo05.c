#include <stdio.h>
#include <stdlib.h>

int main(int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int n = atoi(varg[1]);
    
    int i,j,k; n_var+=3;
    int s[n]; n_var+= n;
    int s2[n]; n_var+= n;
    
    for(i=n-1,j=0,n_inst+=2; i>=0; i--,j++,n_inst+=2){
        n_inst++; //true i
        s2[j] = s[j]; n_inst++;
        for(k=0,n_inst++; k<n; k++,n_inst++){
            n_inst++; //true k
            s[i] = s2[j]; n_inst++;
        }
        n_inst++; //false k
    }
    n_inst++; //false i
    
    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}
