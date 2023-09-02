#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

void matriz(int **mat, int coluna, int linha){
    for(int i = 0; i < coluna; i++){
        mat[i] = (int *) calloc(coluna, sizeof(int *));
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++) {
            mat[i][j] = (rand() % 10);
            printf("| %2d |", mat[i][j]);
        }
        printf("\n");
    }
}

void adiciona_matriz(int **a, int **b, int coluna, int linha){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("| %2d |", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

void multiplica_matriz(int **a, int  **b, int coluna, int linha){

    int m;
    int s = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            for(int k = 0; k < coluna; k++){
                m = a[i][k] * b[k][j];
                s += m;
            }
            printf("| %2d |", s);
        }
        printf("\n");
    }
}

void main_matriz(){
    int linha, coluna, opcao;

    printf("1 - Para adição de matrizes\n2 - Para multiplicação de matrizes\nDigite:");
    scanf("%d", &opcao);
    printf("Entre com a quantidade de linhas da matriz:");
    scanf("%d", &linha);
    printf("Entre com a quantidade de colunas da matriz:");
    scanf("%d", &coluna);

    int **a = (int**) calloc(linha, sizeof(int*));
    int **b = (int**) calloc(linha, sizeof(int*));

    srand((unsigned) time(NULL));

    printf("\nMATRIZ A\n");
    matriz(a, coluna, linha);
    printf("\nMATRIZ B\n");
    matriz(b, coluna, linha);

    switch (opcao) {
        case 1: printf("\nRESULTADO\n");
                 adiciona_matriz(a, b, coluna, linha);
                 break;
        case 2: printf("\nRESULTADO\n");
                multiplica_matriz(a, b, coluna, linha);
    }


}
