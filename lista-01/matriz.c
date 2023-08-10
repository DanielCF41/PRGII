#include <stdio.h>
#include "matriz.h"

void matriz(){
    int i, j;
    printf("\n");

    for(i = 0; i < 10; i++){
        if(i == 5){
            printf("M(10,10) = |");
        }else {
            printf("           |");
        }
        for(j = 0; j < 10; j++){
            if(j == i){
                printf("1");
            }else {
                printf("0");
            }
        }
        printf("|");
        printf("\n");
    }
    return 0;
}
