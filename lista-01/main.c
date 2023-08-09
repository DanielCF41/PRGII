#include <stdio.h>
#include "maior_numero.c"

int main(int argc, char *argv[]) {

    int digito;

    printf("Bem-vindo ao nosso sistema!\n\nEscolha um exercicio:\n\n");
    printf("1- Maior numero.\n2- Sorteador de numeros."
           "\n3- Quantidade de numeros pares e impares.\n4- Jogo de azar.\n"
           "5- Numero excluido do vetor.\n6- Matriz identidade.\n"
           "7- Palindromo.\n8- Contador de vogais.\n\n");
    printf("Entre com o numero do exercicio:");
    scanf("%d", &digito);

    switch (digito) {
        case 1: encontra_maior(); break;
        case 2: printf("Nao implementado!\n"); break;
        case 3: printf("Nao implementado!\n"); break;
        case 4: printf("Nao implementado!\n"); break;
        case 5: printf("Nao implementado!\n"); break;
        case 6: printf("Nao implementado!\n"); break;
        case 7: printf("Nao implementado!\n"); break;
        case 8: printf("Nao implementado!\n"); break;
    }

    return 0;
}
