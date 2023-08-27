#include <stdio.h>
#include "fat_it.c"
#include "fat_rec.c"
#include "sequencia_fibonacci.c"

int main() {
    printf("Hello, World!\n");
    printf("FAT_IT: %d\n", fat_it(0));
    printf("FAT_REC: %d\n", fat_rec(0));
    seq_fibo_it(8);
    return 0;
}
