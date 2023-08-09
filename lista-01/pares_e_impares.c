#include <stdio.h>
#include "pares_e_impares.h"

void conta_par_e_impar(){
    int i, numero;
    int par = 0, impar = 0;
    int positivo = 0, negativo = 0;
    printf("Entre com uma sequencia de 10 numeros inteiros:");
    for(i = 0; i < 10; i++){
        scanf("%d", &numero);
        if(numero % 2 == 0){
            par++;
        }else{
            impar++;
        }
        if(numero >= 0){
            positivo++;
        }else{
            negativo++;
        }
    }
    printf("%d numeros sao pares, e %d sao impares.\n", par, impar);
    printf("%d numeros sao positivos, e %d sao negativos.\n", positivo, negativo);
}