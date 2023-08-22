#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca_memoria_pilha(int quantidade){
    int tamanho = quantidade * (1<<20);
    char memoria[tamanho];
    printf("Vetor de tamanho: %d kB\n", tamanho/1024);
    printf("Endereço da variável tamanho: %p\n", (void*)&tamanho);
    printf("Distância entre o vetor e tamanho: %ld\n", ((char*)&tamanho-memoria)/1024);
    bzero(memoria, tamanho); // zera a memoria (bits)
    printf("zerou memória\n");
}
void aloca_memoria_heap(int quantidade){
    int tamanho = quantidade * (1<<20);
    char *memoria = calloc(tamanho, sizeof (char));
    printf("Vetor de tamanho: %d kB\n", tamanho/1024);
    printf("Endereço da variável tamanho: %p\n", (void*)&tamanho);
    printf("Distância entre o vetor e tamanho: %ld\n", ((char*)&tamanho-memoria)/1024);
    bzero(memoria, tamanho); // zera a memoria (bits)
    printf("zerou memória\n");
    free(memoria);
}

int main(int argc, char *argv[]){
    if(argc == 3){
        if(strcmp(argv[1], "p") == 0) {
            aloca_memoria_pilha(strtol(argv[2], NULL, 10));
        }else if(strcmp(argv[1], "h") == 0) {
            aloca_memoria_heap(strtol(argv[2], NULL, 10));
        }
        return 0;
    }
}