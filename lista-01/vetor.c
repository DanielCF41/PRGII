#include <stdio.h>
#include "vetor.h"

void vetor (){
    float tam;
    int soma, numero, total = 0;
    int i;

    printf("Entre com o tamanho do vetor:");
    scanf("%f", &tam);

    soma = (tam/2) * (tam + 1);

    printf("Entre com os elementos do vetor:");
    for(i = 1; i < tam; i++){
        scanf("%d", &numero);
        total += numero;
    }
    printf("Numero faltante no vetor %d.\n", soma - total);
    return 0;
}