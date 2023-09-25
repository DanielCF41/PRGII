#include <stdio.h>
#include <libprg/libprg.h>

//------ VARIÁVEIS ------//
typedef struct {
    int a, b, elemento, temp;
} temp_t;
//-----------------------//

int main() {
    temp_t t;
    vetor_t v; // STRUCT libprg.h

    printf("Bem-vindo ao nosso sistema!\n");
    printf("Digite:\n");

    //------ LOOP DO MENU ------//
    while(1){
        printf("1 - Criar lista povoada;\n2 - Inserir um novo número;\n"
               "3 - Remover um número;\n4 - Buscar por um número usando busca linear;\n"
               "5 - Buscar por um número usando busca binária iterativa;\n"
               "6 - Buscar por um número usando busca binária recursiva;\n"
               "0 - Para encerrar o progama;\n");
        printf("Opção:");
        scanf("%d", &t.a);

        switch (t.a) {
            case 1:
                printf("Digite 1 para ordenada, e 2 para não ordenada:");
                scanf("%d", &t.b);
                printf("Entre com o tamanho:");
                scanf("%d", &v.tamanho);

                povoar(&v, t.b);
                v.total_elementos = v.tamanho;
                for(int i = 0; i < v.total_elementos; i++){
                    printf("%d ", v.vetor[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Entre com o elemento que será inserido:");
                scanf("%d", &t.elemento);
                if(inserir_n(&v, t.elemento) == -1){
                    printf("Lista cheia!\n");
                }
                break;

            case 3:
                printf("Entre com o elemento que será removido:");
                scanf("%d", &t.elemento);
                if(t.b == 1){
                    remover_o(&v, t.elemento);
                }else if(t.b == 2){
                    remover(&v, t.elemento);
                }
                for(int i = 0; i < v.total_elementos; i++){
                    printf("%d ", v.vetor[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Entre com o elemento que será procurado:");
                scanf("%d", &t.elemento);

                printf("Posição do elemento: %d\n", buscar_l(&v, t.elemento));
                break;

            case 5:
                if(t.b == 1) {
                    printf("Entre com o elemento que será procurado(Busca binária iterativa):");
                    scanf("%d", &t.elemento);
                    t.temp = buscar_bi(&v, t.elemento);
                    if(t.temp == -1){
                        printf("Elemento não encontrado no vetor\n");
                    }else{
                        printf("Posição do elemento: %d\n", t.temp);
                    }
                }else{
                    printf("Está opção é inválida para o tipo de vetor criado\n");
                }
                break;

            case 6:
                if(t.b == 1) {
                    printf("Entre com o elemento que será procurado(Busca binária recursiva):");
                    scanf("%d", &t.elemento);
                    t.temp = buscar_br(&v, v.vetor[0], v.vetor[v.tamanho], t.elemento);
                    if(t.temp == -1){
                        printf("Elemento não encontrado no vetor\n");
                    }else{
                        printf("Posição do elemento: %d\n", t.temp);
                    }
                }else{
                    printf("Esta opção é inválida para o tipo de vetor criado\n");
                }
                break;

            case 0:
                printf("Encerrando sistema!\n");
                libera(&v);
                return 0;
            default:
                printf("Opção inválida\n");
        }
    }
}
