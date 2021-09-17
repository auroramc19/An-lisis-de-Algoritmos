#include <stdio.h>
#include <stdlib.h>

int main(int narg, char** varg){
    int n_inst = 0, n_var = 0;
    int n = atoi(varg[1]);
    
    int i, k, j; n_var+=3;
    int A[n][n]; n_var += n*n;
    int B[n][n]; n_var += n*n;
    int C[n][n]; n_var += n*n;

    for(i=1, n_inst++; i<=n; i++, n_inst++){
        n_inst++; //true i
        for(j=1,n_inst++; j<=n; j++,n_inst++){
            n_inst++; //true j
            C[i][j]=0; n_inst++;
            for(k=1,n_inst++; k<=n; k++,n_inst++){
                n_inst++; //true k
                C[i][j] = C[i][j] + A[i][j] * B[k][j]; n_inst+=3;
            }
            n_inst++; //false k
        }
        n_inst++; //false j
    }
    n_inst++;//false i
    
    printf("Instrucciones: %d", n_inst);
    printf("\nVariables: %d",n_var);
}
