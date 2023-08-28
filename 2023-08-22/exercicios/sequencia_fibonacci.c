#include <stdio.h>

int seq_fibo_it(int n){
    int sequencia[n];
    sequencia[0] = 0;
    sequencia[1] = 1;
    if(n <= 0){
        printf("Não existe sequencia de 0\n");
        return 0;
    }
    if(n == 1){
        printf("IT - Sequencia de fibonacci: 0\n");
        return 0;
    }

    printf("IT - Sequencia de fibonacci: ");
    for (int i = 1; i < n; ++i) {
        sequencia[i + 1] = sequencia[i] + sequencia[i - 1];
        printf("%d ", sequencia[i - 1]);
    }
}