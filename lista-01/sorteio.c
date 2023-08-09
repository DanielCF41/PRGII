#include<time.h>
#include<stdio.h>
#include "sorteio.h"

void sorteio()
{
    int numero, digito;
    printf("Entre com um numero (1 a 10):");
    scanf("%d", &digito);
    srand( (unsigned) time(NULL) );
    numero = rand()%10 + 1;
    if(digito == numero){
        printf("Parabens voce acertou!\n");
    }else{
        printf("Tente outra vez!\n");
    }
    return 0;
}