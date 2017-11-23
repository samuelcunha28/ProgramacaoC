#include <stdio.h>
#include "utils.h"

void preencherMatriz(int matriz[][TAMANHO]) {
    int i = 0, j = 0;
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        puts(" ");
    } 
}

void escreverMatriz(int mat[][TAMANHO]) {
    int i = 0, j = 0;
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf(" %d", mat[i][j]);
        }  
        puts(" ");
    } 
}
