#include <stdio.h>
#include "maior_numero.h"

void encontra_maior()
{
    int i, num, num_anterior;
    printf("Entre com uma sequencia de numeros (0 para terminar):");
    scanf("%d", &num);
    for(i = 0; num != 0; i++){
        if(num > num_anterior){
            num_anterior = num;
        }
        scanf("%d", &num);
    }
    printf("O maior numero da sequencia digitada %d.\n", num_anterior);
}