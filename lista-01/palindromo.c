#include <stdio.h>
#include "palindromo.h"

int palindromo(){
    char caractere;
    char palavra[50];
    int num_caractere = 0;
    int i, j = 0;

    printf("Entre com uma palavra ou uma frase:");
    scanf("%c", &caractere);
    do{
        if(caractere != ' ') {
            palavra[num_caractere] = caractere;
            num_caractere++;
        }
        scanf("%c", &caractere);
    }while(caractere != '\n');

    char palavra_invertida[num_caractere];

    for(i = num_caractere - 1; i >= 0; i--){
        palavra_invertida[j] = palavra[i];
        j++;
    }
    for(i = 0; i < num_caractere; i++) {
        if (palavra_invertida[i] != palavra[i]) {
            printf("Nao e palindromo.\n");
            return 0;
        }
    }
    printf("E palindromo.\n");
}