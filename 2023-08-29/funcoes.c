#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

void adicao_matriz(){
    int n;
    int j = 0;
    printf("Entre com o tamanho da matriz:");
    scanf("%d", &n);

    int **a = (int**) calloc(n, sizeof(int*));
    int **b = (int**) calloc(n, sizeof(int*));
    int **c = (int**) calloc(n, sizeof(int*));

    srand((unsigned) time(NULL));

    for(int i = 0; i < n; i++){
        a[i] = (int *) calloc(n, sizeof(int *));
    }
    printf("MATRIZ A = ");
    for(int i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            a[i][j] = (rand() % 10);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        b[i] = (int *) calloc(n, sizeof(int *));
    }
    printf("MATRIZ B = ");
    for(int i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            b[i][j] = (rand() % 10);
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("MATRIZ RESULTANTE: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; i++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
