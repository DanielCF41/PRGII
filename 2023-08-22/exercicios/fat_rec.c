#include "funcoes.h"

int fat_rec (int n){
    if(n == 0){
        return 1;
    }
    return (n * fat_rec(n - 1));
}