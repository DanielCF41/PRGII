#include <stdio.h>
#include <libprg/libprg.h>
typedef struct{
    double total_bubble;
    double total_selection;
    double total_insertion;
    double total_bubble_cpu;
    double total_selection_cpu;
    double total_insertion_cpu;
} alg_time_t;

int main() {
    int size;
    long seg;
    long mseg;

    alg_time_t t;
    tempo_t time;
    sort_t s;
    clock_t start, end;

    printf("−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");
    printf("APP ORDENAÇÃO\n");
    printf("−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");
    printf("Entre com o tamanho do vetor:");
    scanf("%d", &size);
    printf("−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");

    create_S(&s, size);
    povoar_S(&s, size);

    start = clock();
    inicio(&time);
    bubble_sort_c(&s);
    fim(&time);
    end = clock();
    seg = time.fim_t.tv_sec - time.inicio_t.tv_sec;
    mseg = time.fim_t.tv_usec - time.inicio_t.tv_usec;
    t.total_bubble = seg + mseg * 1e-6;
    t.total_bubble_cpu = ((double) (end - start)) / CLOCKS_PER_SEC;

    povoar_S(&s, size);

    start = clock();
    inicio(&time);
    insertion_sort(&s);
    fim(&time);
    end = clock();
    seg = time.fim_t.tv_sec - time.inicio_t.tv_sec;
    mseg = time.fim_t.tv_usec - time.inicio_t.tv_usec;
    t.total_insertion = seg + mseg * 1e-6;
    t.total_insertion_cpu = ((double) (end - start)) / CLOCKS_PER_SEC;

    povoar_S(&s, size);

    start = clock();
    inicio(&time);
    selection_sort_c(&s);
    fim(&time);
    end = clock();
    seg = time.fim_t.tv_sec - time.inicio_t.tv_sec;
    mseg = time.fim_t.tv_usec - time.inicio_t.tv_usec;
    t.total_selection = seg + mseg * 1e-6;
    t.total_selection_cpu = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Tamanho do vetor: %d\n", size);
    printf("−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n"
           "Algoritmo Relógio (seg) CPU (seg)\n"
           "−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");
    printf("bolha        %f      %f\n", t.total_bubble, t.total_bubble_cpu);
    printf("inserção     %f      %f\n", t.total_insertion, t.total_insertion_cpu);
    printf("seleção      %f      %f\n", t.total_selection, t.total_selection_cpu);
    printf("−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");

    return 0;
}
