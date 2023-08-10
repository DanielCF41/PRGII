#include <stdio.h>
#include <time.h>
#include "jogo_de_azar.h"

void jogo_de_azar(){
    int numero;
    int numero_digitado = -1;
    int repetidos[100] = {};
    int i = 0, j, repeticao;

    srand( (unsigned) time(NULL) );
    numero = (rand() % 100) + 1;

    do{
        repeticao = 0;

        repetidos[i] = numero_digitado;

        for(j = 0; j <= i; j++){
            if(numero_digitado == repetidos[j]) {
                repeticao++;
            }
        }

        if(repeticao > 1){
            printf("Voce ja escolheu %d vezes o numero %d.\n", repeticao, numero_digitado);
        }
        printf("Tente outra vez!\n");
        printf("Digite um numero (0 a 100):");
        scanf("%d", &numero_digitado);
        i++;
    }while(numero_digitado != numero);
    printf("Parebens voce acertou!\n");
}