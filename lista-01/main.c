#include <stdio.h>
#include "maior_numero.c"
#include "sorteio.c"
#include "pares_e_impares.c"
#include "jogo_de_azar.c"
#include "vetor.c"
#include "matriz.c"
#include "palindromo.c"
#include "conta_vogal.c"

int main(int argc, char *argv[]) {

    int digito;

    printf("Bem-vindo ao nosso sistema!\n\nEscolha um exercicio:\n");
    printf("====================================================\n\n");
    printf("1- Maior numero.\n2- Sorteador de numeros."
           "\n3- Quantidade de numeros pares e impares.\n4- Jogo de azar.\n"
           "5- Numero excluido do vetor.\n6- Matriz identidade.\n"
           "7- Palindromo.\n8- Contador de vogais.\n\n");

    printf("====================================================\n");
    printf("Entre com o numero do exercicio:");
    scanf("%d", &digito);
    printf("====================================================\n");

    switch (digito) {
        case 1: printf("EXERCICIO 01\n\n");encontra_maior(); break;
        case 2: printf("EXERCICIO 02\n\n");sorteio(); break;
        case 3: printf("EXERCICIO 03\n\n");conta_par_e_impar(); break;
        case 4: printf("EXERCICIO 04\n\n");jogo_de_azar(); break;
        case 5: printf("EXERCICIO 05\n\n");vetor(); break;
        case 6: printf("EXERCICIO 06\n\n");matriz(); break;
        case 7: printf("EXERCICIO 07\n\n");palindromo(); break;
        case 8: printf("EXERCICIO 08\n\n");conta_vogal(); break;
    }

    return 0;
}
