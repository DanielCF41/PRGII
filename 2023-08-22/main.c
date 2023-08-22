#include <stdio.h>

int mult_ite(int m, int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        resultado += m;
    }
    return resultado;
}

int mult_rec(int m, int n){
    if (n == 0){
        return 0;
    }
    return (m + mult_rec(m, n - 1));
}

int main() {
    printf("Hello, World!\n\n");
    printf("MULT_ITE: %d\n", mult_ite(2, 3));
    printf("MULT_REC: %d\n", mult_rec(2, 3));
    return 0;

}
