#include <stdio.h>
#include "conta_vogal.h"

void conta_vogal(){
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char caractere;
    printf("Entre com uma frase:");
    scanf("%c", &caractere);
    do{
        switch (caractere) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            case 'A': a++; break;
            case 'E': e++; break;
            case 'I': i++; break;
            case 'O': o++; break;
            case 'U': u++; break;
        }
        scanf("%c", &caractere);
    }while(caractere != '\n');
    printf("Numero de vogais:\n");
    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
}