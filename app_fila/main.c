#include <stdio.h>
#include <libprg/libprg.h>

typedef struct{
    int a, elemento, temp;
}temp_t;

int main() {
    temp_t t;
    fila_t f;
    printf("Bem-vindo ao nosso sistema!\n");
    while(1) {

    printf("--------- MENU ---------\n");
    printf("1 - Criar fila;\n2 - Inserir novo elemento;\n3 - Remover um elemento;\n");
    printf("DIGITE:");
    scanf("%d", &t.a);

        switch (t.a) {
            case 1:
                printf("Entre com o tamanho da fila:");
                scanf("%d", &f.fila->tamanho);
                cria(f.fila, f.fila->tamanho);
                break;
            case 2:
                printf("Entre com o elemento que será inserido:");
                scanf("%d", &t.elemento);
                if (enqueue(&f, t.elemento) == -1) {
                    printf("Não há espaço na fila\n");
                }else{
                    for(int i = 0; i < f.fila->total_elementos; i++){
                        printf("%d ", f.fila->vetor[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                t.temp = dequeue(&f);
                if (t.temp == -1) {
                    printf("A fila está vazia\n");
                } else {
                    printf("Elemento removido: %d\n", t.temp);
                }
                for(int i = 0; i < f.fila->total_elementos; i++){
                    printf("%d ", f.fila->vetor[i]);
                }
                printf("\n");
                break;
            case 0:
                printf("Encerrando o programa\n");
                return 0;
            default:
                printf("Opção inválida\n");
        }
    }
}
