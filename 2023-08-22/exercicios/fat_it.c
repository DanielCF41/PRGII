#include "funcoes.h"

int fat_it (int n){
    int resultado = 1;
    while(n > 1){
        resultado *= n;
        n--;
    }
    return resultado;
}
