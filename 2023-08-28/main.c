#include <stdio.h>
#include <sys/time.h>

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

       // printf("IT - Sequencia de fibonacci: ");
        for (int i = 1; i < n; ++i) {
            sequencia[i + 1] = sequencia[i] + sequencia[i - 1];
          //  printf("%d ", sequencia[i - 1]);
        }
    }

long fib_rec(int n){
    if((n ==0)|| (n ==1)){
        return n;
    }
    return (fib_rec(n-1)+ fib_rec(n-2));
}

int main(int argc, char **argv) {
    struct timeval inicio, fim;


    gettimeofday(&inicio, 0);

    seq_fibo_it(32);

    gettimeofday(&fim, 0);

    long seg = fim.tv_sec - inicio.tv_sec;
    long mseg = fim.tv_usec - inicio.tv_usec;
    double tempo_total = seg + mseg * 1e-6;

    printf("Tempo gasto - IT: %f segundos.\n", tempo_total);

    gettimeofday(&inicio, 0);
    for(int i = 0; i < 8; i++) {
        fib_rec(32);
    }
    gettimeofday(&fim, 0);

    long seg1 = fim.tv_sec - inicio.tv_sec;
    long mseg1 = fim.tv_usec - inicio.tv_usec;
    double tempo_total1 = seg1 + mseg1 * 1e-6;

    printf("Tempo gasto - REC: %f segundos.\n", tempo_total1);
    return 0;
}

