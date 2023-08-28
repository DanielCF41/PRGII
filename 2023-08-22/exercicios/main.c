#include <stdio.h>
#include "fat_it.c"
#include "fat_rec.c"
#include "sequencia_fibonacci.c"
#include "sequencia_fib_rec.c"

int main() {
    printf("Hello, World!\n");
    printf("FAT_IT: %d\n", fat_it(0));
    printf("FAT_REC: %d\n", fat_rec(0));
    seq_fibo_it(1);
    printf("REC - Sequencia de Fibonacci: ");
    for(int i = 0; i < 8; i++) {
        printf("%d ", sequencia_fibo_rec(i));
    }
    return 0;
}
