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

void escreverMatriz(int matriz[][TAMANHO]) {
    int i = 0, j = 0;
    puts("Matriz Normal");
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}

void escreverMatrizInvertida(int matriz[][TAMANHO]) {
    int i, j;

    puts("Matriz B");
    for (i = 0; i < TAMANHO; ++i) {
        for (j = (TAMANHO - 1); j >= 0; --j) {
            printf(" %d", matriz[j][i]);
        }
        puts(" ");
    }
}