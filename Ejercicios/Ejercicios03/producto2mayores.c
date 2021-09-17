#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N_VECES 10000
/*DEFINICIÓN DE FUNCIONES*/
int siExisteN_en_A(int *A, int n, int num);
void generarArreglo(int *A,int n);

int main(int argc, char* argv[]){
    int n,i=0,*A,k,cont=0,mayor1,mayor2;
    float promedio;
    
	if (argc!=2) { //Si no se introducen exactamente 2 argumentos (Cadena de ejecución y cadena=n)
		printf("\nIndique el tamanio del algoritmo");
		exit(1);
	} else { //Tomar el segundo argumento como tamaño del arreglo
		n=atoi(argv[1]);
	}

    A = malloc(sizeof(int)*n); //asignamos el tamaño del arreglo de acuerdo al valor n 
    
    if(A == NULL) //en caso de que no se haya llenado correctamente y el arreglo no tenga elementos
        exit(1);
    
    /*for(i=0;i<n;i++) //llenamos el arreglo 
		scanf("%d", &A[i]);*/
	

    for(k=0; k<N_VECES; k++){ // realizamos N_VECES iteraciones el algoritmos
        
        //mandamos a llamar la función para crear un arreglo de números aleatorios para caso medio
        generarArreglo(A,n); 
        /*for(int l=0; l<n; l++)
            printf("\n%d", A[l]);*/

        cont=0; //variable auxiliar para contabilizar las operaciones básicas

        if(A[0] > A[1]){
            cont++; // if true
            mayor1 = A[0]; cont++; //asignacion mayor1
            mayor2 = A[1]; cont++; //asignacion mayor2
        } else {
            cont++; //if false
            mayor1 = A[0]; cont++;//asignnacion mayor1
            mayor2 = A[1]; cont++;//asignacion mayor2
        }
        
        i = 2;
        while (i < n){
            if(A[i] > mayor1){
                cont++; //if1 true
                mayor2 = mayor1; cont++; //asignacion mayor2
                mayor1 = A[i]; cont++; //asignacion mayor1
            } else if(A[i] > mayor2){
                cont++; //if2 true
                mayor2 = A[i]; cont++;//asignacion mayor2
            } else {
                cont +=2; //en caso de que ninguno de los if's de arriba se cumpla
            }
            i++;
        }
        promedio = promedio + (float)cont; //se va sumando las operaciones totales de cada iteración
    }
    promedio = promedio/N_VECES;//se obtiene el promedio de las operaciones totales de cada iteración
    printf("\nPromedio = %f operaciones",promedio);
    printf("\nTotal de operaciones: %d",cont);
    
}

/*Esta función tiene como propósito crear un arreglo de n números aleatorios
Recibe como parámetros el arreglo A y el tamaño del arreglo n.*/
void generarArreglo(int *A,int n){
    int i, j, num;
    srand(time(NULL));

    for (i=0; i<n; i++){
        while(siExisteN_en_A(A, n, num = rand()%100000));
        A[i] = num;
    }
}

/*Esta función nos ayuda a verificar si se repite algún número que será insertado 
al arreglo, y si es el caso, busca otro para ingresarlo y que no haya números repetidos
en el arreglo.

Recibe como parámteros el arreglo A, el tamaño del arreglo y el número que será o 
no insertado al arreglo.*/
int siExisteN_en_A(int *A, int n, int num){
    int i, r=0;

    for(i=0; i<n && !r; i++){
        if(A[i] == num)
            r=1;
    }
    return r;
}

