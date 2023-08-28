#include <stdio.h>
#include "funcoes.h"

int sequencia_fibo_rec(int n){
    if(n == 0 || n == 1){
        return n;
    }
   int atual = sequencia_fibo_rec(n - 1) + sequencia_fibo_rec(n - 2);
}